#ifndef AKWF_1551_512_H_
#define AKWF_1551_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1551_512_NUM_CELLS 512
#define AKWF_1551_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1551_512_DATA [] = {1,
2, 4, 5, 6, 7, 9, 9, 11, 12, 13, 13, 13, 14, 15, 16, 17, 16, 17, 17, 17, 18, 18,
18, 19, 19, 18, 18, 19, 19, 19, 19, 19, 19, 20, 19, 20, 20, 19, 20, 20, 20, 20,
20, 20, 20, 19, 20, 20, 20, 20, 21, 20, 20, 21, 19, 20, 20, 20, 20, 20, 20, 20,
20, 21, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 21, 20, 20, 20, 20, 20, 20,
20, 20, 20, 20, 20, 21, 20, 19, 20, 20, 19, 19, 20, 20, 21, 20, 20, 20, 20, 19,
20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 19, 20, 20, 20, 20, 19, 20, 20, 19, 20,
20, 19, 20, 20, 20, 19, 19, 20, 20, 20, 20, 19, 20, 20, 19, 19, 20, 19, 19, 19,
19, 19, 20, 19, 20, 19, 20, 18, 20, 19, 20, 18, 20, 19, 21, 19, 21, 19, 21, 19,
21, 18, 21, 10, -109, -128, -123, -128, -124, -128, -126, -128, -126, -128,
-126, -128, -127, -127, -128, -128, -128, -128, -128, -128, -127, -128, -128,
-127, -128, -128, -128, -127, -128, -128, -127, -127, -128, -127, -128, -126,
-128, -127, -128, -127, -128, -127, -127, -126, -127, -127, -128, -125, -128,
-113, -2, 30, 16, 23, 19, 23, 19, 22, 19, 22, 19, 21, 20, 21, 20, 21, 21, 20,
21, 21, 21, 20, 21, 21, 20, 21, 21, 20, 20, 21, 21, 20, 21, 20, 20, 21, 20, 20,
20, 21, 21, 20, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 20, 21, 20, 20, 21, 21,
21, 21, 21, 21, 21, 21, 21, 20, 21, 20, 20, 21, 22, 21, 21, 21, 21, 20, 21, 20,
21, 21, 21, 20, 21, 20, 20, 20, 20, 20, 20, 21, 20, 21, 21, 20, 21, 21, 20, 20,
20, 20, 20, 20, 21, 21, 20, 21, 21, 20, 20, 20, 21, 20, 20, 20, 20, 20, 20, 20,
20, 21, 21, 20, 21, 20, 21, 20, 20, 19, 20, 20, 21, 19, 20, 21, 20, 20, 19, 20,
19, 22, 18, 21, 19, 23, 15, 32, -25, -109, -100, -91, -79, -71, -62, -55, -47,
-42, -36, -31, -26, -22, -18, -14, -12, -8, -7, -3, -1, 2, 3, 5, 6, 8, 9, 9, 10,
12, 12, 14, 14, 15, 15, 15, 17, 17, 17, 18, 18, 18, 19, 18, 19, 18, 19, 19, 19,
19, 20, 19, 20, 20, 20, 20, 21, 20, 20, 21, 20, 20, 20, 20, 20, 20, 20, 21, 20,
21, 20, 21, 20, 21, 20, 21, 21, 21, 20, 21, 21, 21, 20, 20, 21, 21, 20, 20, 20,
20, 20, 20, 21, 21, 21, 20, 20, 21, 21, 20, 20, 21, 21, 20, 21, 21, 21, 20, 21,
20, 20, 21, 20, 20, 20, 20, 20, 21, 19, 21, 19, 22, 20, 22, 19, 23, 18, 24, -42,
-119, -96, -89, -78, -70, -61, -53, -47, -39, -35, -29, -25, -21, -17, -13, -11,
-7, -7, -2, 0, };

#endif /* AKWF_1551_512_H_ */
