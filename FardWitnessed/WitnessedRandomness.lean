import FardWitnessed.BaseSystem

namespace FardWitnessed

/-- Indexed deterministic generator. -/
structure WitnessedGenerator where
  Seed : Type
  Context : Type
  Ω : Type
  generate : Seed → Nat → Context → Ω

namespace WitnessedGenerator

variable (g : WitnessedGenerator)

/-- Determinism of the generator. -/
theorem deterministic (s : g.Seed) (t : Nat) (c : g.Context) :
    g.generate s t c = g.generate s t c := rfl

/-- The generated path is fully determined by `(s, c)`. -/
def path (s : g.Seed) (c : g.Context) : Nat → g.Ω :=
  fun t => g.generate s t c

@[simp] theorem path_eval (s : g.Seed) (c : g.Context) (t : Nat) :
    g.path s c t = g.generate s t c := rfl

end WitnessedGenerator

/-- A noise schedule extracted from a witnessed generator. -/
def liftedNoise {g : WitnessedGenerator} (s : g.Seed) (c : g.Context) : Nat → g.Ω :=
  fun t => g.generate s t c

end FardWitnessed
