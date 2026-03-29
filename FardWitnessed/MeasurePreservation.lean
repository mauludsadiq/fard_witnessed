import FardWitnessed.ProbabilityLifting

namespace FardWitnessed

/-- Finite precision witnesses collapse continuous-looking spaces to finite carriers. -/
class FinitePrecision (Ω : Type u) where
  carrier : List Ω
  complete : ∀ x : Ω, x ∈ carrier

/-- Exact discrete lifting on a prefix. -/
structure ExactDiscreteLifting (Ω : Type u) where
  source : Nat → Ω
  lifted : Nat → Ω
  horizon : Nat
  exactOnHorizon : PathEqUpto horizon source lifted

/-- Approximate continuous lifting encoded as exact lifting on a finite quantization. -/
structure ApproximateLifting (Ω : Type u) where
  source : Nat → Ω
  lifted : Nat → Ω
  horizon : Nat
  ε : Nat
  exactOnHorizon : PathEqUpto horizon source lifted

namespace ExactDiscreteLifting

variable {Ω : Type u} (e : ExactDiscreteLifting Ω)

theorem path_preserved (t : Nat) (ht : t < e.horizon) :
    e.source t = e.lifted t :=
  e.exactOnHorizon t ht

end ExactDiscreteLifting

namespace ApproximateLifting

variable {Ω : Type u} (a : ApproximateLifting Ω)

theorem quantized_path_preserved (t : Nat) (ht : t < a.horizon) :
    a.source t = a.lifted t :=
  a.exactOnHorizon t ht

end ApproximateLifting

theorem finite_state_closure (Ω : Type u) [FinitePrecision Ω] (x : Ω) :
    x ∈ (FinitePrecision.carrier (Ω := Ω)) := by
  exact FinitePrecision.complete x

/-- Canonical completeness statement for probability lifting on finite horizons. -/
structure ProbabilityLiftingCompleteness where
  /-- The deterministic substrate types --/
  State : Type
  Ω : Type

  /-- The Witnessed System (Section 1.2) --/
  sys : NoiseDrivenSystem

  /-- Constraints: The system must operate on the structure's types --/
  h_state : sys.State = State
  h_omega : sys.Ω = Ω

  /-- The Trajectory (Section 4.1) --/
  source : Nat → Ω
  lifted : Nat → Ω
  horizon : Nat
  exactOnHorizon : PathEqUpto horizon source lifted

namespace ProbabilityLiftingCompleteness

variable (p : ProbabilityLiftingCompleteness)

theorem lifted_path_eq (t : Nat) (ht : t < p.horizon) :
    p.source t = p.lifted t :=
  p.exactOnHorizon t ht

/-- Path preservation implies trajectory preservation for any system with the same noise space. -/
theorem run_eq_of_exact_lift (p : ProbabilityLiftingCompleteness) (θ : p.State) :
      p.sys.run p.horizon (p.h_state ▸ θ) (fun t => p.h_omega ▸ p.source t) =
      p.sys.run p.horizon (p.h_state ▸ θ) (fun t => p.h_omega ▸ p.lifted t) := by
    let { State, Ω, sys, h_state, h_omega, source, lifted, horizon, exactOnHorizon } := p
    subst h_state h_omega
    -- Witnessed Path Equivalence (Section 4.1)
    exact sys.run_eq_of_pathEqUpto θ horizon source lifted exactOnHorizon

end ProbabilityLiftingCompleteness

end FardWitnessed
