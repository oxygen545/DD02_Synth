#ifndef AKWF_stereo_0155_512_H_
#define AKWF_stereo_0155_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_stereo_0155_512_NUM_CELLS 1024
#define AKWF_stereo_0155_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_stereo_0155_512_DATA
[] = {39, 36, 119, 116, 122, 124, 102, 102, 92, 88, 86, 82, 83, 82, 82, 82, 82,
82, 79, 79, 78, 77, 76, 73, 73, 71, 71, 67, 70, 65, 68, 64, 67, 62, 64, 61, 64,
60, 62, 59, 61, 58, 59, 58, 59, 57, 57, 56, 56, 55, 54, 54, 53, 52, 52, 52, 51,
52, 51, 50, 50, 50, 48, 50, 48, 49, 46, 48, 46, 48, 45, 47, 45, 47, 44, 47, 44,
46, 45, 46, 44, 46, 43, 45, 44, 45, 43, 45, 43, 44, 44, 45, 43, 44, 43, 44, 42,
44, 44, 45, 43, 45, 43, 45, 43, 44, 44, 45, 43, 45, 43, 45, 43, 45, 44, 45, 43,
45, 43, 44, 44, 45, 44, 45, 44, 45, 43, 46, 43, 44, 43, 44, 43, 45, 43, 45, 43,
44, 44, 44, 43, 44, 43, 44, 44, 44, 44, 43, 43, 44, 42, 43, 42, 43, 43, 44, 42,
43, 42, 43, 41, 43, 41, 42, 41, 42, 42, 43, 41, 41, 41, 41, 41, 40, 40, 40, 40,
41, 40, 41, 39, 40, 39, 40, 39, 40, 40, 39, 39, 39, 38, 38, 39, 39, 39, 38, 38,
38, 38, 38, 37, 38, 37, 38, 37, 38, 37, 38, 36, 37, 36, 36, 36, 37, 35, 36, 35,
36, 35, 36, 35, 36, 35, 36, 35, 35, 34, 34, 33, 35, 34, 35, 34, 34, 33, 34, 34,
34, 33, 34, 33, 33, 32, 33, 32, 33, 32, 33, 32, 32, 31, 32, 32, 32, 31, 32, 31,
31, 30, 32, 30, 31, 30, 31, 30, 31, 29, 31, 30, 31, 30, 29, 29, 30, 30, 30, 29,
29, 28, 29, 29, 29, 27, 29, 28, 28, 27, 28, 27, 28, 27, 27, 27, 28, 27, 27, 26,
26, 26, 27, 26, 26, 26, 26, 25, 25, 26, 25, 25, 25, 25, 25, 25, 25, 24, 25, 24,
25, 24, 24, 23, 25, 24, 25, 23, 23, 23, 24, 23, 23, 22, 23, 22, 23, 22, 22, 22,
22, 22, 21, 21, 22, 21, 21, 20, 21, 20, 21, 21, 20, 20, 20, 19, 20, 19, 20, 20,
19, 19, 19, 18, 19, 18, 19, 18, 19, 18, 19, 17, 18, 17, 17, 18, 17, 16, 18, 17,
17, 16, 17, 17, 17, 16, 16, 16, 17, 16, 15, 15, 16, 15, 15, 15, 15, 15, 15, 14,
15, 14, 14, 14, 14, 13, 14, 13, 13, 13, 14, 13, 14, 13, 13, 12, 12, 12, 12, 12,
12, 11, 11, 11, 11, 10, 11, 11, 11, 11, 12, 10, 10, 10, 10, 9, 11, 9, 10, 10, 9,
9, 9, 9, 9, 8, 9, 8, 8, 7, 8, 8, 7, 8, 8, 7, 8, 7, 8, 7, 7, 6, 7, 6, 7, 7, 7, 5,
6, 5, 7, 5, 6, 6, 5, 5, 4, 4, 5, 4, 4, 4, 4, 4, 5, 3, 3, 4, 3, 2, 4, 3, 3, 2, 2,
2, 3, 2, 3, 2, 2, 1, 2, 1, 1, 2, 1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0, -1, 0, -1, -1,
-1, -2, -1, -1, -2, -2, -2, -1, -2, -3, -3, -2, -2, -3, -2, -2, -3, -3, -3, -4,
-3, -3, -3, -4, -5, -3, -4, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -6, -5, -6,
-6, -6, -7, -7, -6, -7, -7, -7, -7, -7, -7, -7, -7, -8, -7, -8, -8, -9, -9, -8,
-8, -9, -9, -9, -8, -9, -9, -10, -10, -9, -9, -10, -10, -10, -10, -10, -11, -11,
-11, -12, -10, -12, -11, -11, -11, -11, -12, -12, -12, -13, -12, -13, -12, -13,
-13, -13, -13, -12, -13, -14, -13, -14, -14, -14, -14, -14, -14, -14, -15, -15,
-15, -15, -15, -16, -15, -16, -15, -15, -16, -16, -15, -16, -15, -16, -16, -17,
-17, -17, -17, -17, -17, -17, -17, -18, -18, -18, -18, -19, -18, -18, -18, -19,
-19, -19, -19, -19, -19, -19, -19, -20, -20, -20, -20, -20, -20, -20, -20, -21,
-21, -21, -21, -21, -21, -21, -21, -22, -21, -22, -21, -21, -21, -23, -22, -23,
-22, -23, -22, -24, -23, -24, -23, -23, -24, -23, -24, -24, -23, -24, -24, -25,
-23, -25, -24, -25, -24, -25, -26, -26, -25, -26, -26, -27, -26, -27, -27, -26,
-27, -26, -27, -26, -27, -27, -27, -27, -27, -28, -27, -28, -27, -28, -27, -28,
-28, -28, -28, -29, -28, -29, -29, -30, -29, -29, -29, -30, -29, -30, -29, -30,
-29, -31, -30, -30, -31, -31, -31, -31, -31, -32, -31, -32, -31, -32, -31, -32,
-32, -32, -31, -33, -32, -33, -32, -34, -32, -34, -33, -33, -34, -33, -33, -34,
-33, -34, -34, -34, -34, -35, -33, -35, -34, -35, -35, -35, -35, -35, -35, -36,
-35, -36, -35, -36, -35, -36, -37, -37, -36, -37, -37, -37, -36, -38, -37, -38,
-36, -38, -37, -38, -37, -38, -38, -39, -38, -39, -38, -39, -38, -39, -39, -40,
-39, -39, -39, -40, -39, -40, -39, -40, -40, -41, -41, -41, -40, -42, -40, -41,
-41, -42, -41, -42, -42, -42, -42, -42, -42, -42, -41, -42, -41, -42, -43, -42,
-43, -42, -42, -43, -43, -43, -43, -44, -43, -44, -43, -44, -43, -43, -44, -44,
-44, -44, -44, -44, -44, -44, -43, -44, -43, -45, -44, -44, -44, -44, -43, -44,
-44, -45, -44, -45, -44, -44, -44, -45, -43, -45, -43, -45, -43, -46, -43, -45,
-44, -45, -42, -45, -43, -45, -43, -44, -43, -44, -43, -44, -43, -45, -43, -45,
-44, -46, -43, -45, -43, -45, -43, -46, -44, -46, -44, -46, -45, -46, -45, -46,
-45, -47, -46, -48, -46, -48, -46, -48, -47, -48, -48, -49, -49, -49, -50, -50,
-50, -51, -51, -51, -52, -52, -54, -53, -55, -54, -56, -55, -57, -56, -59, -57,
-59, -58, -61, -58, -62, -60, -64, -60, -65, -62, -67, -63, -68, -64, -70, -66,
-71, -68, -75, -72, -76, -75, -78, -78, -79, -80, -81, -81, -82, -82, -83, -82,
-87, -84, -95, -92, -106, -107, -127, -128, -102, -97, -22, -20, };

#endif /* AKWF_stereo_0155_512_H_ */
