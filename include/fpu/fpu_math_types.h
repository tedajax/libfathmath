#ifndef FM_FPU_MATH_TYPES_H
#define FM_FPU_MATH_TYPES_H

#ifndef FM_FATHMATH_H
#error Only fathmath.h should be directly included.
#endif

typedef struct fm_float4 {
    alignas(16) float32 data[4];
} fm_float4;

typedef struct fm_int4 {
    alignas(16) int32 data[4];
} fm_int4;

typedef float32 fm_float;
typedef int32 fm_int;
typedef fm_int4 fm_mask;

union fm_quad_float_int {
    uint32 ints[4];
    float32 floats[4];
    fm_int4 int4;
    fm_float4 float4;
};

#endif