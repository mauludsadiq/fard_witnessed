// Lean compiler output
// Module: FardWitnessed.Convergence
// Imports: public import Init public import FardWitnessed.MeasurePreservation
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
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_FardWitnessed_FardWitnessed_WitnessedTrajectory_00_u0394(lean_object*, lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_FardWitnessed_FardWitnessed_WitnessedTrajectory_00_u0394Layer(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_FardWitnessed_FardWitnessed_LayerwiseTrajectory_00_u0394(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_FardWitnessed_FardWitnessed_WitnessedTrajectory_00_u0394(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc_ref(x_3);
lean_dec_ref(x_1);
x_4 = lean_unsigned_to_nat(1u);
x_5 = lean_nat_add(x_2, x_4);
lean_inc_ref(x_3);
x_6 = lean_apply_1(x_3, x_5);
x_7 = lean_nat_to_int(x_6);
x_8 = lean_apply_1(x_3, x_2);
x_9 = lean_nat_to_int(x_8);
x_10 = lean_int_sub(x_7, x_9);
lean_dec(x_9);
lean_dec(x_7);
return x_10;
}
}
LEAN_EXPORT lean_object* lp_FardWitnessed_FardWitnessed_WitnessedTrajectory_00_u0394Layer(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lp_FardWitnessed_FardWitnessed_WitnessedTrajectory_00_u0394(x_1, x_3);
x_5 = lean_nat_to_int(x_2);
x_6 = lean_int_add(x_4, x_5);
lean_dec(x_4);
x_7 = lean_int_sub(x_6, x_5);
lean_dec(x_5);
lean_dec(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* lp_FardWitnessed_FardWitnessed_LayerwiseTrajectory_00_u0394(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc_ref(x_4);
lean_dec_ref(x_1);
x_5 = lean_unsigned_to_nat(1u);
x_6 = lean_nat_add(x_3, x_5);
lean_inc_ref(x_4);
lean_inc(x_2);
x_7 = lean_apply_2(x_4, x_2, x_6);
x_8 = lean_nat_to_int(x_7);
x_9 = lean_apply_2(x_4, x_2, x_3);
x_10 = lean_nat_to_int(x_9);
x_11 = lean_int_sub(x_8, x_10);
lean_dec(x_10);
lean_dec(x_8);
return x_11;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_FardWitnessed_FardWitnessed_MeasurePreservation(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_FardWitnessed_FardWitnessed_Convergence(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_FardWitnessed_FardWitnessed_MeasurePreservation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
