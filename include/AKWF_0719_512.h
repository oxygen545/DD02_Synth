#ifndef AKWF_0719_512_H_
#define AKWF_0719_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0719_512_NUM_CELLS 512
#define AKWF_0719_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0719_512_DATA [] = {1,
3, 6, 8, 9, 11, 12, 13, 14, 14, 13, 42, 66, 76, 87, 91, 94, 113, 127, 125, 119,
113, 111, 107, 104, 102, 100, 96, 95, 93, 92, 89, 88, 86, 84, 82, 80, 79, 77,
76, 75, 73, 72, 70, 69, 68, 67, 65, 65, 62, 61, 60, 59, 59, 56, 56, 55, 54, 53,
52, 50, 49, 48, 47, 47, 45, 44, 44, 42, 42, 40, 39, 39, 37, 38, 36, 35, 34, 34,
33, 32, 31, 30, 29, 28, 28, 27, 26, 25, 25, 25, 23, 23, 21, 21, 21, 20, 19, 19,
18, 17, 17, 16, 16, 15, 14, 14, 13, 13, 12, 11, 11, 11, 10, 9, 8, 8, 7, 6, 7, 5,
5, 5, 4, 4, 4, 3, 2, 2, 2, 1, 2, 1, 0, -1, -1, -1, -1, -2, -2, -2, -3, -3, -4,
-4, -4, -5, -4, -4, -5, -5, -6, -5, -7, -7, -7, -8, -7, -7, -7, -7, -9, -8, -8,
-8, -9, -8, -9, -9, -9, -10, -10, -10, -10, -10, -9, -10, -9, -10, -10, -10,
-11, -11, -11, -11, -11, -10, -10, -9, -16, -15, -11, -11, -9, -10, -10, -11,
-11, -11, -11, -11, -11, -11, -11, -12, -11, -12, -12, -11, -12, -12, -12, -12,
-12, -13, -12, -13, -12, -13, -13, -13, -13, -12, -14, -12, -13, -13, -13, -13,
-13, -14, -14, -13, -13, -14, -14, -14, -13, -14, -13, -14, -14, -14, -13, -13,
-14, -13, -14, -15, -14, -14, -13, -15, -15, -15, -15, -15, -15, -15, -14, -14,
-14, -15, -15, -14, -14, -15, -15, -16, -15, -14, -15, -15, -15, -14, -15, -15,
-15, -14, -15, -15, -16, -15, -15, -15, -15, -16, -16, -15, -16, -16, -15, -15,
-15, -15, -16, -15, -16, -15, -16, -16, -16, -16, -16, -17, -16, -16, -16, -16,
-16, -16, -16, -16, -16, -17, -16, -17, -17, -16, -17, -17, -17, -17, -17, -17,
-17, -16, -17, -16, -17, -16, -16, -17, -17, -17, -16, -17, -17, -17, -16, -17,
-17, -17, -17, -17, -17, -17, -16, -17, -18, -17, -17, -17, -17, -17, -17, -17,
-18, -17, -18, -17, -18, -17, -17, -17, -17, -17, -17, -17, -17, -18, -17, -18,
-18, -17, -18, -17, -18, -17, -17, -18, -18, -18, -18, -18, -17, -17, -17, -18,
-17, -18, -18, -18, -18, -18, -18, -17, -17, -18, -18, -18, -18, -18, -17, -18,
-18, -18, -18, -18, -18, -18, -18, -18, -19, -17, -18, -18, -18, -18, -19, -18,
-18, -18, -18, -18, -18, -18, -17, -18, -18, -19, -17, -19, -19, -18, -18, -18,
-18, -19, -18, -19, -19, -18, -18, -19, -18, -19, -18, -19, -18, -19, -18, -18,
-19, -19, -18, -19, -18, -19, -19, -18, -18, -18, -18, -18, -19, -18, -18, -18,
-18, -18, -18, -18, -18, -18, -19, -19, -18, -18, -18, -19, -18, -19, -19, -19,
-19, -19, -18, -19, -18, -18, -19, -18, -19, -18, -18, -18, -19, -19, -18, -19,
-19, -19, -18, -19, -19, -18, -18, -19, -10, -5, -2, };

#endif /* AKWF_0719_512_H_ */