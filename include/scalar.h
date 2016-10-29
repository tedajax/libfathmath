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

        inline bool is_approximately(scalar_param rhs) const;
        inline bool is_approximately(scalar_param rhs, const scalar& tolerance) const;

        inline void set_abs(scalar_param a);
        inline void set_max(scalar_param a, scalar_param b);
        inline void set_min(scalar_param a, scalar_param b);

        inline void set_div(scalar_param a, scalar_param b);

        inline scalar& operator=(single q);

#ifndef FM_SINGLE_IS_FLOAT
        inline scalar& operator=(float32 rhs);
#endif

        inline scalar& operator+=(scalar_param rhs);
        inline scalar& operator-=(scalar_param rhs);
        inline scalar& operator*=(scalar_param rhs);
        inline scalar& operator/=(scalar_param rhs);

#ifndef FM_SINGLE_IS_FLOAT
        inline operator single() const {
            return get_single();
        }
#endif

        inline const single& get_single() const {
            return m_single;
        }

        friend inline scalar operator+(scalar_param a, scalar_param b);
        friend inline scalar operator+(scalar_param a, float32 b);
        friend inline scalar operator+(float32 a, scalar_param b);

        friend inline scalar operator-(scalar_param a, scalar_param b);
        friend inline scalar operator-(scalar_param a, float32 b);
        friend inline scalar operator-(float32 a, scalar_param b);

        friend inline scalar operator*(scalar_param a, scalar_param b);
        friend inline scalar operator*(scalar_param a, float32 b);
        friend inline scalar operator*(float32 a, scalar_param b);

        friend inline scalar operator/(scalar_param a, scalar_param b);
        friend inline scalar operator/(scalar_param a, float32 b);
        friend inline scalar operator/(float32 a, scalar_param b);

        friend inline scalar operator-(scalar_param a);

        friend inline scalar operator==(scalar_param a, scalar_param b);
        friend inline scalar operator==(scalar_param a, float32 b);
        friend inline scalar operator==(float32 a, scalar_param b);

        friend inline scalar operator!=(scalar_param a, scalar_param b);
        friend inline scalar operator!=(scalar_param a, float32 b);
        friend inline scalar operator!=(float32 a, scalar_param b);

        friend inline scalar operator<(scalar_param a, scalar_param b);
        friend inline scalar operator<(scalar_param a, float32 b);
        friend inline scalar operator<(float32 a, scalar_param b);

        friend inline scalar operator<=(scalar_param a, scalar_param b);
        friend inline scalar operator<=(scalar_param a, float32 b);
        friend inline scalar operator<=(float32 a, scalar_param b);

        friend inline scalar operator>(scalar_param a, scalar_param b);
        friend inline scalar operator>(scalar_param a, float32 b);
        friend inline scalar operator>(float32 a, scalar_param b);

        friend inline scalar operator>=(scalar_param a, scalar_param b);
        friend inline scalar operator>=(scalar_param a, float32 b);
        friend inline scalar operator>=(float32 a, scalar_param b);

    private:
        single m_single;
    };
}

#endif