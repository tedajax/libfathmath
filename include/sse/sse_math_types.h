#ifndef FM_SSE_MATH_TYPES_H
#define FM_SSE_MATH_TYPES_H

#ifndef FM_FATHMATH_H
#error Only fathmath.h should be directly included.
#endif

namespace ftm {
    typedef __m128 quad;
    typedef __m128i quadi;

    typedef __m128 single;
    typedef __m128 mask;

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