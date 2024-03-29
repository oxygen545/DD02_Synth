#ifndef AKWF_0830_512_H_
#define AKWF_0830_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0830_512_NUM_CELLS 512
#define AKWF_0830_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0830_512_DATA [] = {1,
2, 3, 3, 4, 5, 7, 7, 8, 8, 9, 10, 11, 11, 13, 13, 13, 14, 15, 16, 16, 17, 17,
18, 17, 18, 18, 19, 19, 19, 20, 20, 21, 21, 21, 20, 21, 21, 22, 22, 21, 22, 22,
22, 22, 22, 22, 22, 22, 21, 22, 23, 23, 22, 22, 22, 22, 22, 23, 22, 22, 22, 23,
22, 22, 23, 24, 22, 23, 22, 22, 23, 24, 24, 23, 24, 24, 25, 25, 25, 26, 25, 26,
27, 27, 28, 28, 29, 30, 30, 30, 31, 31, 33, 32, 34, 34, 35, 36, 37, 38, 39, 39,
40, 41, 42, 43, 45, 46, 46, 47, 49, 50, 51, 52, 53, 54, 55, 57, 58, 59, 60, 62,
63, 64, 66, 66, 67, 69, 71, 72, 73, 75, 76, 77, 78, 80, 82, 83, 85, 85, 88, 88,
90, 91, 93, 94, 96, 96, 98, 99, 100, 101, 104, 104, 106, 107, 108, 110, 111,
112, 112, 114, 115, 115, 117, 117, 118, 120, 120, 122, 122, 123, 123, 123, 125,
125, 126, 126, 127, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
127, 126, 126, 125, 124, 124, 122, 122, 122, 120, 119, 118, 116, 114, 114, 112,
111, 109, 107, 106, 104, 101, 100, 98, 96, 93, 91, 89, 86, 83, 81, 79, 77, 74,
71, 67, 66, 63, 60, 57, 54, 51, 49, 46, 43, 40, 37, 34, 31, 28, 24, 23, 19, 16,
13, 10, 8, 5, 2, -1, -4, -6, -9, -11, -15, -17, -20, -22, -25, -27, -29, -31,
-33, -36, -38, -40, -42, -45, -46, -49, -51, -52, -54, -56, -57, -59, -60, -62,
-63, -64, -66, -68, -68, -69, -70, -71, -73, -73, -74, -74, -76, -76, -77, -78,
-77, -79, -78, -80, -79, -80, -81, -81, -81, -81, -81, -80, -80, -81, -82, -82,
-81, -80, -80, -80, -80, -79, -80, -79, -78, -78, -78, -77, -77, -76, -76, -75,
-74, -75, -73, -73, -72, -72, -71, -70, -69, -70, -69, -68, -68, -67, -66, -65,
-65, -64, -64, -64, -63, -62, -62, -62, -61, -61, -61, -60, -60, -59, -59, -59,
-59, -58, -58, -57, -57, -57, -57, -57, -57, -56, -55, -56, -56, -57, -57, -56,
-56, -57, -56, -57, -57, -57, -57, -57, -58, -59, -59, -59, -59, -59, -60, -61,
-60, -61, -61, -61, -62, -62, -63, -63, -64, -64, -65, -65, -65, -67, -67, -66,
-67, -67, -68, -69, -69, -69, -70, -70, -70, -72, -71, -71, -72, -72, -73, -72,
-72, -73, -73, -73, -72, -73, -73, -73, -74, -73, -73, -72, -73, -72, -72, -72,
-71, -71, -71, -71, -71, -71, -70, -69, -69, -68, -68, -67, -66, -66, -65, -65,
-64, -62, -61, -61, -60, -59, -58, -58, -57, -56, -54, -54, -52, -51, -50, -49,
-48, -47, -45, -45, -43, -42, -41, -39, -38, -36, -36, -34, -33, -32, -30, -29,
-27, -26, -26, -24, -23, -21, -19, -18, -17, -17, -15, -14, -12, -12, -10, -9,
-8, -6, -5, -5, -3, -2, 0, -1, };

#endif /* AKWF_0830_512_H_ */
