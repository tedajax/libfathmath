#ifndef FM_FATHMATH_H
#define FM_FATHMATH_H

#include "types.h"
#include "basic_math.h"

#if FM_SSE_VER >= 0x20
#   include "sse/sse_math_types.h"
#else
#   include "fpu/fpu_math_types.h"
#endif

#include "vector4.h"
#include "matrix3.h"
#include "quaternion.h"
#include "dual_quaternion.h"
#include "qtransform.h"
#include "mtransform.h"
#include "matrix4.h"
#include "math_constants.h"
#include "math_funcs.h"

#if FM_SSE_VER >= 0x20
#   include "sse/sse_math_funcs.inl"
#   include "sse/sse_vector4.inl"
#   include "sse/sse_matrix3.inl"
#   include "sse/sse_quaternion.inl"
#   include "sse/sse_matrix4.inl"
#else
#   include "fpu/fpu_math_funcs.inl"
#   include "fpu/fpu_vector4.inl"
#   include "fpu/fpu_matrix3.inl"
#   include "fpu/fpu_quaternion.inl"
#   include "fpu/fpu_matrix4.inl"
#endif

#include "math_funcs.inl"

#include "vector4.inl"
#include "matrix3.inl"
#include "matrix4.inl"
#include "quaternion.inl"
#include "dual_quaternion.inl"
#include "qtransform.inl"
#include "mtrasnform.inl"

#endif