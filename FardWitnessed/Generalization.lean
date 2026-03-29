import FardWitnessed.Convergence

namespace FardWitnessed

structure CompressionSummary where
  trainSize : Nat
  traceSize : Nat

namespace CompressionSummary

/-- Section 17.1: Receipt-backed compression ratio surrogate. -/
def κ (c : CompressionSummary) : Nat :=
  if c.trainSize = 0 then 0 else c.traceSize / c.trainSize

@[simp] theorem κ_deterministic (c : CompressionSummary) : c.κ = c.κ := rfl

end CompressionSummary

end FardWitnessed
