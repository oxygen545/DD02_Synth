#ifndef AKWF_1337_512_H_
#define AKWF_1337_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1337_512_NUM_CELLS 512
#define AKWF_1337_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1337_512_DATA [] = {2,
62, 62, 60, 62, 60, 61, 60, 63, 60, 62, 61, 62, 61, 62, 60, 62, 60, 57, 52, 50,
48, 46, 39, 29, 19, 9, -2, -3, 0, 1, 4, 5, 8, 9, 12, 13, 14, 15, 17, 19, 20, 21,
23, 23, 24, 26, 27, 28, 29, 30, 31, 31, 33, 33, 34, 35, 36, 37, 38, 38, 39, 40,
41, 41, 42, 43, 43, 44, 45, 45, 46, 47, 47, 47, 48, 48, 48, 49, 50, 50, 51, 51,
52, 52, 52, 52, 53, 54, 53, 54, 55, 54, 55, 55, 56, 55, 55, 56, 56, 57, 57, 56,
57, 56, 57, 57, 57, 58, 57, 57, 57, 57, 58, 57, 57, 57, 58, 57, 58, 57, 58, 58,
58, 58, 58, 58, 58, 58, 57, 58, 58, 58, 59, 59, 59, 58, 58, 59, 58, 58, 59, 59,
58, 60, 59, 58, 58, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 60, 59, 59,
59, 59, 59, 59, 60, 59, 59, 58, 60, 59, 60, 60, 60, 59, 59, 59, 59, 60, 60, 59,
59, 59, 59, 61, 57, 64, 25, -55, -123, -128, -126, -128, -126, -128, -127, -128,
-126, -128, -127, -127, -127, -128, -128, -128, -128, -128, -128, -128, -128,
-128, -127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127,
-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128,
-128, -127, -128, -128, -128, -128, -128, -128, -127, -128, -128, -128, -127,
-128, -128, -128, -128, -128, -128, -128, -127, -128, -127, -128, -127, -127,
-128, -128, -128, -128, -128, -127, -128, -128, -128, -126, -115, -107, -95,
-81, -67, -56, -45, -36, -34, -29, -26, -24, -23, -21, -16, -12, -8, -6, -3, -1,
1, 5, 6, 8, 10, 12, 14, 17, 18, 19, 21, 22, 24, 26, 26, 29, 30, 31, 33, 32, 34,
35, 37, 38, 38, 40, 40, 41, 42, 42, 43, 45, 44, 45, 46, 47, 46, 48, 49, 48, 49,
49, 50, 51, 51, 51, 52, 53, 54, 53, 54, 54, 54, 55, 55, 56, 55, 56, 56, 56, 56,
57, 57, 57, 57, 57, 57, 57, 57, 57, 58, 57, 57, 58, 57, 57, 57, 57, 58, 59, 58,
58, 59, 58, 58, 58, 59, 58, 58, 59, 58, 58, 59, 59, 59, 59, 58, 59, 59, 58, 59,
58, 59, 58, 59, 60, 59, 59, 59, 59, 59, 60, 59, 60, 60, 60, 59, 60, 60, 59, 59,
59, 59, 60, 60, 60, 60, 60, 60, 60, 60, 60, 60, 59, 59, 60, 59, 60, 60, 60, 60,
60, 60, 60, 59, 60, 60, 60, 59, 60, 60, 60, 59, 61, 59, 60, 60, 61, 60, 60, 61,
61, 60, 59, 62, 58, 65, 25, -57, -123, -128, -126, -127, -127, -128, -126, -128,
-127, -128, -127, -128, -127, -128, -127, -128, -128, -128, -128, -127, -128,
-128, -128, -127, -128, -127, -128, -128, -128, -127, -128, -127, -127, -128,
-128, -128, -127, -128, -126, -128, -126, -127, -125, -127, -124, -128, -119,
-127, -82, };

#endif /* AKWF_1337_512_H_ */