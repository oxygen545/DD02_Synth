#ifndef AKWF_0807_512_H_
#define AKWF_0807_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0807_512_NUM_CELLS 512
#define AKWF_0807_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0807_512_DATA [] =
{20, 56, 83, 105, 117, 126, 127, 126, 120, 110, 99, 84, 69, 54, 39, 24, 10, -5,
-17, -30, -39, -49, -57, -63, -67, -71, -73, -74, -75, -74, -72, -73, -73, -73,
-71, -67, -64, -60, -55, -50, -45, -41, -36, -30, -27, -22, -17, -14, -10, -7,
-4, -1, 2, 4, 6, 8, 10, 12, 12, 13, 14, 15, 15, 17, 21, 22, 24, 24, 25, 25, 24,
24, 22, 21, 20, 18, 16, 15, 14, 12, 12, 10, 9, 8, 7, 6, 5, 4, 4, 3, 2, 2, 1, 1,
0, -2, -5, -7, -9, -10, -10, -10, -10, -8, -9, -7, -7, -5, -5, -3, -2, -2, 0, 0,
2, 3, 3, 4, 4, 5, 6, 6, 7, 7, 7, 7, 9, 11, 13, 16, 17, 18, 18, 18, 17, 16, 16,
21, 26, 29, 29, 29, 29, 28, 26, 23, 20, 18, 15, 11, 9, 7, 3, 2, -1, -3, -6, -8,
-9, -14, -18, -21, -23, -25, -25, -27, -27, -27, -27, -25, -24, -24, -23, -21,
-20, -20, -18, -16, -16, -15, -13, -12, -11, -10, -9, -9, -7, -6, -6, -4, -3, 0,
3, 6, 7, 9, 9, 10, 11, 10, 10, 9, 9, 8, 7, 6, 6, 5, 5, 4, 3, 3, 3, 1, 1, 0, 1,
1, 2, 8, 15, 18, 21, 19, 15, 14, 11, 9, 7, 5, 3, 1, 0, -2, -3, -3, -5, -5, -5,
-7, -7, -8, -8, -8, -8, -9, -9, -9, -8, -9, -8, -9, -8, -8, -7, -25, -64, -91,
-109, -121, -127, -127, -124, -117, -108, -97, -86, -74, -61, -49, -37, -26,
-15, -4, 6, 14, 23, 32, 38, 45, 50, 55, 60, 64, 67, 71, 72, 72, 71, 70, 69, 69,
70, 76, 82, 86, 88, 90, 89, 89, 87, 84, 81, 77, 74, 70, 66, 62, 58, 53, 49, 46,
41, 38, 34, 30, 26, 23, 21, 19, 19, 18, 16, 13, 10, 8, 5, 2, -1, -4, -6, -9,
-12, -14, -17, -19, -20, -23, -24, -25, -28, -29, -30, -32, -32, -33, -33, -34,
-34, -36, -36, -38, -41, -43, -45, -44, -44, -43, -44, -42, -41, -40, -38, -36,
-34, -33, -31, -30, -28, -26, -24, -23, -20, -14, -7, -2, 2, 5, 6, 8, 8, 7, 8,
9, 11, 11, 11, 10, 9, 9, 7, 4, 3, 2, 0, -2, -3, -5, -7, -8, -9, -10, -10, -12,
-13, -12, -14, -13, -15, -14, -14, -14, -14, -13, -14, -16, -19, -20, -21, -22,
-20, -20, -18, -17, -16, -15, -13, -11, -9, -7, -7, -5, -4, -3, -1, 0, 2, 3, 4,
5, 6, 7, 8, 8, 9, 9, 10, 14, 17, 20, 20, 21, 21, 21, 21, 21, 20, 19, 18, 17, 16,
14, 14, 12, 11, 11, 9, 8, 8, 7, 6, 5, 5, 4, 3, 3, 3, 2, 0, -3, -5, -7, -8, -9,
-10, -10, -10, -9, -8, -8, -7, -6, -6, -5, -3, -3, -2, -1, -1, 0, 2, 2, 2, 3, 3,
0, -32, -61, -63, -56, -34, -7, };

#endif /* AKWF_0807_512_H_ */
