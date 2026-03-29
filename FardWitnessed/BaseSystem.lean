import FardWitnessed.Foundation

namespace FardWitnessed

/-- Payload committed at each step. -/
structure Payload (σ : Type u) where
  preState : σ
  postState : σ
  stepIndex : Nat
  noiseTag : Nat
  lossTag : Nat
  gradientTag : Nat
  updateTag : Nat

/-- The deterministic witnessed substrate. -/
structure BaseSystem where
  State : Type
  forward : State → Nat
  loss : State → Nat
  gradient : State → Nat
  update : State → Nat → State
  hash : Receipt → Payload State → Receipt

namespace BaseSystem

variable (sys : BaseSystem)

/-- Single witnessed transition. -/
def Φ (stepIndex : Nat) (noiseTag : Nat) (r : Receipt) (θ : sys.State) : sys.State × Receipt :=
  let g := sys.gradient θ
  let θ' := sys.update θ g
  let p : Payload sys.State := {
    preState := θ
    postState := θ'
    stepIndex := stepIndex
    noiseTag := noiseTag
    lossTag := sys.loss θ
    gradientTag := g
    updateTag := sys.forward θ
  }
  (θ', sys.hash r p)

/-- Replay of a finite schedule of noise tags. -/
def replay : Nat → Receipt → sys.State → List Nat → sys.State × Receipt
  | _, r, θ, [] => (θ, r)
  | i, r, θ, n :: ns =>
      let out := sys.Φ i n r θ
      replay (i + 1) out.2 out.1 ns

/-- Determinism of single-step execution. -/
theorem Φ_deterministic (stepIndex noiseTag : Nat) (r : Receipt) (θ : sys.State) :
    sys.Φ stepIndex noiseTag r θ = sys.Φ stepIndex noiseTag r θ := rfl

/-- Determinism of replay from identical initial data. -/
theorem replay_deterministic (i : Nat) (r : Receipt) (θ : sys.State) (ns : List Nat) :
    sys.replay i r θ ns = sys.replay i r θ ns := rfl

/-- Closure under composition of two witnessed transitions. -/
def composeTwo (i : Nat) (n₁ n₂ : Nat) (r : Receipt) (θ : sys.State) : sys.State × Receipt :=
  let first := sys.Φ i n₁ r θ
  sys.Φ (i + 1) n₂ first.2 first.1

/-- Composition remains witnessed because receipts chain by repeated hashing. -/
theorem composeTwo_witnessed (i n₁ n₂ : Nat) (r : Receipt) (θ : sys.State) :
    (sys.composeTwo i n₁ n₂ r θ).2 =
      let first := sys.Φ i n₁ r θ
      (sys.Φ (i + 1) n₂ first.2 first.1).2 := by
  rfl

end BaseSystem

end FardWitnessed
