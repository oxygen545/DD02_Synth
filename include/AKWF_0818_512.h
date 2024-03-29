#ifndef AKWF_0818_512_H_
#define AKWF_0818_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0818_512_NUM_CELLS 512
#define AKWF_0818_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0818_512_DATA [] =
{11, 29, 42, 57, 70, 83, 93, 103, 110, 114, 116, 118, 116, 113, 109, 104, 96,
84, 71, 57, 46, 32, 20, 8, -3, -15, -24, -33, -40, -45, -50, -54, -56, -57, -58,
-59, -58, -58, -57, -55, -54, -53, -50, -47, -47, -44, -41, -39, -37, -34, -32,
-29, -28, -26, -24, -22, -20, -17, -16, -14, -12, -11, -9, -8, -6, -6, -4, -3,
-2, -1, 1, 0, 2, 2, 3, 4, 5, 5, 6, 7, 8, 8, 7, 8, 8, 9, 13, 19, 26, 33, 39, 44,
50, 55, 60, 64, 66, 68, 68, 68, 66, 64, 61, 56, 50, 36, 19, 1, -16, -34, -50,
-65, -81, -94, -106, -115, -122, -126, -127, -127, -126, -121, -117, -109, -97,
-83, -68, -53, -40, -26, -11, 2, 14, 25, 35, 43, 51, 56, 61, 63, 66, 66, 68, 66,
67, 64, 64, 62, 60, 58, 56, 53, 50, 47, 45, 42, 40, 37, 34, 31, 29, 27, 24, 21,
20, 19, 15, 14, 12, 10, 8, 7, 5, 4, 2, 1, 0, -2, -3, -4, -4, -5, -7, -6, -8, -9,
-9, -9, -10, -10, -10, -12, -12, -11, -12, -12, -12, -12, -12, -13, -12, -13,
-12, -13, -12, -12, -12, -12, -12, -12, -11, -11, -11, -11, -11, -10, -10, -10,
-9, -9, -9, -8, -8, -8, -7, -7, -7, -7, -6, -7, -5, -5, -5, -5, -5, -4, -4, -3,
-3, -4, -2, -3, -2, -2, -2, -1, -2, -1, 0, 0, -1, -1, 0, -1, 0, 1, 0, 0, 0, 1,
1, 1, 1, 1, 1, 2, 1, 1, 1, 2, 2, 2, 2, 2, 2, 3, 2, 1, 2, 3, 2, 3, 2, 3, 3, 2, 3,
2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 2, 2, 2, 1, 2, 1, 2, 1, 1, 2, 1, 2, 1, 1, 1, 1,
1, 0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0,
-1, 0, 0, 0, 0, -1, -1, 0, 1, 1, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0,
-1, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, -1, -1, 0,
0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0,
0, 0, 0, 0, 0, 1, 0, 1, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, -1, 0, 0,
0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
1, 0, 0, 0, 0, -1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, 0, 0, 0, 0, -1,
-2, -8, -13, -19, -24, -29, -35, -40, -44, -48, -49, -51, -52, -51, -50, -47,
-45, -43, -36, -26, -11, 0, };

#endif /* AKWF_0818_512_H_ */
