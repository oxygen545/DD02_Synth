#ifndef AKWF_stereo_0132_512_H_
#define AKWF_stereo_0132_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_stereo_0132_512_NUM_CELLS 1024
#define AKWF_stereo_0132_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_stereo_0132_512_DATA
[] = {0, -2, 4, -1, 6, 3, 9, 6, 12, 9, 15, 13, 18, 15, 20, 19, 24, 22, 26, 24,
29, 26, 32, 29, 34, 31, 38, 34, 39, 36, 42, 39, 45, 42, 48, 44, 50, 46, 53, 49,
55, 52, 58, 55, 61, 56, 63, 59, 65, 62, 68, 64, 72, 66, 74, 70, 78, 72, 80, 75,
83, 77, 85, 81, 88, 83, 91, 86, 92, 89, 95, 90, 98, 94, 101, 97, 103, 100, 106,
102, 109, 104, 112, 107, 114, 110, 117, 112, 119, 115, 121, 118, 123, 119, 125,
121, 127, 123, 127, 124, 127, 125, 127, 124, 127, 124, 127, 124, 125, 123, 123,
122, 120, 120, 119, 119, 114, 115, 110, 111, 105, 107, 100, 102, 94, 97, 88, 92,
82, 87, 76, 82, 70, 77, 66, 73, 59, 68, 55, 63, 50, 59, 45, 55, 40, 50, 35, 47,
30, 43, 25, 39, 21, 35, 17, 31, 13, 27, 8, 24, 5, 20, 0, 16, -3, 12, -6, 9, -8,
5, -12, 2, -15, -1, -17, -4, -21, -7, -23, -10, -24, -12, -28, -16, -29, -18,
-32, -21, -35, -24, -37, -27, -40, -29, -42, -32, -44, -34, -46, -37, -49, -39,
-51, -41, -51, -42, -53, -45, -54, -45, -56, -47, -56, -47, -58, -49, -58, -50,
-59, -51, -59, -51, -59, -51, -59, -52, -59, -52, -58, -53, -58, -52, -58, -53,
-58, -52, -58, -52, -57, -53, -58, -53, -58, -53, -58, -52, -57, -52, -57, -53,
-57, -52, -58, -53, -57, -52, -57, -52, -57, -53, -57, -53, -57, -53, -57, -53,
-57, -53, -57, -52, -57, -52, -56, -53, -55, -52, -54, -52, -54, -52, -54, -51,
-52, -50, -52, -49, -51, -48, -50, -49, -50, -48, -49, -48, -50, -47, -49, -48,
-48, -47, -48, -48, -48, -47, -48, -47, -48, -48, -47, -48, -47, -48, -48, -49,
-49, -51, -50, -50, -52, -53, -54, -54, -56, -56, -57, -58, -60, -61, -62, -62,
-62, -63, -64, -65, -65, -66, -66, -68, -67, -69, -66, -69, -67, -69, -67, -70,
-66, -70, -67, -69, -66, -69, -66, -69, -64, -67, -64, -66, -63, -66, -62, -65,
-61, -63, -59, -61, -58, -60, -56, -59, -55, -57, -52, -56, -51, -54, -49, -52,
-47, -50, -45, -48, -42, -47, -41, -45, -38, -42, -37, -42, -35, -39, -33, -38,
-30, -37, -29, -34, -27, -33, -26, -31, -24, -29, -23, -28, -20, -26, -18, -24,
-16, -21, -13, -19, -11, -16, -9, -13, -6, -11, -3, -8, 0, -6, 2, -2, 6, 0, 9,
3, 12, 7, 15, 9, 19, 13, 22, 16, 25, 19, 28, 22, 33, 27, 37, 29, 40, 32, 43, 37,
46, 40, 50, 44, 54, 47, 56, 50, 60, 54, 62, 57, 65, 61, 68, 63, 71, 66, 74, 69,
76, 72, 79, 75, 81, 78, 84, 80, 86, 82, 88, 85, 90, 86, 91, 89, 93, 90, 95, 91,
96, 93, 97, 94, 99, 95, 100, 96, 101, 97, 101, 98, 102, 98, 101, 98, 100, 97,
99, 97, 97, 96, 95, 95, 93, 93, 91, 91, 88, 88, 85, 87, 82, 83, 77, 79, 73, 76,
70, 72, 67, 68, 63, 64, 59, 60, 56, 57, 52, 53, 49, 50, 47, 46, 44, 44, 42, 41,
40, 38, 38, 36, 35, 33, 33, 31, 31, 29, 28, 27, 26, 25, 25, 24, 23, 22, 21, 20,
21, 19, 21, 19, 18, 18, 18, 17, 18, 16, 17, 16, 16, 14, 15, 13, 15, 13, 15, 12,
15, 12, 15, 12, 15, 12, 17, 12, 16, 14, 17, 14, 18, 15, 19, 15, 19, 16, 21, 17,
20, 19, 21, 19, 22, 21, 23, 21, 23, 23, 25, 24, 26, 26, 27, 27, 27, 28, 28, 30,
28, 32, 30, 33, 30, 33, 30, 33, 31, 35, 31, 35, 31, 35, 31, 35, 30, 34, 29, 34,
29, 33, 29, 33, 29, 32, 28, 31, 27, 30, 26, 29, 24, 28, 23, 26, 23, 25, 21, 23,
19, 23, 18, 21, 16, 19, 14, 18, 13, 18, 12, 16, 10, 16, 9, 14, 7, 14, 7, 13, 6,
11, 5, 11, 4, 10, 2, 9, 1, 7, 0, 6, 0, 5, -2, 3, -2, 1, -4, 1, -5, -1, -6, -3,
-7, -5, -8, -7, -11, -9, -12, -11, -13, -14, -17, -16, -18, -19, -21, -22, -23,
-25, -28, -29, -32, -32, -36, -36, -38, -39, -42, -42, -46, -46, -48, -49, -51,
-51, -53, -54, -55, -55, -57, -56, -59, -58, -59, -58, -60, -60, -60, -60, -61,
-59, -60, -60, -61, -61, -60, -61, -60, -61, -59, -62, -58, -62, -58, -62, -58,
-62, -56, -62, -56, -62, -55, -63, -55, -62, -54, -61, -54, -61, -52, -61, -52,
-59, -50, -59, -50, -58, -49, -57, -46, -57, -46, -55, -46, -54, -46, -52, -45,
-51, -44, -50, -44, -49, -43, -47, -43, -46, -42, -45, -43, -43, -42, -42, -40,
-42, -41, -40, -40, -39, -39, -38, -39, -38, -39, -37, -38, -37, -37, -37, -37,
-35, -37, -36, -36, -34, -36, -34, -35, -35, -35, -34, -35, -34, -35, -34, -33,
-33, -33, -33, -33, -33, -32, -33, -30, -31, -31, -31, -31, -31, -29, -30, -28,
-29, -27, -28, -26, -27, -26, -26, -24, -25, -24, -24, -22, -22, -21, -20, -20,
-19, -19, -17, -17, -16, -15, -15, -15, -13, -14, -11, -12, -10, -11, -9, -11,
-8, -9, -7, -9, -6, -8, -6, -8, -5, -7, -5, -8, -6, -7, -5, -8, -6, -7, -7, -9,
-8, -9, -8, -11, -11, -13, -13, -14, -15, -17, -18, -20, -20, -22, -24, -25,
-26, -29, -30, -32, -32, -34, -35, -37, -37, -39, -39, -41, -41, -43, -43, -44,
-44, -45, -44, -46, -46, -48, -46, -48, -47, -49, -48, -48, -48, -47, -48, -47,
-47, -46, -47, -45, -47, -45, -47, -44, -46, -42, -45, -42, -44, -40, -43, -39,
-42, -37, -40, -36, -39, -34, -38, -32, -37, -30, -35, -28, -33, -26, -31, -24,
-29, -21, -27, -20, -25, -17, -22, -15, -19, -12, -16, -10, -15, -6, -11, -4,
-10, -2, -4, };

#endif /* AKWF_stereo_0132_512_H_ */
