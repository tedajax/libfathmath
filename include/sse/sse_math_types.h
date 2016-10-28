#ifndef FM_SSE_MATH_TYPES_H
#define FM_SSE_MATH_TYPES_H

#ifndef FM_FATHMATH_H
#error Only fathmath.h should be directly included.
#endif

typedef __m128 fm_float;
typedef __m128i fm_int;
typedef __m128 fm_float4;
typedef __m128i fm_int4;
typedef __m128 fm_mask;

union fm_quad_float_int {
    uint32 ints[4];
    float32 floats[4];
    fm_int4 int4;
    fm_float4 float4;
};

#endif