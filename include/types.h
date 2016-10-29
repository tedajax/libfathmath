#ifndef FM_TYPES_H
#define FM_TYPES_H

#ifndef FM_FATHMATH_H
#error Only fathmath.h should be directly included.
#endif

#include <stdint.h>
#include <stdbool.h>

typedef uint8_t uint8;
typedef uint16_t uint16;
typedef uint32_t uint32;
typedef uint64_t uint64;

typedef int8_t int8;
typedef int16_t int16;
typedef int32_t int32;
typedef int64_t int64;

typedef float float32;
typedef double float64;

typedef unsigned int uint;
typedef uint8 byte;

#endif // FM_TYPES_H