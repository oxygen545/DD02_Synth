#ifndef AKWF_1993_512_H_
#define AKWF_1993_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1993_512_NUM_CELLS 512
#define AKWF_1993_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1993_512_DATA [] = {2,
5, 7, 10, 12, 15, 17, 18, 18, 19, 19, 18, 19, 18, 18, 17, 17, 17, 17, 17, 16,
16, 15, 15, 16, 15, 15, 14, 15, 15, 15, 15, 14, 14, 14, 13, 13, 14, 12, 13, 13,
12, 13, 13, 12, 12, 13, 13, 13, 14, 14, 13, 14, 14, 14, 14, 14, 15, 15, 15, 15,
16, 15, 15, 16, 16, 16, 16, 17, 17, 17, 17, 17, 18, 18, 18, 18, 19, 19, 19, 19,
19, 18, 19, 19, 18, 18, 18, 18, 18, 19, 18, 18, 18, 18, 17, 17, 17, 17, 17, 17,
18, 18, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 16, 16, 16, 17, 16, 17, 17, 17,
16, 16, 16, 17, 17, 17, 17, 17, 17, 18, 17, 17, 17, 17, 17, 17, 18, 18, 17, 17,
18, 18, 18, 17, 19, 18, 19, 18, 19, 18, 19, 18, 19, 18, 19, 18, 18, 19, 18, 18,
18, 18, 18, 18, 18, 18, 18, 19, 18, 17, 18, 17, 18, 17, 17, 17, 17, 17, 17, 18,
17, 17, 17, 18, 17, 18, 17, 17, 17, 18, 17, 16, 17, 18, 17, 18, 17, 17, 18, 18,
17, 18, 17, 18, 18, 18, 18, 18, 17, 18, 18, 19, 17, 19, 18, 18, 17, 18, 18, 18,
19, 18, 18, 19, 18, 18, 19, 18, 18, 18, 18, 19, 18, 18, 18, 18, 18, 18, 19, 18,
18, 18, 17, 18, 18, 18, 18, 18, 18, 17, 17, 18, 17, 17, 17, 17, 17, 16, 17, 17,
17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 18, 17, 17, 18, 17, 18, 18, 17,
18, 17, 17, 18, 18, 18, 17, 17, 18, 18, 18, 18, 18, 19, 18, 19, 18, 19, 19, 19,
18, 18, 18, 18, 18, 18, 18, 19, 18, 18, 17, 18, 19, 18, 19, 19, 18, 18, 18, 19,
18, 17, 18, 18, 18, 18, 17, 17, 17, 18, 18, 18, 17, 18, 18, 17, 18, 17, 17, 17,
17, 17, 17, 17, 16, 16, 17, 17, 17, 17, 17, 17, 16, 16, 16, 15, 17, 16, 16, 15,
16, 15, 15, 15, 15, 14, 15, 15, 15, 15, 15, 15, 15, 14, 14, 14, 16, 15, 15, 15,
16, 16, 15, 15, 15, 15, 15, 16, 16, 15, 15, 16, 16, 16, 16, 16, 16, 16, 16, 16,
17, 17, 17, 16, 17, 17, 17, 17, 15, 11, 7, 3, -1, -5, -9, -12, -17, -20, -24,
-28, -33, -36, -40, -44, -48, -52, -56, -61, -65, -69, -72, -75, -80, -84, -88,
-92, -96, -100, -104, -108, -112, -116, -120, -124, -128, -127, -126, -123,
-122, -121, -121, -118, -117, -116, -114, -113, -112, -109, -108, -106, -105,
-103, -102, -101, -99, -97, -97, -95, -93, -92, -90, -89, -88, -86, -84, -82,
-82, -81, -79, -77, -76, -75, -71, -69, -66, -64, -61, -59, -56, -54, -51, -48,
-45, -43, -41, -37, -35, -33, -30, -28, -25, -23, -20, -17, -15, -12, -9, -7,
-5, -2, 0, };

#endif /* AKWF_1993_512_H_ */
