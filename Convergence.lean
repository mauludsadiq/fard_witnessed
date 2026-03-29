import Lean.Data.Json

structure Receipt where
  step          : Nat
  energy_pre    : Float
  energy_post   : Float
  grad_norm_sq  : Float
  learning_rate : Float
  l_constant    : Float

def verify_descent_step (r : Receipt) : Bool :=
  let delta := r.energy_post - r.energy_pre
  let bound := -r.learning_rate * r.grad_norm_sq + (r.l_constant * r.learning_rate^2 / 2.0) * r.grad_norm_sq
  delta <= bound

theorem descent_from_receipt (r : Receipt) (h : verify_descent_step r = true) :
  r.energy_post - r.energy_pre ≤ -r.learning_rate * r.grad_norm_sq + (r.l_constant * r.learning_rate^2 / 2.0) * r.grad_norm_sq := by
  simp [verify_descent_step] at h
  exact h

def verify_trajectory (trail : List Receipt) : Bool :=
  trail.all verify_descent_step

theorem trajectory_is_witnessed (trail : List Receipt) (h : verify_trajectory trail = true) :
  ∀ r ∈ trail, r.energy_post - r.energy_pre ≤ -r.learning_rate * r.grad_norm_sq + (r.l_constant * r.learning_rate^2 / 2.0) * r.grad_norm_sq := by
  intro r hr
  have h_step := (List.all_eq_true.mp h) r hr
  exact descent_from_receipt r h_step
