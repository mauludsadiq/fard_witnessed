// Lean compiler output
// Module: FardWitnessed.LayerwiseLipschitz
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
static lean_once_cell_t lp_FardWitnessed_FardWitnessed_L___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double lp_FardWitnessed_FardWitnessed_L___closed__0;
static lean_once_cell_t lp_FardWitnessed_FardWitnessed_L___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static double lp_FardWitnessed_FardWitnessed_L___closed__1;
double lean_float_of_nat(lean_object*);
uint8_t lean_float_decLt(double, double);
double lean_float_div(double, double);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT double lp_FardWitnessed_FardWitnessed_L(lean_object*);
LEAN_EXPORT lean_object* lp_FardWitnessed_FardWitnessed_L___boxed(lean_object*);
static lean_once_cell_t lp_FardWitnessed_FardWitnessed_isDescentCertified___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double lp_FardWitnessed_FardWitnessed_isDescentCertified___closed__0;
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_FardWitnessed_FardWitnessed_isDescentCertified(lean_object*, double);
LEAN_EXPORT lean_object* lp_FardWitnessed_FardWitnessed_isDescentCertified___boxed(lean_object*, lean_object*);
static double _init_lp_FardWitnessed_FardWitnessed_L___closed__0(void) {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; double x_4; 
x_1 = lean_unsigned_to_nat(9u);
x_2 = 1;
x_3 = lean_unsigned_to_nat(1u);
x_4 = l_Float_ofScientific(x_3, x_2, x_1);
return x_4;
}
}
static double _init_lp_FardWitnessed_FardWitnessed_L___closed__1(void) {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; double x_4; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = 1;
x_3 = lean_unsigned_to_nat(0u);
x_4 = l_Float_ofScientific(x_3, x_2, x_1);
return x_4;
}
}
LEAN_EXPORT double lp_FardWitnessed_FardWitnessed_L(lean_object* x_1) {
_start:
{
double x_2; lean_object* x_3; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_20; 
x_10 = lean_ctor_get(x_1, 0);
x_11 = lean_ctor_get(x_1, 1);
x_12 = lean_ctor_get(x_1, 2);
x_13 = lean_ctor_get(x_1, 3);
x_20 = lean_nat_dec_lt(x_12, x_13);
if (x_20 == 0)
{
lean_object* x_21; 
x_21 = lean_nat_sub(x_12, x_13);
x_14 = x_21;
goto block_19;
}
else
{
lean_object* x_22; 
x_22 = lean_nat_sub(x_13, x_12);
x_14 = x_22;
goto block_19;
}
block_9:
{
double x_4; double x_5; uint8_t x_6; 
x_4 = lean_float_of_nat(x_3);
x_5 = lean_float_once(&lp_FardWitnessed_FardWitnessed_L___closed__0, &lp_FardWitnessed_FardWitnessed_L___closed__0_once, _init_lp_FardWitnessed_FardWitnessed_L___closed__0);
x_6 = lean_float_decLt(x_5, x_4);
if (x_6 == 0)
{
double x_7; 
x_7 = lean_float_once(&lp_FardWitnessed_FardWitnessed_L___closed__1, &lp_FardWitnessed_FardWitnessed_L___closed__1_once, _init_lp_FardWitnessed_FardWitnessed_L___closed__1);
return x_7;
}
else
{
double x_8; 
x_8 = lean_float_div(x_2, x_4);
return x_8;
}
}
block_19:
{
double x_15; uint8_t x_16; 
x_15 = lean_float_of_nat(x_14);
x_16 = lean_nat_dec_lt(x_10, x_11);
if (x_16 == 0)
{
lean_object* x_17; 
x_17 = lean_nat_sub(x_10, x_11);
x_2 = x_15;
x_3 = x_17;
goto block_9;
}
else
{
lean_object* x_18; 
x_18 = lean_nat_sub(x_11, x_10);
x_2 = x_15;
x_3 = x_18;
goto block_9;
}
}
}
}
LEAN_EXPORT lean_object* lp_FardWitnessed_FardWitnessed_L___boxed(lean_object* x_1) {
_start:
{
double x_2; lean_object* x_3; 
x_2 = lp_FardWitnessed_FardWitnessed_L(x_1);
lean_dec_ref(x_1);
x_3 = lean_box_float(x_2);
return x_3;
}
}
static double _init_lp_FardWitnessed_FardWitnessed_isDescentCertified___closed__0(void) {
_start:
{
lean_object* x_1; double x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_float_of_nat(x_1);
return x_2;
}
}
LEAN_EXPORT uint8_t lp_FardWitnessed_FardWitnessed_isDescentCertified(lean_object* x_1, double x_2) {
_start:
{
double x_3; double x_4; uint8_t x_5; 
x_3 = lean_float_once(&lp_FardWitnessed_FardWitnessed_isDescentCertified___closed__0, &lp_FardWitnessed_FardWitnessed_isDescentCertified___closed__0_once, _init_lp_FardWitnessed_FardWitnessed_isDescentCertified___closed__0);
x_4 = lp_FardWitnessed_FardWitnessed_L(x_1);
x_5 = lean_float_decLt(x_3, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_ctor_get(x_1, 2);
x_7 = lean_ctor_get(x_1, 3);
x_8 = lean_nat_dec_le(x_7, x_6);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; double x_11; double x_12; uint8_t x_13; 
x_9 = lean_unsigned_to_nat(20u);
x_10 = lean_unsigned_to_nat(1u);
x_11 = l_Float_ofScientific(x_9, x_5, x_10);
x_12 = lean_float_div(x_11, x_4);
x_13 = lean_float_decLt(x_2, x_12);
if (x_13 == 0)
{
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_14 = lean_ctor_get(x_1, 2);
x_15 = lean_ctor_get(x_1, 3);
x_16 = lean_nat_dec_le(x_15, x_14);
return x_16;
}
}
}
}
LEAN_EXPORT lean_object* lp_FardWitnessed_FardWitnessed_isDescentCertified___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
double x_3; uint8_t x_4; lean_object* x_5; 
x_3 = lean_unbox_float(x_2);
lean_dec_ref(x_2);
x_4 = lp_FardWitnessed_FardWitnessed_isDescentCertified(x_1, x_3);
lean_dec_ref(x_1);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_FardWitnessed_FardWitnessed_Convergence(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_FardWitnessed_FardWitnessed_LayerwiseLipschitz(uint8_t builtin) {
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
