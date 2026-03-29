// Lean compiler output
// Module: FardWitnessed
// Imports: public import Init public import FardWitnessed.Foundation public import FardWitnessed.BaseSystem public import FardWitnessed.WitnessedRandomness public import FardWitnessed.ProbabilityLifting public import FardWitnessed.MeasurePreservation public import FardWitnessed.Convergence public import FardWitnessed.LayerwiseLipschitz public import FardWitnessed.ScalingLaws public import FardWitnessed.Generalization public import FardWitnessed.Unified
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
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_FardWitnessed_FardWitnessed_Foundation(uint8_t builtin);
lean_object* initialize_FardWitnessed_FardWitnessed_BaseSystem(uint8_t builtin);
lean_object* initialize_FardWitnessed_FardWitnessed_WitnessedRandomness(uint8_t builtin);
lean_object* initialize_FardWitnessed_FardWitnessed_ProbabilityLifting(uint8_t builtin);
lean_object* initialize_FardWitnessed_FardWitnessed_MeasurePreservation(uint8_t builtin);
lean_object* initialize_FardWitnessed_FardWitnessed_Convergence(uint8_t builtin);
lean_object* initialize_FardWitnessed_FardWitnessed_LayerwiseLipschitz(uint8_t builtin);
lean_object* initialize_FardWitnessed_FardWitnessed_ScalingLaws(uint8_t builtin);
lean_object* initialize_FardWitnessed_FardWitnessed_Generalization(uint8_t builtin);
lean_object* initialize_FardWitnessed_FardWitnessed_Unified(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_FardWitnessed_FardWitnessed(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_FardWitnessed_FardWitnessed_Foundation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_FardWitnessed_FardWitnessed_BaseSystem(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_FardWitnessed_FardWitnessed_WitnessedRandomness(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_FardWitnessed_FardWitnessed_ProbabilityLifting(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_FardWitnessed_FardWitnessed_MeasurePreservation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_FardWitnessed_FardWitnessed_Convergence(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_FardWitnessed_FardWitnessed_LayerwiseLipschitz(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_FardWitnessed_FardWitnessed_ScalingLaws(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_FardWitnessed_FardWitnessed_Generalization(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_FardWitnessed_FardWitnessed_Unified(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
