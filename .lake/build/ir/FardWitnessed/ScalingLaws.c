// Lean compiler output
// Module: FardWitnessed.ScalingLaws
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
double l_Float_ofScientific(lean_object*, uint8_t, lean_object*);
static lean_once_cell_t lp_FardWitnessed_FardWitnessed_ScalingCorpus_designRow___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double lp_FardWitnessed_FardWitnessed_ScalingCorpus_designRow___closed__0;
LEAN_EXPORT lean_object* lp_FardWitnessed_FardWitnessed_ScalingCorpus_designRow___boxed__const__1;
double lean_float_of_nat(lean_object*);
double log(double);
LEAN_EXPORT lean_object* lp_FardWitnessed_FardWitnessed_ScalingCorpus_designRow(lean_object*);
LEAN_EXPORT double lp_FardWitnessed_FardWitnessed_ScalingCorpus_response(lean_object*);
LEAN_EXPORT lean_object* lp_FardWitnessed_FardWitnessed_ScalingCorpus_response___boxed(lean_object*);
double lean_float_mul(double, double);
double lean_float_add(double, double);
double lean_float_sub(double, double);
LEAN_EXPORT double lp_FardWitnessed_FardWitnessed_ScalingCertificate_residual(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_FardWitnessed_FardWitnessed_ScalingCertificate_residual___boxed(lean_object*, lean_object*);
static double _init_lp_FardWitnessed_FardWitnessed_ScalingCorpus_designRow___closed__0(void) {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; double x_4; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = 1;
x_3 = lean_unsigned_to_nat(10u);
x_4 = l_Float_ofScientific(x_3, x_2, x_1);
return x_4;
}
}
static lean_object* _init_lp_FardWitnessed_FardWitnessed_ScalingCorpus_designRow___boxed__const__1(void) {
_start:
{
double x_1; lean_object* x_2; 
x_1 = lean_float_once(&lp_FardWitnessed_FardWitnessed_ScalingCorpus_designRow___closed__0, &lp_FardWitnessed_FardWitnessed_ScalingCorpus_designRow___closed__0_once, _init_lp_FardWitnessed_FardWitnessed_ScalingCorpus_designRow___closed__0);
x_2 = lean_box_float(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* lp_FardWitnessed_FardWitnessed_ScalingCorpus_designRow(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; double x_4; double x_5; double x_6; double x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec_ref(x_1);
x_4 = lean_float_of_nat(x_2);
x_5 = log(x_4);
x_6 = lean_float_of_nat(x_3);
x_7 = log(x_6);
x_8 = lean_box_float(x_5);
x_9 = lean_box_float(x_7);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_9);
x_11 = lp_FardWitnessed_FardWitnessed_ScalingCorpus_designRow___boxed__const__1;
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_10);
return x_12;
}
}
LEAN_EXPORT double lp_FardWitnessed_FardWitnessed_ScalingCorpus_response(lean_object* x_1) {
_start:
{
double x_2; double x_3; 
x_2 = lean_ctor_get_float(x_1, sizeof(void*)*2);
x_3 = log(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_FardWitnessed_FardWitnessed_ScalingCorpus_response___boxed(lean_object* x_1) {
_start:
{
double x_2; lean_object* x_3; 
x_2 = lp_FardWitnessed_FardWitnessed_ScalingCorpus_response(x_1);
lean_dec_ref(x_1);
x_3 = lean_box_float(x_2);
return x_3;
}
}
LEAN_EXPORT double lp_FardWitnessed_FardWitnessed_ScalingCertificate_residual(lean_object* x_1, lean_object* x_2) {
_start:
{
double x_3; double x_4; double x_5; lean_object* x_6; lean_object* x_7; double x_8; double x_9; double x_10; double x_11; double x_12; double x_13; double x_14; double x_15; double x_16; double x_17; 
x_3 = lean_ctor_get_float(x_1, 0);
x_4 = lean_ctor_get_float(x_1, 8);
x_5 = lean_ctor_get_float(x_1, 16);
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
x_8 = lp_FardWitnessed_FardWitnessed_ScalingCorpus_response(x_2);
lean_dec_ref(x_2);
x_9 = lean_float_of_nat(x_6);
x_10 = log(x_9);
x_11 = lean_float_mul(x_4, x_10);
x_12 = lean_float_add(x_3, x_11);
x_13 = lean_float_of_nat(x_7);
x_14 = log(x_13);
x_15 = lean_float_mul(x_5, x_14);
x_16 = lean_float_add(x_12, x_15);
x_17 = lean_float_sub(x_8, x_16);
return x_17;
}
}
LEAN_EXPORT lean_object* lp_FardWitnessed_FardWitnessed_ScalingCertificate_residual___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
double x_3; lean_object* x_4; 
x_3 = lp_FardWitnessed_FardWitnessed_ScalingCertificate_residual(x_1, x_2);
lean_dec_ref(x_1);
x_4 = lean_box_float(x_3);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_FardWitnessed_FardWitnessed_Convergence(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_FardWitnessed_FardWitnessed_ScalingLaws(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_FardWitnessed_FardWitnessed_Convergence(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_FardWitnessed_FardWitnessed_ScalingCorpus_designRow___boxed__const__1 = _init_lp_FardWitnessed_FardWitnessed_ScalingCorpus_designRow___boxed__const__1();
lean_mark_persistent(lp_FardWitnessed_FardWitnessed_ScalingCorpus_designRow___boxed__const__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
