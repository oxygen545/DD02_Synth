#ifndef AKWF_0220_512_H_
#define AKWF_0220_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0220_512_NUM_CELLS 512
#define AKWF_0220_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0220_512_DATA [] = {1,
5, 8, 12, 15, 18, 22, 24, 27, 30, 33, 35, 39, 41, 44, 47, 50, 53, 55, 57, 60,
62, 64, 66, 69, 71, 73, 74, 75, 78, 80, 81, 83, 85, 85, 88, 88, 90, 91, 93, 93,
95, 96, 97, 98, 99, 99, 100, 101, 103, 102, 103, 104, 104, 106, 105, 105, 107,
106, 107, 107, 108, 108, 109, 109, 108, 109, 108, 109, 109, 109, 108, 108, 108,
108, 107, 107, 108, 107, 107, 107, 107, 107, 106, 106, 105, 105, 104, 105, 104,
104, 102, 102, 101, 102, 101, 100, 100, 99, 98, 98, 97, 96, 95, 95, 95, 93, 94,
92, 91, 91, 90, 89, 89, 88, 88, 85, 86, 85, 83, 83, 81, 80, 80, 78, 77, 76, 75,
73, 73, 71, 70, 69, 67, 66, 65, 63, 62, 59, 59, 58, 56, 55, 54, 52, 51, 49, 48,
46, 46, 45, 44, 43, 41, 40, 39, 39, 37, 36, 36, 35, 34, 33, 32, 32, 31, 32, 32,
31, 31, 30, 31, 30, 30, 30, 30, 31, 31, 31, 31, 31, 32, 33, 33, 34, 33, 34, 34,
35, 35, 36, 36, 38, 38, 38, 40, 40, 41, 41, 41, 43, 43, 43, 43, 44, 45, 46, 47,
46, 48, 49, 49, 50, 50, 50, 50, 52, 51, 52, 52, 51, 52, 52, 53, 53, 53, 53, 54,
54, 53, 53, 53, 52, 51, 51, 51, 50, 50, 49, 49, 49, 48, 48, 46, 47, 46, 45, 45,
44, 43, 42, 42, 41, 40, 39, 39, 38, 37, 37, 37, 36, 35, 35, 34, 34, 32, 32, 32,
31, 30, 29, 29, 27, 28, 27, 25, 24, 24, 24, 22, 22, 21, 20, 19, 18, 16, 15, 14,
13, 11, 10, 9, 9, 7, 5, 3, 2, 1, -1, -2, -4, -5, -6, -7, -10, -11, -13, -15,
-15, -18, -18, -20, -22, -24, -25, -27, -29, -30, -31, -32, -35, -36, -37, -38,
-40, -42, -43, -45, -45, -47, -48, -50, -51, -52, -53, -54, -55, -57, -59, -59,
-60, -60, -63, -64, -64, -66, -67, -67, -68, -69, -70, -71, -71, -73, -73, -73,
-75, -75, -77, -77, -78, -79, -79, -81, -81, -82, -83, -84, -84, -85, -85, -86,
-86, -88, -89, -89, -90, -90, -91, -92, -93, -94, -94, -95, -95, -96, -97, -97,
-98, -100, -100, -100, -101, -103, -104, -104, -106, -106, -108, -108, -108,
-109, -109, -111, -111, -113, -114, -114, -115, -115, -116, -117, -118, -119,
-120, -120, -121, -121, -122, -122, -123, -124, -124, -125, -125, -125, -125,
-126, -126, -127, -127, -128, -127, -128, -128, -128, -127, -128, -127, -127,
-128, -127, -127, -128, -128, -127, -127, -126, -127, -127, -126, -125, -125,
-125, -125, -125, -124, -123, -123, -122, -122, -120, -121, -119, -117, -117,
-115, -116, -113, -112, -112, -110, -109, -108, -106, -105, -102, -102, -99,
-97, -96, -93, -91, -89, -86, -83, -81, -78, -75, -73, -70, -68, -64, -61, -58,
-55, -52, -48, -44, -41, -38, -35, -31, -28, -24, -21, -18, -14, -11, -8, -4,
-1, };

#endif /* AKWF_0220_512_H_ */
