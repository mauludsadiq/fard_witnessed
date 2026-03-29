// Lean compiler output
// Module: FardWitnessed.ProbabilityLifting
// Imports: public import Init public import FardWitnessed.WitnessedRandomness
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_FardWitnessed_FardWitnessed_NoiseDrivenSystem_run___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_FardWitnessed_FardWitnessed_NoiseDrivenSystem_run___lam__0___boxed(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_FardWitnessed_FardWitnessed_NoiseDrivenSystem_run(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_FardWitnessed___private_FardWitnessed_ProbabilityLifting_0__FardWitnessed_NoiseDrivenSystem_run_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_FardWitnessed___private_FardWitnessed_ProbabilityLifting_0__FardWitnessed_NoiseDrivenSystem_run_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_FardWitnessed___private_FardWitnessed_ProbabilityLifting_0__FardWitnessed_NoiseDrivenSystem_run_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_FardWitnessed___private_FardWitnessed_ProbabilityLifting_0__FardWitnessed_NoiseDrivenSystem_run_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_FardWitnessed_FardWitnessed_liftedProcess(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_FardWitnessed_FardWitnessed_NoiseDrivenSystem_run___lam__0(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_unsigned_to_nat(1u);
x_4 = lean_nat_add(x_2, x_3);
x_5 = lean_apply_1(x_1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* lp_FardWitnessed_FardWitnessed_NoiseDrivenSystem_run___lam__0___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_FardWitnessed_FardWitnessed_NoiseDrivenSystem_run___lam__0(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_FardWitnessed_FardWitnessed_NoiseDrivenSystem_run(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_eq(x_2, x_5);
if (x_6 == 1)
{
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_inc(x_4);
x_7 = lean_alloc_closure((void*)(lp_FardWitnessed_FardWitnessed_NoiseDrivenSystem_run___lam__0___boxed), 2, 1);
lean_closure_set(x_7, 0, x_4);
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_sub(x_2, x_8);
lean_dec(x_2);
x_10 = lean_apply_1(x_4, x_5);
lean_inc(x_1);
x_11 = lean_apply_2(x_1, x_3, x_10);
x_2 = x_9;
x_3 = x_11;
x_4 = x_7;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_FardWitnessed___private_FardWitnessed_ProbabilityLifting_0__FardWitnessed_NoiseDrivenSystem_run_match__1_splitter___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_eq(x_1, x_6);
if (x_7 == 1)
{
lean_object* x_8; 
lean_dec(x_5);
x_8 = lean_apply_2(x_4, x_2, x_3);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_4);
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_sub(x_1, x_9);
x_11 = lean_apply_3(x_5, x_10, x_2, x_3);
return x_11;
}
}
}
LEAN_EXPORT lean_object* lp_FardWitnessed___private_FardWitnessed_ProbabilityLifting_0__FardWitnessed_NoiseDrivenSystem_run_match__1_splitter___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lp_FardWitnessed___private_FardWitnessed_ProbabilityLifting_0__FardWitnessed_NoiseDrivenSystem_run_match__1_splitter___redArg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* lp_FardWitnessed___private_FardWitnessed_ProbabilityLifting_0__FardWitnessed_NoiseDrivenSystem_run_match__1_splitter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_nat_dec_eq(x_3, x_8);
if (x_9 == 1)
{
lean_object* x_10; 
lean_dec(x_7);
x_10 = lean_apply_2(x_6, x_4, x_5);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_6);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_sub(x_3, x_11);
x_13 = lean_apply_3(x_7, x_12, x_4, x_5);
return x_13;
}
}
}
LEAN_EXPORT lean_object* lp_FardWitnessed___private_FardWitnessed_ProbabilityLifting_0__FardWitnessed_NoiseDrivenSystem_run_match__1_splitter___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lp_FardWitnessed___private_FardWitnessed_ProbabilityLifting_0__FardWitnessed_NoiseDrivenSystem_run_match__1_splitter(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_3);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* lp_FardWitnessed_FardWitnessed_liftedProcess(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lp_FardWitnessed_FardWitnessed_NoiseDrivenSystem_run(x_1, x_3, x_2, x_4);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_FardWitnessed_FardWitnessed_WitnessedRandomness(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_FardWitnessed_FardWitnessed_ProbabilityLifting(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_FardWitnessed_FardWitnessed_WitnessedRandomness(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
