#ifndef AKWF_1595_512_H_
#define AKWF_1595_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1595_512_NUM_CELLS 512
#define AKWF_1595_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1595_512_DATA [] =
{62, 85, 73, 80, 75, 81, 76, 80, 76, 79, 77, 79, 76, 79, 77, 77, 77, 78, 78, 77,
80, 74, 116, 127, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126, 127, 127, 127, 127, 127,
127, 127, 127, 127, 127, 124, 127, 25, -9, 6, -5, 4, -3, 3, -2, 2, -2, 1, -1, 1,
-1, 0, -1, 0, 1, 1, 0, 1, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 0, -1, 0, 0, 0, 0, 0, 0,
0, -1, 0, 0, 0, -1, 0, -1, 0, -2, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, 1, 1, -1, 0,
0, 2, -1, 1, -2, 3, -3, 5, -9, 15, -62, -127, -120, -128, -125, -128, -126,
-128, -128, -128, -127, -128, -128, -128, -128, -127, -128, -128, -128, -128,
-128, -127, -128, -127, -128, -127, -128, -127, -128, -128, -128, -128, -128,
-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128,
-128, -128, -128, -128, -128, -128, -128, -128, -127, -128, -128, -128, -128,
-128, -128, -128, -128, -128, -127, -128, -128, -128, -127, -128, -128, -128,
-128, -128, -127, -128, -128, -128, -128, -128, -128, -127, -128, -127, -128,
-128, -128, -128, -128, -128, -127, -128, -128, -128, -128, -128, -127, -128,
-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -128,
-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127,
-128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128,
-128, -128, -128, -128, -127, -128, -128, -128, -128, -128, -127, -128, -127,
-127, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -127, -128,
-128, -128, -128, -127, -128, -128, -128, -127, -128, -128, -128, -128, -127,
-128, -128, -128, -128, -128, -127, -127, -128, -127, -128, -128, -128, -128,
-128, -128, -127, -128, -127, -128, -125, -128, -102, -71, -81, -76, -80, -77,
-79, -77, -78, -78, -78, -79, -78, -78, -77, -80, -76, -81, -75, -81, -73, -86,
-50, };

#endif /* AKWF_1595_512_H_ */