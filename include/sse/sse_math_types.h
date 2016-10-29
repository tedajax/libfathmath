#ifndef FM_SSE_MATH_TYPES_H
#define FM_SSE_MATH_TYPES_H

#ifndef FM_FATHMATH_H
#error Only fathmath.h should be directly included.
#endif

namespace ftm {
    typedef __m128 quad;
    typedef __m128i quadi;
    typedef __m128 mask;
    typedef __m128 single;

#ifdef FM_SIMD_PASS_IN_REG
    typedef const quad quad_param;
    typedef const quadi quadi_param;
    typedef const mask mask_param;
    typedef const single single_param

    typedef const class scalar scalar_param;
    typedef const class vec4 vec4_param;
    typedef const class quaternion quaternion_param;
    typedef const class dual_quaternion dual_quaternion_param;
#else
    typedef const quad& quad_param;
    typedef const quadi& quadi_param;
    typedef const mask& mask_param;
    typedef const single& single_param

    typedef const class scalar& scalar_param;
    typedef const class vec4& vec4_param;
    typedef const class quaternion& quaternion_param;
    typedef const class dual_quaternion& dual_quaternion_param;
#endif

    namespace internal {
        union quad_float_int {
            uint32 m_ints[4];
            float32 m_floats[4];
            quadi m_int4;
            quad m_float4;
        };
    }
}

#endif