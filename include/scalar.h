#ifndef FM_SCALAR_H
#define FM_SCALAR_H

#ifndef FM_FATHMATH_H
#error Only fathmath.h should be directly included.
#endif

namespace ftm {
    class scalar {
    public:
        inline scalar() {}
        inline scalar(single q);
        inline explicit scalar(int32 x);

#ifndef FM_SINGLE_IS_FLOAT
        inline scalar(float32 f);
#endif

        inline float32 as_float() const;
        inline int32 as_int32() const;
        inline void store(float32* p) const;

        static inline scalar get_zero();

        inline void set_zero();

        inline bool is_approximately(const scalar& rhs) const;
        inline bool is_approximately(const scalar& rhs, const scalar& tolerance) const;

        inline void set_abs(const scalar& a);
        inline void set_max(const scalar& a, const scalar& b);
        inline void set_min(const scalar& a, const scalar& b);

        inline void set_div(const scalar& a, const scalar& b);

        inline scalar& operator=(single q);

#ifndef FM_SINGLE_IS_FLOAT
        inline scalar& operator=(float32 rhs);
#endif

    private:
        single m_single;
    };
}

#endif