namespace FardWitnessed

abbrev Receipt := Nat

class HasNorm (α : Type u) where
  norm : α → Nat

prefix:max "‖" => HasNorm.norm
postfix:max "‖" => HasNorm.norm

instance : HasNorm Nat where
  norm := id

instance : HasNorm Int where
  norm := Int.natAbs

instance : HasNorm (List α) where
  norm := List.length

class HasEnergy (α : Type u) where
  energy : α → Nat

notation:max "ℰ[" a "]" => HasEnergy.energy a

class HasGradient (α : Type u) where
  grad : α → Nat

notation:max "∇[" a "]" => HasGradient.grad a

/-- A finite trace with a final state and final receipt. -/
structure Trace (σ : Type u) where
  states : List σ
  receipts : List Receipt

namespace Trace

variable {σ : Type u}

def lastState? (tr : Trace σ) : Option σ :=
  tr.states.getLast?

def lastReceipt? (tr : Trace σ) : Option Receipt :=
  tr.receipts.getLast?

end Trace

/-- A simple monotone running supremum over naturals. -/
def runningSup (a b : Nat) : Nat := Nat.max a b

@[simp] theorem runningSup_left (a b : Nat) : a ≤ runningSup a b := by
  unfold runningSup
  exact Nat.le_max_left _ _

@[simp] theorem runningSup_right (a b : Nat) : b ≤ runningSup a b := by
  unfold runningSup
  exact Nat.le_max_right _ _

/-- Pointwise equality of functions on the initial segment `[0, T)`. -/
def PathEqUpto {α : Type u} (T : Nat) (f g : Nat → α) : Prop :=
  ∀ t, t < T → f t = g t

@[simp] theorem PathEqUpto_zero {α : Type u} (f g : Nat → α) : PathEqUpto 0 f g := by
  intro t ht
  exact False.elim (Nat.not_lt_zero _ ht)

/-- A finite-data notion of exact distributional agreement on a prefix. -/
def SameCountsOnPrefix {α : Type u} [DecidableEq α] (T : Nat) (f g : Nat → α) : Prop :=
  ∀ a, ((List.range T).map f).count a = ((List.range T).map g).count a

/-- Deterministic function composition as an explicit operator. -/
def compose {α β γ : Type u} (g : β → γ) (f : α → β) : α → γ :=
  fun x => g (f x)

infixr:80 " ∘₀ " => compose

/-- Maximum of a list of naturals. -/
def maxList : List Nat → Nat
  | [] => 0
  | x :: xs => xs.foldl Nat.max x

/-- Minimum of a list of naturals, defaulting to zero on the empty list. -/
def minList : List Nat → Nat
  | [] => 0
  | x :: xs => xs.foldl Nat.min x

@[simp] theorem maxList_nil : maxList [] = 0 := rfl
@[simp] theorem minList_nil : minList [] = 0 := rfl

end FardWitnessed
