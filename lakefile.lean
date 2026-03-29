import Lake
open Lake DSL System

package fard_witnessed where

lean_lib FardWitnessed where
  srcDir := "."

@[default_target]
lean_exe fard_witnessed where
  root := `Main
