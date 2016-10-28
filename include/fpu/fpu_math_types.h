#ifndef FM_FPU_MATH_TYPES_H
#define FM_FPU_MATH_TYPES_H

#ifndef FM_FATHMATH_H
#error Only fathmath.h should be directly included.
#endif

#define FM_SINGLE_IS_FLOAT

namespace ftm {
    struct quad {
        alignas(16) float32 m_data[4];
        inline float32 operator[](int i) const { return m_data[i]; }
        inline float32& operator[](int i) { return m_data[i]; }
    };

    struct quadi {
        alignas(16) int32 m_data[4];
        inline float32 operator[](int i) const { return m_data[i]; }
        inline float32& operator[](int i) { return m_data[i]; }
    };

    typedef float32 single;
    typedef fm_int4 mask;

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