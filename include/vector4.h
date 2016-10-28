#ifndef FM_VECTOR4_H
#define FM_VECTOR4_H

#ifndef FM_FATHMATH_H
#error Only fathmath.h should be directly included.
#endif

namespace ftm {
    class vec4 {
    public:
        vec4() {}
        explicit vec4(float32 v) { set_all(v); }
        vec4(const quad q) : m_vec(quad) {}

#ifndef FM_SINGLE_IS_FLOAT
        vec4(float32 x, float32 y, float32 z, float32 w = 0.f) { set(x, y, z, w); }
#endif

        inline void load(const float32* src);
        template <int N> inline void load(const float32* src);
        template <int N> inline void load_unaligned(const float32* src);
        inline void store(void* dst) const;
        template <int N> inline void store(void* dst) const;
        template <int N> inline void store_unaligned(void* dst) const;

        inline void set(float32 x, float32 y, float32 z, float32 w = 0.f);

        static inline vec4 get_zero();

        inline void set_zero();
        inline void set_all()

    private:
        quad m_vec;
    };
}

#endif