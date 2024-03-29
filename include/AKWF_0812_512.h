#ifndef AKWF_0812_512_H_
#define AKWF_0812_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0812_512_NUM_CELLS 512
#define AKWF_0812_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0812_512_DATA [] = {3,
16, 27, 37, 47, 55, 63, 70, 74, 79, 82, 84, 85, 87, 87, 86, 85, 84, 83, 80, 78,
75, 72, 70, 65, 62, 58, 54, 51, 48, 44, 41, 37, 33, 29, 25, 23, 18, 15, 13, 10,
6, 3, 1, -2, -4, -6, -9, -11, -12, -14, -16, -18, -19, -21, -22, -23, -24, -25,
-25, -27, -27, -28, -29, -29, -29, -28, -29, -29, -29, -29, -29, -29, -29, -29,
-28, -27, -27, -26, -26, -25, -25, -24, -23, -23, -22, -22, -21, -20, -20, -18,
-18, -17, -16, -16, -16, -15, -14, -13, -12, -11, -11, -9, -9, -9, -8, -7, -7,
-6, -6, -4, -4, -3, -2, -2, -2, -1, -1, -1, 0, 1, 1, 1, 2, 2, 3, 3, 3, 4, 3, 4,
4, 5, 5, 5, 5, 4, 5, 5, 6, 6, 6, 6, 5, 6, 6, 6, 5, 6, 6, 6, 6, 6, 6, 6, 5, 6, 7,
7, 5, 5, 6, 5, 5, 5, 5, 5, 4, 5, 4, 4, 4, 5, 3, 4, 3, 4, 4, 3, 3, 3, 4, 3, 3, 3,
3, 2, 2, 2, 2, 2, 2, 2, 1, 2, 2, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 0, 0,
0, -1, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, -1, -1, -1, -1, 0, -1, 0, -1, -1, 0, 0,
0, 0, 0, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, 0, -1, -1, -1, 0, 0, 0, 0, -1,
-1, -1, 0, -1, 0, 0, -1, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, -1, 0, -1, -1, 0, 0,
-1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0,
0, 0, 1, 0, -1, 0, 0, 0, -1, 1, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1,
0, 0, 0, 0, 0, 1, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 0, 1,
0, 0, 1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, -1, -1, 1, 1, 0, 0, 1, 0, 1, 0, 0,
0, 0, 1, 0, 0, 0, -1, 0, -1, 0, 0, 0, 1, 0, 0, 1, 1, 0, 0, 0, 0, 1, -1, -1, 0,
-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, 0, 1, 0, 0, -1, 0, 1, 0,
-1, 0, -1, 0, 0, 0, 1, 0, -1, -1, 1, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0,
0, 1, 0, -1, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 1, -1, 0, 1, 0, 1, 0, 0,
-1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, -4, -29, -64, -93, -114, -125, -127, -125,
-119, -107, -95, -80, -65, -49, -33, -19, -4, };

#endif /* AKWF_0812_512_H_ */
