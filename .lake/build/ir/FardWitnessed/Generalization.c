// Lean compiler output
// Module: FardWitnessed.Generalization
// Imports: public import Init public import FardWitnessed.Convergence
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
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_FardWitnessed_FardWitnessed_CompressionSummary_00_u03ba(lean_object*);
LEAN_EXPORT lean_object* lp_FardWitnessed_FardWitnessed_CompressionSummary_00_u03ba___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_FardWitnessed_FardWitnessed_CompressionSummary_00_u03ba(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_2 = lean_ctor_get(x_1, 0);
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_2, x_4);
if (x_5 == 0)
{
lean_object* x_6; 
x_6 = lean_nat_div(x_3, x_2);
return x_6;
}
else
{
return x_4;
}
}
}
LEAN_EXPORT lean_object* lp_FardWitnessed_FardWitnessed_CompressionSummary_00_u03ba___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lp_FardWitnessed_FardWitnessed_CompressionSummary_00_u03ba(x_1);
lean_dec_ref(x_1);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_FardWitnessed_FardWitnessed_Convergence(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_FardWitnessed_FardWitnessed_Generalization(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_FardWitnessed_FardWitnessed_Convergence(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
