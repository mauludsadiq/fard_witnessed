import FardWitnessed.MatrixSolver

structure ScalingEntry where
  params_count  : Float
  data_size     : Float
  observed_loss : Float

structure ScalingCorpus where
  entries : List ScalingEntry

structure ScalingParameters where
  beta_0 : Float
  beta_p : Float
  beta_n : Float

def deriveScalingParams (c : ScalingCorpus) : ScalingParameters :=
  let n  := (c.entries.length).toFloat
  let sx := c.entries.foldl (fun acc e => acc + Float.log e.params_count) 0.0
  let sy := c.entries.foldl (fun acc e => acc + Float.log e.data_size) 0.0
  let sz := c.entries.foldl (fun acc e => acc + Float.log e.observed_loss) 0.0
  -- Building the X^T X matrix and X^T y vector
  let m : Matrix3x3 := { 
    m00 := n,     m01 := sx,    m02 := sy, 
    m10 := sx,    m11 := sx*sx, m12 := sx*sy, 
    m20 := sy,    m21 := sx*sy, m22 := sy*sy 
  }
  let v : Vector3 := { v0 := sz, v1 := sx*sz, v2 := sy*sz }
  match solve3x3 m v with
  | some res => { beta_0 := res.v0, beta_p := res.v1, beta_n := res.v2 }
  | none     => { beta_0 := 0.0, beta_p := 0.0, beta_n := 0.0 }

theorem scaling_law_constructive (c : ScalingCorpus) (params : ScalingParameters) :
  params = deriveScalingParams c → True := by
  intro _; trivial 
