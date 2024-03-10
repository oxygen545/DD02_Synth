#ifndef AKWF_0256_512_H_
#define AKWF_0256_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0256_512_NUM_CELLS 512
#define AKWF_0256_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0256_512_DATA [] = {1,
5, 8, 11, 15, 17, 19, 23, 26, 29, 32, 34, 37, 40, 43, 46, 49, 51, 54, 56, 58,
61, 63, 66, 69, 71, 72, 75, 78, 79, 82, 84, 86, 88, 91, 93, 93, 96, 97, 99, 101,
102, 104, 106, 107, 108, 110, 111, 113, 115, 116, 117, 118, 119, 120, 121, 122,
122, 123, 125, 124, 125, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127,
127, 127, 126, 125, 123, 124, 123, 122, 121, 120, 119, 117, 116, 115, 113, 111,
109, 108, 107, 105, 104, 101, 98, 96, 94, 92, 89, 88, 85, 83, 80, 78, 75, 73,
70, 67, 63, 61, 58, 55, 52, 49, 46, 42, 40, 36, 33, 30, 26, 24, 20, 18, 13, 11,
7, 5, 1, -2, -6, -9, -12, -15, -18, -22, -26, -28, -31, -34, -37, -41, -44, -46,
-50, -52, -55, -57, -61, -63, -66, -69, -71, -74, -76, -78, -80, -82, -85, -88,
-89, -91, -94, -94, -96, -98, -99, -101, -103, -103, -105, -106, -108, -108,
-108, -110, -111, -112, -112, -112, -113, -114, -114, -114, -113, -115, -114,
-114, -114, -114, -114, -113, -113, -112, -111, -110, -110, -109, -109, -108,
-107, -106, -105, -105, -104, -101, -101, -100, -98, -96, -95, -94, -93, -92,
-90, -87, -87, -85, -84, -82, -80, -79, -76, -75, -73, -71, -70, -68, -65, -64,
-61, -60, -58, -56, -54, -51, -50, -47, -45, -43, -42, -39, -37, -35, -32, -31,
-27, -26, -23, -22, -19, -17, -15, -13, -11, -8, -6, -4, -2, 1, 3, 5, 8, 9, 12,
14, 15, 18, 20, 22, 25, 27, 29, 31, 32, 35, 37, 39, 41, 42, 45, 47, 48, 51, 53,
54, 56, 57, 60, 62, 64, 65, 67, 69, 70, 72, 74, 75, 77, 78, 80, 81, 82, 84, 86,
87, 88, 89, 91, 92, 94, 95, 96, 97, 98, 99, 100, 100, 102, 102, 104, 105, 105,
105, 106, 106, 106, 106, 107, 107, 107, 107, 107, 107, 106, 106, 105, 105, 105,
104, 103, 102, 102, 100, 100, 98, 98, 97, 95, 94, 93, 92, 90, 88, 86, 84, 83,
81, 79, 77, 74, 73, 71, 69, 66, 63, 61, 59, 56, 54, 51, 49, 47, 44, 41, 38, 35,
32, 30, 27, 23, 21, 17, 14, 11, 8, 5, 3, -1, -4, -7, -10, -14, -17, -21, -23,
-27, -30, -33, -37, -40, -43, -47, -49, -52, -56, -58, -62, -65, -68, -70, -73,
-76, -79, -82, -84, -87, -90, -92, -94, -96, -99, -101, -103, -106, -107, -109,
-110, -113, -114, -116, -117, -118, -120, -120, -122, -123, -123, -125, -125,
-126, -126, -127, -127, -128, -128, -128, -128, -128, -128, -127, -128, -126,
-126, -126, -126, -123, -123, -123, -122, -121, -120, -118, -117, -115, -114,
-112, -111, -109, -107, -105, -104, -103, -100, -98, -96, -93, -92, -90, -88,
-84, -82, -80, -77, -74, -71, -70, -67, -65, -61, -59, -56, -54, -50, -46, -45,
-41, -38, -36, -33, -30, -27, -23, -20, -17, -14, -11, -8, -5, -3, 0, };

#endif /* AKWF_0256_512_H_ */
