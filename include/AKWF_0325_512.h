#ifndef AKWF_0325_512_H_
#define AKWF_0325_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0325_512_NUM_CELLS 512
#define AKWF_0325_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0325_512_DATA [] =
{-3, -9, -12, -14, -13, -11, -6, -3, -1, -6, -23, -47, -61, -44, 6, 69, 110,
122, 105, 64, 4, -62, -111, -128, -116, -81, -33, 21, 75, 112, 127, 119, 90, 45,
-9, -60, -101, -120, -120, -100, -65, -20, 26, 65, 91, 102, 96, 76, 44, 7, -29,
-58, -78, -84, -76, -58, -31, -2, 25, 48, 62, 66, 59, 45, 26, 2, -19, -36, -48,
-51, -46, -37, -22, -5, 12, 26, 33, 35, 33, 25, 15, 0, -13, -23, -30, -32, -30,
-23, -13, -3, 7, 15, 21, 21, 19, 13, 6, -2, -8, -13, -16, -15, -13, -9, -3, 3,
7, 11, 13, 13, 12, 8, 4, 1, -2, -5, -6, -6, -4, -3, 1, 3, 6, 8, 9, 8, 7, 4, 3,
0, -2, -3, -2, -2, -1, -1, 1, 2, 4, 5, 5, 5, 3, 2, 0, -2, -2, -2, -3, -1, -1, 0,
1, 2, 3, 3, 2, 1, 0, 0, -1, -1, -1, -1, 0, 0, 1, 2, 3, 4, 7, 13, 16, 11, -15,
-55, -87, -93, -73, -37, 8, 55, 91, 111, 110, 91, 60, 19, -26, -68, -98, -112,
-107, -84, -47, -3, 40, 75, 96, 103, 93, 70, 38, 1, -34, -63, -81, -86, -78,
-58, -31, -1, 27, 49, 63, 66, 60, 46, 25, 1, -20, -38, -49, -52, -47, -36, -20,
-3, 14, 27, 35, 38, 36, 28, 17, 3, -10, -20, -27, -29, -28, -21, -13, -2, 7, 15,
20, 23, 21, 16, 9, 2, -4, -12, -15, -17, -16, -13, -8, 5, 32, 72, 90, 64, 7,
-49, -88, -109, -110, -79, -20, 42, 84, 95, 86, 61, 20, -26, -63, -84, -89, -79,
-54, -18, 24, 60, 84, 92, 84, 63, 30, -6, -39, -63, -77, -77, -65, -44, -15, 14,
40, 58, 67, 64, 52, 32, 10, -13, -34, -48, -53, -51, -42, -26, -7, 12, 27, 39,
42, 41, 34, 21, 8, -7, -19, -27, -32, -31, -24, -15, -4, 8, 18, 25, 29, 27, 22,
15, 6, -3, -11, -16, -19, -18, -14, -9, -2, 5, 10, 15, 15, 15, 12, 7, 3, -3, -7,
-11, -13, -12, -11, -8, -4, 0, 5, 7, 7, 8, 6, 3, -1, -4, -7, -9, -10, -8, -7,
-5, -2, 0, 3, 3, 3, 3, 3, 0, -1, -2, -4, -5, -5, -5, -4, -3, 0, 2, 3, 4, 3, 1,
0, -1, -2, -3, -2, -2, -1, -1, 0, 0, 1, 2, 1, 0, 0, 1, 0, -1, -2, -3, -5, -6,
-8, -10, -15, -15, 2, 38, 78, 99, 90, 59, 15, -34, -79, -110, -119, -107, -81,
-43, 3, 50, 90, 114, 119, 104, 72, 27, -21, -62, -93, -108, -106, -89, -58, -21,
18, 53, 78, 90, 89, 74, 48, 18, -14, -42, -62, -71, -70, -58, -38, -14, 12, 34,
51, 57, 56, 46, 30, 10, -9, -26, -38, -44, -43, -36, -21, -6, 10, 22, 31, 34,
32, 25, 15, 4, -8, -18, -24, -25, -23, -18, -11, -2, 6, 12, 16, 18, 16, 12, 7,
0, };

#endif /* AKWF_0325_512_H_ */
