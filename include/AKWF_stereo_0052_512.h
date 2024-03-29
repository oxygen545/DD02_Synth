#ifndef AKWF_stereo_0052_512_H_
#define AKWF_stereo_0052_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_stereo_0052_512_NUM_CELLS 1024
#define AKWF_stereo_0052_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_stereo_0052_512_DATA
[] = {1, -3, 4, -1, 4, 4, 5, 7, 3, 9, 4, 10, 8, 15, 11, 19, 15, 20, 17, 19, 18,
16, 18, 15, 20, 19, 24, 24, 28, 29, 30, 29, 31, 29, 31, 29, 30, 30, 31, 35, 36,
38, 39, 41, 40, 46, 41, 51, 42, 57, 46, 66, 52, 74, 59, 80, 65, 84, 71, 90, 77,
94, 83, 103, 93, 108, 102, 111, 110, 109, 114, 106, 116, 106, 119, 109, 122,
113, 127, 115, 127, 115, 126, 113, 122, 111, 117, 114, 115, 118, 114, 122, 112,
124, 108, 126, 103, 126, 99, 127, 97, 127, 96, 126, 96, 122, 93, 116, 90, 111,
87, 111, 85, 111, 86, 113, 84, 109, 83, 103, 81, 99, 77, 96, 75, 95, 73, 93, 73,
91, 72, 86, 69, 83, 65, 81, 63, 80, 62, 82, 62, 82, 62, 78, 60, 76, 58, 71, 56,
68, 55, 67, 55, 66, 57, 64, 55, 61, 54, 59, 51, 59, 50, 60, 50, 60, 51, 57, 50,
53, 48, 51, 45, 50, 44, 52, 45, 53, 45, 52, 45, 49, 43, 45, 39, 41, 38, 37, 35,
33, 33, 30, 31, 27, 26, 25, 23, 25, 19, 25, 16, 28, 14, 29, 14, 28, 12, 26, 10,
25, 8, 25, 9, 24, 10, 26, 12, 25, 14, 25, 15, 23, 16, 25, 18, 25, 20, 25, 23,
25, 25, 23, 25, 22, 26, 22, 27, 24, 28, 27, 31, 31, 33, 32, 34, 33, 33, 34, 34,
35, 36, 38, 38, 42, 40, 45, 42, 46, 44, 50, 45, 53, 49, 58, 52, 57, 54, 54, 56,
51, 56, 48, 54, 47, 55, 46, 54, 46, 52, 45, 50, 45, 47, 46, 44, 45, 40, 45, 37,
43, 36, 41, 31, 39, 27, 38, 25, 36, 21, 35, 20, 32, 16, 28, 13, 26, 11, 22, 8,
19, 6, 17, 5, 14, 2, 12, 0, 9, -2, 8, -3, 5, -4, 5, -6, 1, -7, -1, -8, -4, -9,
-7, -11, -10, -11, -13, -12, -15, -14, -16, -15, -18, -16, -18, -17, -19, -18,
-21, -20, -22, -21, -26, -23, -29, -24, -32, -26, -33, -28, -34, -29, -35, -30,
-35, -31, -36, -33, -36, -34, -36, -36, -37, -37, -38, -37, -40, -38, -43, -38,
-44, -40, -45, -40, -47, -41, -50, -43, -54, -45, -57, -47, -59, -49, -61, -51,
-61, -53, -63, -54, -62, -57, -62, -59, -60, -61, -59, -60, -58, -60, -58, -61,
-59, -60, -61, -59, -61, -58, -61, -57, -60, -54, -60, -52, -60, -51, -58, -50,
-57, -47, -56, -46, -54, -43, -54, -42, -53, -40, -52, -39, -50, -37, -49, -36,
-47, -33, -46, -32, -43, -31, -43, -30, -41, -29, -39, -28, -38, -26, -36, -26,
-35, -25, -34, -24, -33, -25, -32, -24, -33, -23, -33, -24, -33, -25, -35, -25,
-36, -27, -35, -28, -35, -29, -34, -31, -34, -31, -34, -33, -34, -33, -33, -34,
-33, -35, -34, -35, -35, -36, -36, -36, -39, -37, -40, -38, -42, -39, -41, -39,
-42, -39, -43, -41, -45, -41, -45, -42, -44, -42, -43, -42, -41, -40, -39, -39,
-38, -40, -39, -39, -42, -39, -45, -38, -48, -38, -49, -38, -49, -37, -46, -35,
-42, -35, -39, -35, -40, -35, -44, -36, -48, -37, -53, -38, -56, -40, -55, -40,
-52, -41, -48, -42, -46, -43, -47, -45, -49, -47, -53, -49, -57, -50, -60, -52,
-60, -52, -60, -53, -59, -55, -56, -56, -55, -57, -56, -57, -59, -59, -63, -60,
-66, -60, -69, -62, -71, -62, -69, -62, -67, -62, -65, -62, -61, -61, -59, -60,
-57, -59, -57, -57, -59, -55, -61, -54, -64, -52, -64, -49, -63, -48, -58, -46,
-53, -43, -49, -41, -47, -40, -46, -37, -48, -35, -48, -33, -46, -30, -44, -28,
-39, -26, -35, -24, -31, -22, -26, -20, -26, -18, -27, -16, -28, -14, -28, -13,
-26, -13, -25, -12, -20, -11, -19, -10, -17, -10, -15, -10, -14, -10, -12, -9,
-13, -9, -11, -9, -10, -8, -10, -9, -8, -9, -6, -7, -5, -6, -4, -5, -2, -5, 1,
-3, 4, -1, 6, 0, 7, 3, 7, 4, 6, 6, 3, 6, 3, 7, 2, 8, 4, 10, 7, 11, 10, 12, 13,
12, 14, 13, 14, 13, 12, 13, 9, 12, 8, 12, 6, 12, 8, 11, 9, 11, 11, 10, 11, 9,
10, 7, 7, 6, 4, 4, 1, 1, -2, 0, -4, -3, -4, -5, -2, -7, -3, -8, -2, -10, -2,
-12, -6, -15, -10, -16, -15, -18, -18, -19, -19, -22, -20, -21, -20, -24, -18,
-25, -19, -26, -18, -26, -20, -26, -22, -26, -25, -26, -27, -26, -27, -26, -25,
-24, -23, -23, -21, -22, -21, -22, -21, -21, -21, -18, -23, -18, -23, -15, -23,
-15, -21, -13, -19, -12, -17, -9, -15, -8, -14, -8, -16, -7, -16, -8, -18, -8,
-18, -7, -18, -7, -17, -7, -14, -8, -11, -7, -8, -7, -6, -7, -7, -8, -9, -8, -9,
-8, -11, -8, -11, -8, -10, -7, -8, -8, -4, -6, -1, -7, 0, -6, -1, -5, -3, -6,
-7, -5, -7, -4, -6, -3, -2, -1, 1, -1, 2, -1, 4, 0, 3, 1, 2, 3, 1, 3, 2, 5, 3,
6, 3, 5, 5, 6, 6, 6, 7, 8, 8, 9, 7, 9, 8, 9, 6, 9, 5, 9, 5, 9, 6, 9, 5, 7, 3, 7,
3, 6, 2, 4, 2, 2, 4, 1, 3, 0, 1, -2, -2, -5, -6, -6, -8, -9, -9, -9, -7, -10,
-5, -11, -6, -12, -8, -16, -10, -18, -15, -19, -18, -20, -21, -21, -24, -23,
-23, -24, -18, -23, -13, -21, -9, -21, -12, -20, -20, -21, -28, -24, -33, -23,
-31, -23, -27, -20, -23, -19, -20, -19, -20, -21, -20, -22, -22, -21, -26, -20,
-30, -19, -35, -21, -38, -23, -35, -24, -28, -24, -20, -22, -16, -21, -16, -21,
-19, -21, -24, -22, -27, -21, -28, -19, -25, -17, -21, -15, -17, -14, -10, -12,
-5, -11, -2, -7, -1, -3, -3, -1, -10, 0, -16, -1, -19, -2, -18, -1, -7, };

#endif /* AKWF_stereo_0052_512_H_ */
