#ifndef AKWF_stereo_0154_512_H_
#define AKWF_stereo_0154_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_stereo_0154_512_NUM_CELLS 1024
#define AKWF_stereo_0154_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_stereo_0154_512_DATA
[] = {46, 50, 126, 127, 122, 124, 109, 118, 103, 115, 99, 112, 95, 108, 92, 106,
91, 104, 90, 102, 88, 99, 86, 97, 84, 94, 82, 91, 80, 89, 79, 87, 76, 85, 74,
82, 72, 80, 70, 77, 68, 77, 66, 73, 65, 73, 63, 71, 62, 69, 61, 67, 58, 65, 57,
64, 56, 63, 55, 62, 54, 61, 52, 58, 53, 58, 52, 57, 51, 57, 49, 56, 49, 56, 48,
55, 48, 54, 48, 54, 47, 53, 48, 53, 46, 53, 46, 53, 46, 52, 46, 52, 47, 52, 46,
52, 46, 52, 46, 52, 46, 52, 47, 52, 47, 52, 47, 51, 47, 52, 46, 52, 47, 51, 46,
51, 47, 51, 47, 52, 46, 51, 47, 52, 47, 51, 48, 52, 46, 51, 47, 52, 46, 51, 46,
51, 46, 52, 46, 51, 46, 51, 46, 50, 47, 50, 46, 51, 46, 50, 46, 51, 45, 50, 45,
49, 45, 49, 46, 49, 45, 49, 45, 49, 45, 48, 44, 48, 44, 48, 44, 49, 44, 47, 43,
47, 43, 48, 43, 47, 42, 47, 42, 47, 42, 46, 41, 46, 41, 45, 42, 45, 41, 45, 40,
45, 41, 44, 40, 43, 40, 44, 39, 44, 39, 43, 39, 43, 39, 43, 38, 42, 39, 43, 38,
41, 38, 42, 38, 42, 38, 42, 38, 41, 37, 41, 37, 40, 35, 40, 36, 39, 36, 40, 36,
39, 36, 39, 36, 38, 35, 38, 35, 39, 34, 38, 34, 37, 33, 37, 34, 37, 34, 37, 33,
37, 33, 37, 33, 35, 33, 36, 33, 36, 31, 35, 31, 34, 32, 34, 32, 34, 31, 34, 31,
34, 31, 33, 31, 33, 31, 33, 30, 32, 29, 32, 30, 32, 29, 32, 29, 32, 29, 31, 28,
31, 28, 31, 28, 30, 28, 31, 28, 31, 27, 30, 27, 29, 27, 29, 27, 29, 26, 29, 26,
29, 26, 27, 25, 27, 26, 28, 25, 27, 24, 27, 25, 27, 24, 26, 23, 27, 23, 25, 24,
26, 24, 26, 23, 25, 23, 25, 22, 25, 23, 24, 21, 23, 21, 23, 22, 23, 20, 23, 20,
23, 21, 23, 20, 23, 19, 21, 20, 22, 19, 21, 19, 20, 19, 21, 18, 20, 19, 20, 18,
20, 19, 19, 17, 20, 18, 19, 17, 18, 17, 18, 16, 17, 16, 17, 17, 17, 17, 17, 15,
17, 16, 16, 15, 17, 15, 16, 14, 16, 14, 15, 14, 15, 14, 14, 13, 15, 12, 14, 14,
13, 12, 14, 12, 14, 12, 13, 13, 14, 12, 12, 12, 12, 11, 12, 11, 12, 11, 12, 10,
11, 10, 10, 9, 10, 9, 10, 9, 10, 8, 10, 8, 9, 8, 9, 7, 9, 8, 9, 7, 8, 8, 9, 6,
7, 7, 8, 6, 7, 6, 7, 6, 7, 6, 7, 5, 6, 6, 6, 5, 5, 4, 6, 4, 5, 3, 4, 4, 4, 3, 4,
3, 4, 3, 3, 3, 3, 2, 3, 2, 3, 2, 2, 1, 3, 1, 1, 2, 1, 1, 1, 1, 1, 0, 0, 0, 0,
-1, 1, 0, 0, 0, -1, -1, -1, -1, -1, -2, -2, -1, -1, -1, -2, -3, -2, -2, -3, -3,
-2, -3, -4, -3, -3, -4, -4, -4, -4, -4, -5, -5, -5, -5, -6, -6, -5, -6, -6, -5,
-5, -6, -6, -6, -6, -7, -7, -7, -7, -7, -8, -7, -8, -7, -9, -7, -9, -8, -8, -8,
-9, -8, -10, -8, -9, -9, -9, -10, -10, -10, -10, -11, -11, -10, -11, -11, -12,
-11, -12, -11, -11, -11, -13, -11, -13, -11, -13, -11, -13, -13, -13, -12, -14,
-13, -13, -13, -14, -13, -14, -14, -14, -13, -14, -14, -15, -14, -15, -15, -16,
-15, -16, -15, -17, -15, -16, -16, -17, -17, -18, -16, -18, -15, -18, -17, -19,
-17, -19, -17, -18, -17, -20, -18, -19, -18, -19, -18, -20, -18, -21, -19, -20,
-19, -21, -19, -21, -20, -21, -20, -22, -20, -21, -21, -23, -21, -23, -21, -23,
-21, -23, -22, -23, -21, -23, -22, -24, -22, -24, -23, -24, -24, -25, -23, -25,
-23, -25, -23, -25, -24, -26, -23, -25, -24, -26, -25, -26, -25, -27, -26, -27,
-25, -28, -25, -27, -25, -28, -26, -28, -27, -28, -27, -29, -27, -29, -27, -29,
-28, -30, -27, -31, -27, -31, -29, -31, -29, -30, -28, -31, -29, -32, -29, -32,
-29, -32, -29, -33, -30, -32, -30, -33, -30, -33, -31, -33, -30, -33, -31, -34,
-32, -34, -31, -35, -33, -35, -32, -35, -32, -35, -33, -35, -32, -35, -34, -36,
-34, -36, -34, -36, -34, -37, -34, -38, -34, -38, -34, -37, -34, -38, -35, -38,
-35, -39, -36, -39, -36, -39, -36, -39, -36, -40, -37, -39, -36, -40, -38, -40,
-37, -41, -37, -41, -38, -41, -38, -41, -38, -41, -38, -41, -39, -42, -38, -42,
-39, -42, -39, -43, -39, -43, -40, -43, -39, -44, -40, -44, -40, -44, -41, -45,
-41, -45, -41, -46, -42, -45, -42, -46, -43, -46, -42, -46, -43, -47, -43, -47,
-43, -47, -43, -47, -43, -47, -45, -48, -43, -47, -44, -48, -44, -48, -44, -48,
-45, -49, -46, -49, -46, -49, -46, -50, -46, -50, -46, -51, -47, -50, -46, -50,
-46, -50, -46, -50, -47, -51, -46, -51, -47, -51, -47, -51, -47, -51, -47, -51,
-47, -51, -47, -51, -47, -52, -46, -51, -46, -51, -47, -52, -47, -52, -47, -51,
-46, -52, -47, -52, -46, -51, -46, -51, -46, -51, -46, -52, -46, -51, -46, -52,
-46, -52, -46, -52, -47, -52, -46, -53, -46, -52, -47, -53, -47, -53, -47, -53,
-47, -53, -47, -53, -48, -55, -49, -55, -49, -56, -50, -56, -51, -56, -52, -58,
-52, -58, -53, -59, -53, -60, -56, -61, -57, -62, -57, -65, -59, -66, -60, -67,
-62, -68, -64, -71, -65, -73, -68, -75, -69, -76, -71, -79, -74, -81, -75, -83,
-76, -85, -79, -88, -80, -90, -83, -92, -85, -95, -87, -97, -88, -100, -89,
-101, -91, -106, -93, -107, -96, -110, -100, -112, -105, -116, -110, -118, -128,
-128, -109, -114, -27, -30, };

#endif /* AKWF_stereo_0154_512_H_ */
