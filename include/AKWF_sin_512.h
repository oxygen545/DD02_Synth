#ifndef AKWF_sin_512_H_
#define AKWF_sin_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_sin_512_NUM_CELLS 512
#define AKWF_sin_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_sin_512_DATA [] = {0,
2, 4, 5, 6, 8, 9, 11, 13, 15, 15, 17, 19, 20, 21, 23, 25, 27, 28, 30, 31, 33,
34, 36, 37, 39, 41, 41, 43, 44, 46, 48, 50, 51, 51, 53, 55, 57, 58, 58, 60, 62,
63, 65, 66, 67, 69, 70, 72, 72, 73, 74, 76, 77, 78, 80, 81, 83, 84, 85, 86, 87,
89, 90, 90, 92, 93, 94, 95, 96, 97, 99, 99, 100, 100, 102, 103, 104, 104, 106,
106, 107, 108, 108, 109, 111, 111, 112, 113, 114, 115, 115, 115, 117, 117, 118,
118, 119, 120, 121, 121, 121, 122, 122, 122, 124, 123, 124, 123, 124, 125, 125,
125, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126, 127, 126, 127, 126,
125, 125, 125, 124, 124, 124, 123, 123, 123, 122, 121, 120, 120, 119, 120, 119,
119, 117, 116, 116, 116, 115, 115, 113, 113, 113, 111, 111, 110, 109, 109, 107,
106, 105, 105, 104, 103, 101, 102, 100, 99, 98, 97, 95, 95, 94, 92, 92, 90, 89,
88, 88, 86, 84, 83, 83, 81, 80, 78, 77, 75, 74, 74, 73, 71, 69, 68, 66, 65, 65,
63, 61, 60, 59, 58, 55, 55, 54, 51, 50, 49, 47, 45, 44, 43, 42, 40, 38, 37, 34,
34, 32, 31, 29, 28, 27, 24, 23, 21, 20, 19, 17, 15, 14, 11, 11, 9, 8, 6, 4, 3,
1, 0, -2, -3, -5, -6, -8, -9, -11, -13, -14, -17, -18, -20, -20, -23, -24, -25,
-27, -28, -30, -31, -33, -34, -36, -37, -40, -41, -42, -43, -45, -47, -48, -50,
-51, -53, -54, -56, -56, -58, -60, -61, -62, -64, -65, -66, -67, -69, -71, -72,
-73, -74, -75, -77, -78, -79, -81, -82, -83, -84, -85, -86, -88, -88, -91, -91,
-92, -94, -94, -95, -96, -97, -99, -100, -101, -101, -101, -104, -104, -105,
-106, -106, -107, -109, -109, -110, -110, -111, -113, -113, -114, -115, -115,
-116, -117, -117, -118, -118, -119, -120, -120, -120, -121, -122, -123, -122,
-123, -124, -124, -124, -125, -125, -125, -126, -127, -126, -126, -126, -128,
-127, -126, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128,
-128, -127, -127, -128, -127, -127, -127, -127, -126, -127, -127, -126, -127,
-126, -126, -125, -124, -124, -123, -123, -122, -123, -122, -122, -121, -120,
-120, -120, -118, -118, -118, -117, -117, -115, -114, -115, -114, -113, -112,
-111, -110, -109, -108, -107, -107, -106, -105, -104, -104, -103, -102, -101,
-99, -99, -98, -96, -96, -94, -93, -93, -92, -90, -89, -88, -86, -85, -84, -83,
-81, -81, -79, -78, -77, -75, -75, -73, -72, -70, -69, -68, -67, -65, -63, -63,
-61, -60, -58, -56, -55, -54, -52, -52, -49, -48, -47, -45, -44, -42, -41, -39,
-38, -36, -35, -34, -33, -31, -29, -28, -26, -25, -23, -21, -20, -18, -16, -15,
-14, -12, -11, -8, -7, -6, -3, -3, -1, };

#endif /* AKWF_sin_512_H_ */
