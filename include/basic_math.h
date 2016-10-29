#ifndef FM_BASIC_MATH_H
#define FM_BASIC_MATH_H

#ifndef FM_FATHMATH_H
#error Only fathmath.h should be directly included.
#endif

namespace ftm {
    template <typename T> T clamp(const T& v, const T& min, const T& max);
    template <typename T> T clamp01(const T& v);
    template <typename T> T min(const T& a, const T& b);
    template <typename T> T max(const T& a, const T& b);
    template <typename T> T abs(const T& v);
    template <typename T> T lerp(const T& a, const T& b, const T& t);

    template <typename T> T round_up(const T& v, const T& round);
    template <typename T> T round_down(cosnt T& v, const T& round);
    template <typename T> bool is_signed();
    uint32 next_pow_2(uint32 v);
    uint64 next_pow_2(uint64 v);
    constexpr bool is_pow_2(uint32 v);
    constexpr bool is_pow_2(uint64 v);
    uint32 log2(uint32 v);
    uint64 log2(uint64 v);
    int abs(int v);

    template <typename T> T rotate_right(const T& v, int bits);
    template <typename T> T rotate_left(const T& v, int bits);
    int count_set_bits(uint32 v);
    int count_set_bits(uint64 v);

    template <typename T> T set_bit_range(const T& v, int start, int count, const T& newValue);
    template <typename T> T get_bit_range(const T& v, int start, int count);

    int find_lowest_bit(uint32 v);

    int count_leading_zeros(uint32 v);
    int count_leading_zeros(uint64 v);
}

#if defined(FM_WINDOWS)
#include "win/win_overrides.inl"
#elif defined(FM_LINUX)
#include "linux/linux_overrides.inl"
#elif defined(FM_MACOS)
#include "mac/mac_overrides.inl"
#else
#error Unknown platform
#endif



#endif