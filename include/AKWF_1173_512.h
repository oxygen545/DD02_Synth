#ifndef AKWF_1173_512_H_
#define AKWF_1173_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1173_512_NUM_CELLS 512
#define AKWF_1173_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1173_512_DATA [] = {3,
8, 11, 13, 15, 17, 17, 17, 19, 18, 18, 17, 17, 17, 16, 15, 14, 14, 12, 12, 11,
10, 10, 9, 8, 7, 7, 6, 6, 5, 5, 4, 3, 4, 3, 3, 2, 1, 2, 2, 1, 1, 1, 1, 1, 1, 0,
1, 1, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 1, 0, 0, 0, -1, 0, 1, 1, 0,
1, 1, -1, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, -1, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
0, 0, 1, 0, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0,
0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, 0,
1, -1, 0, 0, -1, 0, -1, 0, 0, 1, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, -1, 0,
1, 0, 0, 0, 0, -1, 1, 0, 0, 0, 1, 0, -1, 0, -1, 1, -1, 0, 1, 1, -1, 0, 0, 0, 0,
1, 0, 1, 0, 0, -2, -41, -73, -101, -90, -62, -38, -34, -66, -92, -111, -91, -59,
-38, -24, -14, -8, -5, -39, -70, -94, -87, -54, -33, -16, -9, -1, 1, 6, 7, 10,
10, 12, 12, 13, 13, 13, 13, 12, 13, 12, 11, 10, 10, 9, 9, 9, 7, 7, 6, 7, 6, 5,
6, 4, 4, 4, 3, 3, 3, 2, 3, 2, 2, 2, 1, 1, 1, 1, 0, 0, 1, 0, 0, 1, 1, 0, 0, -1,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, -1, 1, 0, 0, 0, 1, 0, 0, 1,
0, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 1, 0, 0, -1, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0,
-1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, -1, 0, 0, 0, 0, 0,
-1, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0,
0, -1, 0, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, -1, -1, 0, 0, 0,
1, 0, 0, 0, 0, 0, -1, 0, 0, 1, 0, 0, 0, 1, -1, 1, 0, 1, -1, 3, -24, -64, -92,
-100, -70, -48, -29, -54, -81, -107, -101, -69, -45, -31, -58, -85, -103, -116,
-121, -127, -121, -83, -52, -30, -16, -6, 0, };

#endif /* AKWF_1173_512_H_ */