#ifndef AKWF_stereo_0085_512_H_
#define AKWF_stereo_0085_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_stereo_0085_512_NUM_CELLS 1024
#define AKWF_stereo_0085_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_stereo_0085_512_DATA
[] = {0, 4, 2, 6, 4, 8, 5, 9, 6, 10, 7, 13, 9, 14, 10, 16, 11, 16, 12, 18, 14,
19, 15, 21, 15, 23, 16, 24, 17, 27, 18, 28, 19, 30, 19, 30, 20, 31, 22, 32, 22,
33, 23, 34, 24, 36, 25, 36, 26, 37, 26, 39, 27, 40, 27, 41, 28, 42, 29, 43, 29,
44, 31, 45, 31, 46, 32, 46, 32, 47, 33, 48, 34, 49, 34, 50, 36, 50, 36, 52, 36,
53, 37, 53, 37, 54, 38, 55, 40, 55, 37, 57, 38, 57, 42, 58, 42, 58, 42, 58, 43,
58, 44, 59, 44, 60, 45, 61, 46, 61, 46, 62, 47, 63, 46, 62, 47, 64, 47, 65, 47,
65, 48, 66, 48, 67, 49, 66, 50, 68, 50, 67, 51, 67, 51, 68, 51, 68, 50, 70, 52,
70, 52, 70, 53, 70, 52, 71, 52, 71, 53, 71, 54, 71, 54, 71, 53, 73, 54, 73, 54,
72, 55, 73, 55, 73, 54, 74, 56, 75, 50, 76, 48, 76, 50, 76, 50, 77, 52, 77, 53,
77, 54, 76, 55, 77, 56, 78, 56, 78, 56, 78, 56, 78, 57, 78, 58, 78, 58, 78, 58,
78, 58, 80, 59, 79, 59, 79, 59, 80, 60, 80, 60, 79, 59, 79, 60, 79, 60, 80, 59,
80, 60, 80, 60, 81, 60, 81, 61, 81, 61, 81, 61, 81, 61, 81, 61, 81, 60, 81, 61,
82, 61, 82, 61, 81, 62, 82, 61, 82, 61, 82, 61, 83, 61, 81, 61, 82, 61, 83, 61,
82, 61, 83, 62, 82, 62, 83, 62, 82, 62, 83, 62, 83, 62, 83, 62, 83, 61, 84, 62,
83, 61, 84, 62, 83, 62, 84, 63, 83, 61, 83, 62, 83, 62, 83, 62, 83, 61, 84, 63,
83, 61, 83, 62, 83, 62, 84, 63, 83, 60, 83, 64, 82, 57, 84, 30, 87, 54, 84, 66,
83, 65, 83, 67, 82, 67, 82, 67, 82, 67, 82, 66, 81, 66, 82, 66, 81, 65, 82, 66,
81, 65, 81, 65, 81, 64, 81, 64, 81, 63, 81, 63, 81, 62, 81, 63, 81, 62, 81, 62,
81, 62, 80, 63, 81, 62, 80, 62, 81, 60, 80, 62, 82, 60, 79, 62, 81, 60, 80, 61,
81, 59, 79, 61, 81, 59, 79, 62, 82, 57, 77, 64, 82, 45, 66, -20, 9, -15, 12,
-14, 10, -13, 9, -9, 8, -9, 3, -6, 0, -6, -7, -4, -11, -5, -15, -3, -17, -4,
-19, -3, -18, -4, -20, -3, -17, -5, -18, -3, -16, -5, -17, -5, -18, -5, -20, -6,
-21, -6, -25, -6, -27, -7, -28, -7, -29, -8, -30, -8, -29, -9, -29, -8, -28,
-10, -28, -9, -26, -14, -33, -16, -36, -10, -26, -10, -27, -11, -27, -12, -29,
-13, -30, -13, -32, -14, -32, -16, -34, -17, -34, -19, -35, -19, -35, -21, -34,
-21, -35, -22, -35, -24, -36, -23, -36, -24, -37, -25, -37, -25, -37, -26, -38,
-26, -38, -26, -38, -27, -38, -28, -38, -28, -38, -30, -38, -30, -38, -30, -38,
-30, -38, -31, -38, -32, -39, -32, -39, -32, -40, -32, -40, -34, -40, -34, -40,
-33, -41, -34, -41, -35, -41, -34, -41, -36, -40, -35, -40, -35, -41, -35, -40,
-35, -40, -35, -41, -36, -41, -35, -41, -35, -41, -36, -42, -35, -42, -36, -42,
-35, -41, -36, -42, -39, -42, -37, -41, -37, -42, -36, -42, -36, -42, -36, -42,
-35, -42, -35, -42, -33, -43, -33, -42, -34, -42, -33, -43, -33, -42, -32, -43,
-32, -42, -32, -43, -31, -43, -32, -42, -32, -43, -32, -43, -31, -43, -30, -43,
-30, -42, -30, -43, -30, -42, -30, -43, -29, -43, -30, -42, -29, -43, -29, -43,
-30, -43, -29, -42, -30, -42, -29, -43, -29, -43, -29, -43, -29, -43, -29, -43,
-30, -43, -29, -42, -29, -42, -30, -43, -30, -43, -29, -42, -29, -43, -30, -43,
-29, -43, -29, -43, -29, -43, -30, -43, -29, -42, -30, -42, -29, -43, -29, -43,
-30, -43, -30, -43, -31, -43, -30, -43, -30, -42, -30, -43, -30, -43, -30, -43,
-31, -43, -31, -43, -31, -42, -31, -42, -32, -42, -31, -43, -32, -42, -31, -42,
-32, -42, -30, -43, -40, -40, -42, -41, -31, -43, -31, -41, -31, -42, -31, -42,
-30, -42, -30, -41, -30, -42, -30, -41, -31, -42, -31, -41, -31, -42, -32, -41,
-32, -41, -32, -41, -32, -41, -32, -41, -32, -41, -32, -42, -32, -41, -32, -42,
-31, -41, -31, -41, -32, -41, -32, -41, -31, -41, -33, -40, -32, -41, -32, -41,
-31, -40, -32, -41, -32, -41, -31, -40, -31, -40, -30, -40, -31, -40, -30, -39,
-32, -39, -29, -40, -45, -37, -53, -36, -46, -37, -47, -38, -42, -38, -40, -38,
-37, -38, -36, -38, -34, -38, -32, -38, -31, -39, -30, -38, -30, -39, -28, -39,
-28, -38, -28, -38, -26, -38, -27, -39, -27, -38, -26, -38, -25, -38, -25, -38,
-25, -38, -25, -38, -25, -37, -25, -37, -25, -38, -25, -38, -25, -36, -25, -37,
-25, -36, -25, -36, -24, -37, -24, -36, -24, -36, -25, -37, -24, -37, -24, -37,
-24, -37, -25, -36, -24, -36, -24, -37, -24, -36, -25, -37, -24, -35, -24, -36,
-24, -35, -25, -36, -25, -35, -24, -35, -25, -35, -25, -35, -25, -35, -24, -35,
-25, -35, -24, -34, -25, -35, -24, -34, -25, -35, -24, -33, -26, -35, -24, -33,
-26, -35, -23, -33, -26, -35, -23, -32, -26, -35, -22, -33, -26, -35, -22, -32,
-27, -35, -19, -29, -38, -47, -128, -128, -72, -77, -26, -36, -31, -42, -18,
-34, -20, -38, -13, -34, -16, -37, -12, -33, -14, -33, -11, -28, -13, -26, -11,
-22, -13, -20, -13, -16, -13, -16, -11, -14, -12, -15, -11, -16, -11, -16, -10,
-16, -10, -16, -9, -16, -9, -13, -8, -13, -7, -10, -7, -8, -7, -6, -6, -5, -6,
-4, -7, -3, -5, -2, -6, -3, -6, -4, -5, -4, -5, -4, -6, -4, -4, -3, -4, -3, -4,
-2, -3, 0, 0, 2, };

#endif /* AKWF_stereo_0085_512_H_ */