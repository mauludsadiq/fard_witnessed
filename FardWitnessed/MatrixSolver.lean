import FardWitnessed.Foundation

/-- A 3x3 Symmetric Matrix for the Normal Equations: (X^T X) -/
structure Matrix3x3 where
  m00 : Float
  m01 : Float
  m02 : Float
  m10 : Float
  m11 : Float
  m12 : Float
  m20 : Float
  m21 : Float
  m22 : Float

/-- A 3-element vector: (X^T y) -/
structure Vector3 where
  v0 : Float
  v1 : Float
  v2 : Float

/-- Determinant for Cramer's Rule or Inversion -/
def det3x3 (m : Matrix3x3) : Float :=
  m.m00 * (m.m11 * m.m22 - m.m12 * m.m21) -
  m.m01 * (m.m10 * m.m22 - m.m12 * m.m20) +
  m.m02 * (m.m10 * m.m21 - m.m11 * m.m20)

/-- Solve (X^T X) b = (X^T y) using Cramer's Rule for deterministic replay -/
def solve3x3 (m : Matrix3x3) (v : Vector3) : Option Vector3 :=
  let d := det3x3 m
  if d == 0 then none
  else
    -- Solving for beta_0, beta_p, beta_n
    some { 
      v0 := (det3x3 { m with m00 := v.v0, m10 := v.v1, m20 := v.v2 }) / d,
      v1 := (det3x3 { m with m01 := v.v0, m11 := v.v1, m21 := v.v2 }) / d,
      v2 := (det3x3 { m with m02 := v.v0, m12 := v.v1, m22 := v.v2 }) / d
    }
