import FardWitnessed.Generalization

namespace FardWitnessed

/-- Unified stack certificate bundling the main witnessed objects. -/
structure UnifiedStack where
  baseReceipt : Receipt
  scalingReceipt : Receipt
  evaluationReceipt : Receipt
  finalReceipt : Receipt

/-- Final classification of the stack as a fully witnessed learning system. -/
structure ClosedWitnessedLearningStack where
  probabilityLifted : Prop
  pathMeasurePreserved : Prop
  convergenceWitnessed : Prop
  lipschitzWitnessed : Prop
  scalingWitnessed : Prop
  generalizationWitnessed : Prop

namespace ClosedWitnessedLearningStack

/-- The stack is closed when all six witnessed properties hold. -/
def Closed (s : ClosedWitnessedLearningStack) : Prop :=
  s.probabilityLifted ∧
  s.pathMeasurePreserved ∧
  s.convergenceWitnessed ∧
  s.lipschitzWitnessed ∧
  s.scalingWitnessed ∧
  s.generalizationWitnessed

/-- Constructor theorem for closedness. -/
theorem mkClosed (s : ClosedWitnessedLearningStack)
    (h₁ : s.probabilityLifted)
    (h₂ : s.pathMeasurePreserved)
    (h₃ : s.convergenceWitnessed)
    (h₄ : s.lipschitzWitnessed)
    (h₅ : s.scalingWitnessed)
    (h₆ : s.generalizationWitnessed) :
    s.Closed := by
  exact ⟨h₁, h₂, h₃, h₄, h₅, h₆⟩

end ClosedWitnessedLearningStack

end FardWitnessed
