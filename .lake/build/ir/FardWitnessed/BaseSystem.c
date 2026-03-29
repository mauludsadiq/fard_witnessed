// Lean compiler output
// Module: FardWitnessed.BaseSystem
// Imports: public import Init public import FardWitnessed.Foundation
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
LEAN_EXPORT lean_object* lp_FardWitnessed_FardWitnessed_BaseSystem_00_u03a6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_FardWitnessed_FardWitnessed_BaseSystem_replay(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_FardWitnessed_FardWitnessed_BaseSystem_composeTwo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_FardWitnessed_FardWitnessed_BaseSystem_00_u03a6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc_ref(x_6);
x_7 = lean_ctor_get(x_1, 1);
lean_inc_ref(x_7);
x_8 = lean_ctor_get(x_1, 2);
lean_inc_ref(x_8);
x_9 = lean_ctor_get(x_1, 3);
lean_inc(x_9);
x_10 = lean_ctor_get(x_1, 4);
lean_inc_ref(x_10);
lean_dec_ref(x_1);
lean_inc(x_5);
x_11 = lean_apply_1(x_8, x_5);
lean_inc(x_11);
lean_inc(x_5);
x_12 = lean_apply_2(x_9, x_5, x_11);
lean_inc(x_5);
x_13 = lean_apply_1(x_7, x_5);
lean_inc(x_5);
x_14 = lean_apply_1(x_6, x_5);
lean_inc(x_12);
x_15 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_15, 0, x_5);
lean_ctor_set(x_15, 1, x_12);
lean_ctor_set(x_15, 2, x_2);
lean_ctor_set(x_15, 3, x_3);
lean_ctor_set(x_15, 4, x_13);
lean_ctor_set(x_15, 5, x_11);
lean_ctor_set(x_15, 6, x_14);
x_16 = lean_apply_2(x_10, x_4, x_15);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_12);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
LEAN_EXPORT lean_object* lp_FardWitnessed_FardWitnessed_BaseSystem_replay(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; 
lean_dec(x_2);
lean_dec_ref(x_1);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_3);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_5, 1);
lean_inc(x_8);
lean_dec_ref(x_5);
lean_inc(x_2);
lean_inc_ref(x_1);
x_9 = lp_FardWitnessed_FardWitnessed_BaseSystem_00_u03a6(x_1, x_2, x_7, x_3, x_4);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec_ref(x_9);
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_2, x_12);
lean_dec(x_2);
x_2 = x_13;
x_3 = x_11;
x_4 = x_10;
x_5 = x_8;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_FardWitnessed_FardWitnessed_BaseSystem_composeTwo(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_inc(x_2);
lean_inc_ref(x_1);
x_7 = lp_FardWitnessed_FardWitnessed_BaseSystem_00_u03a6(x_1, x_2, x_3, x_5, x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec_ref(x_7);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_2, x_10);
lean_dec(x_2);
x_12 = lp_FardWitnessed_FardWitnessed_BaseSystem_00_u03a6(x_1, x_11, x_4, x_9, x_8);
return x_12;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_FardWitnessed_FardWitnessed_Foundation(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_FardWitnessed_FardWitnessed_BaseSystem(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_FardWitnessed_FardWitnessed_Foundation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
