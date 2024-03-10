#ifndef AKWF_0313_512_H_
#define AKWF_0313_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0313_512_NUM_CELLS 512
#define AKWF_0313_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0313_512_DATA [] = {8,
23, 33, 45, 56, 68, 76, 86, 94, 102, 108, 115, 119, 123, 125, 127, 127, 127,
126, 123, 120, 116, 112, 106, 100, 93, 85, 76, 68, 61, 52, 42, 33, 24, 16, 7,
-1, -9, -17, -24, -32, -37, -43, -49, -54, -57, -61, -63, -66, -67, -68, -69,
-68, -68, -66, -65, -62, -60, -57, -53, -49, -46, -42, -37, -34, -29, -24, -20,
-15, -10, -6, -2, 3, 6, 10, 13, 17, 19, 21, 24, 27, 28, 29, 30, 32, 32, 32, 33,
32, 32, 30, 29, 29, 28, 26, 24, 23, 21, 19, 17, 15, 14, 11, 8, 8, 5, 3, 1, 0,
-3, -4, -5, -7, -8, -8, -10, -10, -11, -11, -12, -12, -12, -12, -12, -13, -12,
-11, -11, -11, -9, -9, -9, -7, -6, -5, -4, -4, -3, -1, -1, 1, 1, 2, 2, 3, 4, 5,
5, 6, 6, 7, 7, 7, 7, 8, 8, 8, 9, 8, 8, 8, 8, 8, 7, 7, 7, 6, 7, 6, 6, 6, 5, 4, 4,
4, 4, 4, 2, 3, 3, 1, 1, 2, 1, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 0, 0, 1, 1, 0, 1, 0,
1, 1, 1, 1, 2, 1, 1, 1, 2, 1, 2, 2, 2, 2, 2, 3, 2, 2, 2, 2, 2, 2, 3, 1, 2, 2, 2,
1, 2, 1, 1, 1, 0, 1, 1, 1, 0, 1, -1, -1, 0, -1, -1, -1, -2, -1, -2, -2, -2, -2,
-2, -2, -2, -3, -3, -2, -3, -4, -3, -4, -4, -4, -3, -4, -3, -4, -4, -4, -4, -4,
-4, -4, -4, -4, -4, -3, -4, -3, -2, -3, -3, -2, -3, -2, -3, -3, -2, -2, -3, -2,
-3, -2, -2, -3, -3, -3, -3, -2, -2, -1, -2, -1, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -1, -2, -1, -2, -1, -2, -1, -1, -1, -1, -1, -2, -1, -1, -2, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -2, -1, -1, 0, -1, -2, 0, -1, -1, -1, -1,
-1, -1, -1, -2, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, 0, -1, 0, 0, 0, 0, -1, -1, 0, -1, -1, -1, -1, -1, 0, -1, -1,
0, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0,
0, 0, 0, -1, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, -1,
-1, -1, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 1,
-1, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, -1, 0, -2, -6, -12, -19, -27, -36,
-45, -53, -63, -71, -79, -86, -91, -96, -100, -102, -102, -103, -101, -97, -93,
-87, -81, -72, -64, -53, -43, -31, -22, -9, 0, };

#endif /* AKWF_0313_512_H_ */
