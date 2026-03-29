import FardWitnessed.MeasurePreservation

namespace FardWitnessed

/-- A witnessed optimization trajectory with explicit numerical tags. -/
structure WitnessedTrajectory where
  energy : Nat → Nat
  gradNormSq : Nat → Nat
  receipts : Nat → Receipt

namespace WitnessedTrajectory

variable (tr : WitnessedTrajectory)

/-- Descent gap between consecutive steps. -/
def Δ (t : Nat) : Int :=
  Int.ofNat (tr.energy (t + 1)) - Int.ofNat (tr.energy t)

/-- Layerwise gap. -/
def ΔLayer (i t : Nat) : Int :=
  tr.Δ t + Int.ofNat i - Int.ofNat i

end WitnessedTrajectory

/-- A witnessed descent certificate records the inequality used in analysis. -/
structure DescentCertificate (tr : WitnessedTrajectory) where
  η : Nat
  L : Nat
  descentBound : ∀ t,
    Int.ofNat (tr.energy (t + 1)) - Int.ofNat (tr.energy t)
      ≤ - (Int.ofNat η) * Int.ofNat (tr.gradNormSq t)
        + ((Int.ofNat L) * (Int.ofNat η) * (Int.ofNat η) / 2) * Int.ofNat (tr.gradNormSq t)
  safeStep : η * L < 2 * L ∨ L = 0

namespace DescentCertificate

variable {tr : WitnessedTrajectory} (cert : DescentCertificate tr)

/-- The witnessed bound is exactly the stored certificate inequality. -/
theorem descent_recorded (t : Nat) :
    Int.ofNat (tr.energy (t + 1)) - Int.ofNat (tr.energy t)
      ≤ - (Int.ofNat cert.η) * Int.ofNat (tr.gradNormSq t)
        + ((Int.ofNat cert.L) * (Int.ofNat cert.η) * (Int.ofNat cert.η) / 2) * Int.ofNat (tr.gradNormSq t) :=
  cert.descentBound t

end DescentCertificate

/-- A minimal layerwise decomposition sufficient for certified local descent. -/
structure LayerwiseTrajectory where
  layers : Nat
  energy : Nat → Nat → Nat
  gradNormSq : Nat → Nat → Nat
  receipts : Nat → Receipt

namespace LayerwiseTrajectory

variable (tr : LayerwiseTrajectory)

def Δ (i t : Nat) : Int :=
  Int.ofNat (tr.energy i (t + 1)) - Int.ofNat (tr.energy i t)

end LayerwiseTrajectory

structure LayerwiseDescentCertificate (tr : LayerwiseTrajectory) where
  η : Nat
  εcoupling : Nat
  descentBound : ∀ i t,
    tr.Δ i t ≤ - (Int.ofNat η) * Int.ofNat (tr.gradNormSq i t) + Int.ofNat εcoupling

namespace LayerwiseDescentCertificate

variable {tr : LayerwiseTrajectory} (cert : LayerwiseDescentCertificate tr)

/-- Certified layerwise descent is directly readable from the certificate. -/
theorem layer_descent_recorded (i t : Nat) :
    tr.Δ i t ≤ - (Int.ofNat cert.η) * Int.ofNat (tr.gradNormSq i t) + Int.ofNat cert.εcoupling :=
  cert.descentBound i t

end LayerwiseDescentCertificate

/-- Localized scaling compares lower-block trajectories only. -/
structure ScalingComparison where
  lowerDeviation : Nat → Nat
  receipts : Nat → Receipt
  invariant : ∀ t, lowerDeviation t = 0

namespace ScalingComparison

variable (cmp : ScalingComparison)

theorem lower_layers_invariant (t : Nat) : cmp.lowerDeviation t = 0 :=
  cmp.invariant t

end ScalingComparison

/-- Witnessed convergence is encoded as eventual constancy of the trajectory. -/
structure WitnessedConvergence (tr : WitnessedTrajectory) where
  terminalTime : Nat
  stationary : ∀ t, terminalTime ≤ t → tr.energy (t + 1) = tr.energy t

namespace WitnessedConvergence

variable {tr : WitnessedTrajectory} (wc : WitnessedConvergence tr)

/-- After the terminal time, the trajectory is energy-stationary. -/
theorem stationary_after (t : Nat) (ht : wc.terminalTime ≤ t) :
    tr.energy (t + 1) = tr.energy t :=
  wc.stationary t ht

end WitnessedConvergence

end FardWitnessed
