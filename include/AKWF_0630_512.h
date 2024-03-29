#ifndef AKWF_0630_512_H_
#define AKWF_0630_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0630_512_NUM_CELLS 512
#define AKWF_0630_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0630_512_DATA [] =
{20, 44, 70, 87, 36, 32, 43, 30, 28, 20, 13, -4, 3, -2, 2, -2, 3, -10, -19, -14,
-16, -16, -9, 4, -3, 2, -1, 2, -1, 1, 0, 0, 1, -1, 0, 0, 0, -1, 1, -1, 1, -1, 0,
-2, 5, 18, 15, 18, 18, 20, 19, 21, 20, 21, 18, 19, 11, -4, 2, -1, 1, -1, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 1, 1, 0, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0,
0, 0, 0, 0, 0, 0, 1, 0, 1, -1, 0, 0, 0, 0, 1, -1, 0, 0, 0, 1, 0, 1, -1, 2, -3,
4, -20, -27, -32, -33, -31, -26, -20, -4, 3, -4, 5, -5, 18, 22, 23, 25, 24, 24,
20, 20, 13, -2, 1, 1, -1, 1, -1, 1, -1, 0, -1, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0,
0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 1, 0, 0, -1, 1, 0, 0, -2, 2, -2, 10, 18,
15, 20, 17, 20, 17, 21, 1, 3, -4, -18, -14, -4, 3, -3, 2, -2, 1, -1, 1, -1, 1,
-1, 1, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, 0, 0, -1, -1, 0, 0, 0, 1,
0, 1, 0, 1, -1, 0, -1, 1, -2, 1, -1, 1, -2, 1, -1, 0, 0, -17, -7, 28, -34, -91,
-55, -61, 3, -3, -46, -7, 1, 1, -2, 10, 29, 37, 55, 71, 39, 20, 31, 19, 18, 1,
-1, 2, -1, 2, -2, 2, -2, 0, -1, 0, -1, 0, 0, 1, 1, 0, 1, 0, 0, 0, 1, 0, 0, -1,
1, 0, -1, 0, 0, -1, 0, 0, 0, 0, -1, -1, 0, 0, 0, -1, 0, 0, 1, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, -1,
10, 20, 14, 3, 0, 2, -1, 1, -4, -15, -17, -7, 2, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, -1, 0, 0, 0, 0, 1, -1, 0, 0, 0, -1, 0, 1, -1, 1, 0, 0, 0, 0, 0, 0, 0,
0, 1, 0, -1, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0,
0, -1, 0, 0, 0, 0, 0, 1, -1, -1, -1, 0, 1, 0, 0, 0, 0, 1, -1, 1, 0, 0, -1, 1, 0,
0, 0, 0, -1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 2, -1, 2, -2, 2, -2, 2, -2, 2, -2,
2, -2, 1, -1, 1, 22, 31, -27, -104, -60, -67, -2, 3, -39, -7, 0, 0, -1, };

#endif /* AKWF_0630_512_H_ */
