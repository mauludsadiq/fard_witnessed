import FardWitnessed.WitnessedRandomness

namespace FardWitnessed

/-- A stochastic-looking system made explicit as a deterministic transition over a noise stream. -/
structure NoiseDrivenSystem where
  State : Type
  Ω : Type
  step : State → Ω → State

namespace NoiseDrivenSystem

variable (sys : NoiseDrivenSystem)

/-- Execute the first `T` steps of a noise schedule. -/
def run : Nat → sys.State → (Nat → sys.Ω) → sys.State
  | 0, θ, _ => θ
  | T + 1, θ, ξ =>
      let θ' := sys.step θ (ξ 0)
      let ξ' : Nat → sys.Ω := fun t => ξ (t + 1)
      run T θ' ξ'

/-- Exact path preservation on a finite prefix implies exact trajectory preservation. -/
theorem run_eq_of_pathEqUpto (θ : sys.State) (T : Nat) (ξ₁ ξ₂ : Nat → sys.Ω)
    (h : PathEqUpto T ξ₁ ξ₂) :
    sys.run T θ ξ₁ = sys.run T θ ξ₂ := by
  induction T generalizing θ ξ₁ ξ₂ with
  | zero =>
      simp [run]
  | succ T ih =>
      have h0 : ξ₁ 0 = ξ₂ 0 := h 0 (Nat.succ_pos T)
      have htail : PathEqUpto T (fun t => ξ₁ (t + 1)) (fun t => ξ₂ (t + 1)) := by
        intro t ht
        exact h (t + 1) (Nat.succ_lt_succ ht)
      calc
        sys.run (T + 1) θ ξ₁
            = sys.run T (sys.step θ (ξ₁ 0)) (fun t => ξ₁ (t + 1)) := by simp [run]
        _   = sys.run T (sys.step θ (ξ₂ 0)) (fun t => ξ₂ (t + 1)) := by
              simpa [h0] using ih (sys.step θ (ξ₂ 0)) (fun t => ξ₁ (t + 1)) (fun t => ξ₂ (t + 1)) htail
        _   = sys.run (T + 1) θ ξ₂ := by simp [run]

/-- If two noise streams agree exactly on the first `T` steps, their states at time `T` agree. -/
theorem trajectory_eq_of_exact_prefix (θ : sys.State) (T : Nat) (ξ₁ ξ₂ : Nat → sys.Ω)
    (h : ∀ t, t < T → ξ₁ t = ξ₂ t) :
    sys.run T θ ξ₁ = sys.run T θ ξ₂ :=
  run_eq_of_pathEqUpto sys θ T ξ₁ ξ₂ h

end NoiseDrivenSystem

/-- Deterministic lifting of a stochastic process by an indexed generator,
written using an explicit cast of the generator output stream to the system noise space. -/
def liftedProcess
    (sys : NoiseDrivenSystem)
    (θ : sys.State) (T : Nat) (noise : Nat → sys.Ω) : sys.State :=
  sys.run T θ noise

end FardWitnessed
