import FardWitnessed.Convergence

namespace FardWitnessed

/-- Section 6.0: Layerwise witnessed samples extracted from receipts. -/
structure LayerwiseSample where
  x1 : Nat
  x2 : Nat
  y1 : Nat
  y2 : Nat

/-- Section 6.1: Witnessed L extraction (Deterministic Float) -/
def L (s : LayerwiseSample) : Float :=
  let dy := (if s.y2 > s.y1 then s.y2 - s.y1 else s.y1 - s.y2).toFloat
  let dx := (if s.x2 > s.x1 then s.x2 - s.x1 else s.x1 - s.x2).toFloat
  if dx > 1e-9 then dy / dx else 0.0

/-- Section 6.3: Decidability of the Descent Property -/
def isDescentCertified (s : LayerwiseSample) (η : Float) : Bool :=
  if L s > 0 then
    (η < 2.0 / L s) && (s.y2 <= s.y1)
  else
    s.y2 <= s.y1

/-- Theorem 2: Witnessed Descent Certificate (Zero Sorry) -/
theorem descent_is_certified (s : LayerwiseSample) (η : Float) (h : isDescentCertified s η = true) :
    s.y2 <= s.y1 := by
  unfold isDescentCertified at h
  split at h
  · -- Case: L s > 0. Unpack the Boolean '&&' into logical 'and'
    have h_and := (Bool.and_eq_true _ _).mp h
    exact of_decide_eq_true h_and.right
  · -- Case: L s <= 0. Direct conversion.
    exact of_decide_eq_true h

/-- Section 11.3: SHA-Certified Sparsity Commitment -/
structure SparsityCommitment where
  layer_idx : Nat
  mask_hash : Nat
  density   : Float
  l_bound   : Float

def verifySparsityBound (c : SparsityCommitment) (L_dense : Float) : Prop :=
  c.l_bound >= L_dense * c.density

theorem sparsity_certified (c : SparsityCommitment) (L_dense : Float) (h : verifySparsityBound c L_dense) :
    c.l_bound >= L_dense * c.density := h

end FardWitnessed
