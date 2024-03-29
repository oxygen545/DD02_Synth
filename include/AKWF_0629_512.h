#ifndef AKWF_0629_512_H_
#define AKWF_0629_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0629_512_NUM_CELLS 512
#define AKWF_0629_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0629_512_DATA [] = {2,
5, 7, 11, 13, 16, 19, 22, 24, 26, 30, 33, 35, 38, 40, 43, 46, 48, 51, 54, 57,
60, 62, 65, 68, 70, 73, 76, 78, 81, 84, 87, 90, 92, 95, 98, 100, 104, 106, 110,
112, 114, 117, 120, 123, 126, 127, 127, 127, 126, 126, 126, 126, 125, 125, 124,
124, 123, 124, 123, 122, 121, 121, 120, 120, 120, 119, 119, 118, 119, 118, 118,
117, 116, 116, 115, 115, 115, 114, 114, 113, 112, 112, 112, 112, 111, 111, 110,
110, 110, 108, 108, 108, 107, 107, 107, 106, 106, 105, 105, 104, 105, 104, 103,
100, 99, 97, 95, 92, 92, 89, 88, 86, 84, 82, 81, 78, 77, 75, 73, 71, 69, 68, 66,
63, 61, 60, 58, 56, 54, 53, 51, 49, 46, 46, 43, 42, 40, 38, 36, 34, 32, 31, 28,
26, 25, 23, 21, 20, 18, 16, 14, 12, 10, 9, 6, 5, 3, 1, 0, 1, -1, 0, 0, 1, 0, 0,
-1, 1, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 1, -1, 0, -1, -1, 0, 1, 1, 0, 0, -1, 0, 0,
0, 0, 0, 0, -1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, -1, 1, 0, 0, 0, 0, 0, -1, 0, -1,
-1, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0,
0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, -1, 0, 0, 1, 0, 0, 1, 0, 0, -1, 0, 0, 1, 0, 0,
-1, 0, 0, -1, -2, -3, -6, -8, -11, -12, -14, -16, -18, -19, -22, -24, -26, -28,
-30, -33, -35, -37, -39, -41, -42, -46, -47, -49, -51, -54, -55, -57, -59, -62,
-64, -65, -68, -69, -72, -74, -75, -78, -81, -82, -84, -86, -88, -90, -92, -94,
-96, -98, -100, -103, -104, -107, -109, -111, -113, -115, -117, -118, -121,
-123, -124, -127, -128, -127, -127, -126, -126, -126, -125, -124, -124, -122,
-123, -122, -121, -121, -121, -120, -119, -120, -118, -118, -117, -117, -117,
-116, -115, -115, -114, -114, -113, -113, -112, -112, -112, -111, -110, -110,
-110, -109, -108, -108, -107, -107, -106, -107, -105, -105, -104, -104, -101,
-99, -98, -95, -93, -91, -89, -87, -84, -83, -80, -78, -76, -74, -72, -69, -67,
-65, -63, -61, -58, -57, -54, -52, -51, -48, -46, -44, -43, -40, -37, -35, -33,
-31, -30, -27, -25, -23, -21, -18, -17, -15, -13, -10, -8, -6, -3, -1, 0, 0, 0,
0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, -1, 1, 0, 0, 0, -1, 0,
0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0,
-1, 0, 0, 1, 0, 0, -1, -1, 0, 0, 0, -1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1,
1, 1, 1, };

#endif /* AKWF_0629_512_H_ */
