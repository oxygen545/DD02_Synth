#ifndef AKWF_0370_512_H_
#define AKWF_0370_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0370_512_NUM_CELLS 512
#define AKWF_0370_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0370_512_DATA [] =
{13, 40, 62, 80, 94, 106, 114, 119, 123, 124, 123, 121, 119, 115, 110, 104, 97,
91, 85, 77, 71, 65, 59, 52, 47, 41, 36, 30, 23, 18, 11, 4, -3, -11, -20, -30,
-38, -46, -56, -64, -71, -79, -84, -88, -91, -94, -94, -94, -93, -91, -86, -81,
-75, -69, -61, -52, -43, -34, -24, -14, -5, 3, 11, 18, 26, 33, 40, 45, 49, 54,
56, 58, 61, 61, 62, 62, 60, 58, 56, 54, 50, 45, 41, 35, 31, 25, 19, 12, 6, -1,
-7, -14, -20, -27, -33, -39, -44, -49, -53, -57, -60, -61, -62, -62, -63, -60,
-59, -56, -54, -49, -44, -39, -34, -28, -21, -14, -7, -1, 6, 12, 19, 25, 32, 38,
44, 48, 53, 57, 61, 64, 66, 67, 67, 68, 67, 66, 64, 61, 59, 56, 51, 46, 41, 35,
29, 23, 17, 10, 5, -2, -8, -14, -19, -25, -30, -35, -40, -44, -48, -51, -52,
-54, -54, -55, -56, -54, -52, -51, -48, -45, -41, -38, -34, -29, -24, -20, -15,
-10, -5, -1, 4, 8, 13, 17, 20, 23, 27, 29, 33, 34, 35, 36, 37, 37, 36, 35, 33,
32, 28, 26, 22, 19, 15, 11, 8, 3, -1, -5, -9, -13, -16, -19, -24, -27, -30, -33,
-34, -35, -36, -38, -38, -39, -37, -36, -35, -32, -30, -27, -23, -21, -16, -12,
-9, -4, 0, 5, 10, 14, 21, 26, 32, 37, 41, 46, 49, 52, 54, 56, 57, 56, 56, 54,
51, 47, 44, 39, 35, 30, 24, 19, 14, 8, 3, -1, -5, -9, -14, -17, -20, -25, -28,
-31, -33, -35, -37, -39, -40, -41, -41, -41, -41, -40, -40, -38, -36, -34, -32,
-29, -25, -22, -19, -15, -11, -7, -3, 0, 4, 7, 10, 14, 17, 19, 21, 23, 25, 26,
28, 28, 28, 27, 27, 24, 24, 23, 20, 17, 15, 12, 9, 7, 3, 0, -2, -6, -9, -11,
-14, -17, -19, -21, -23, -24, -26, -27, -27, -29, -28, -28, -27, -26, -24, -23,
-21, -19, -17, -14, -11, -7, -5, -2, 1, 4, 8, 11, 13, 17, 20, 22, 25, 27, 30,
32, 32, 34, 34, 34, 35, 34, 33, 32, 31, 29, 28, 25, 22, 21, 17, 15, 12, 9, 6, 3,
0, -2, -5, -9, -11, -14, -16, -19, -21, -22, -24, -25, -25, -26, -27, -26, -27,
-25, -26, -24, -23, -22, -19, -18, -16, -14, -12, -10, -7, -4, -3, -1, 2, 4, 6,
7, 9, 10, 12, 13, 14, 14, 15, 15, 14, 15, 14, 13, 13, 11, 10, 8, 7, 5, 3, 2, 1,
-1, -2, -5, -6, -8, -9, -11, -12, -14, -15, -16, -16, -17, -17, -17, -18, -16,
-16, -15, -15, -14, -12, -10, -9, -6, -5, -4, -1, 1, 3, 5, 7, 9, 10, 13, 14, 16,
17, 19, 20, 21, 22, 22, 23, 24, 23, 23, 22, 21, 21, 20, 18, 12, 2, -12, -30,
-49, -70, -88, -103, -115, -122, -127, -128, -126, -123, -117, -105, -89, -68,
-47, -20, -1, };

#endif /* AKWF_0370_512_H_ */
