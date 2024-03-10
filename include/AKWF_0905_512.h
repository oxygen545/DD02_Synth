#ifndef AKWF_0905_512_H_
#define AKWF_0905_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0905_512_NUM_CELLS 512
#define AKWF_0905_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0905_512_DATA [] = {5,
66, 108, 124, 127, 126, 120, 114, 108, 101, 97, 92, 91, 88, 86, 84, 81, 78, 75,
70, 65, 60, 53, 47, 40, 33, 26, 18, 11, 3, -4, -11, -18, -25, -29, -34, -37,
-40, -42, -43, -46, -47, -48, -49, -49, -51, -51, -52, -52, -52, -53, -53, -54,
-54, -55, -55, -55, -55, -55, -56, -56, -56, -57, -57, -56, -57, -58, -58, -59,
-59, -59, -60, -60, -60, -60, -60, -61, -62, -62, -61, -61, -62, -62, -62, -63,
-64, -63, -64, -63, -64, -65, -64, -65, -65, -65, -66, -66, -66, -67, -67, -67,
-67, -67, -68, -68, -68, -68, -68, -69, -69, -69, -69, -70, -70, -70, -70, -71,
-70, -71, -70, -71, -71, -71, -71, -71, -71, -72, -72, -72, -72, -72, -73, -73,
-73, -73, -73, -73, -73, -74, -74, -74, -74, -75, -75, -74, -74, -74, -75, -74,
-75, -74, -75, -74, -75, -75, -75, -75, -75, -75, -76, -75, -75, -75, -75, -76,
-75, -76, -75, -75, -75, -75, -75, -75, -74, -75, -76, -75, -74, -74, -75, -74,
-74, -74, -73, -74, -74, -74, -74, -73, -72, -73, -72, -72, -72, -71, -71, -70,
-71, -69, -68, -68, -68, -67, -66, -65, -65, -64, -64, -62, -61, -60, -59, -58,
-56, -55, -53, -50, -50, -48, -45, -43, -41, -38, -35, -31, -27, -23, -19, -14,
-8, -1, 6, 14, 22, 29, 36, 42, 47, 52, 56, 60, 61, 64, 67, 68, 69, 71, 71, 73,
72, 72, 72, 71, 69, 65, 47, -16, -79, -112, -125, -128, -124, -119, -114, -106,
-100, -95, -92, -90, -88, -86, -84, -80, -77, -73, -69, -64, -58, -53, -46, -39,
-31, -24, -17, -9, -2, 5, 14, 20, 26, 30, 34, 38, 40, 43, 45, 46, 47, 49, 49,
51, 52, 51, 51, 52, 53, 52, 53, 54, 54, 55, 55, 55, 55, 56, 57, 56, 57, 57, 57,
57, 57, 58, 58, 58, 59, 59, 60, 60, 59, 60, 61, 61, 61, 61, 61, 62, 63, 62, 62,
63, 64, 63, 63, 64, 64, 65, 65, 66, 66, 66, 66, 66, 66, 66, 67, 67, 67, 67, 67,
68, 68, 68, 69, 68, 68, 69, 70, 70, 70, 70, 70, 71, 70, 71, 71, 71, 71, 72, 72,
72, 72, 72, 72, 72, 73, 73, 72, 73, 73, 73, 73, 73, 73, 73, 74, 73, 75, 74, 74,
74, 74, 74, 74, 74, 75, 75, 74, 75, 75, 76, 75, 75, 75, 75, 76, 76, 75, 76, 76,
76, 75, 75, 75, 76, 75, 75, 75, 75, 76, 75, 75, 75, 74, 75, 74, 75, 75, 74, 73,
74, 74, 73, 74, 73, 73, 73, 72, 71, 71, 72, 70, 70, 70, 69, 68, 68, 68, 67, 67,
65, 64, 63, 63, 63, 61, 60, 59, 57, 56, 55, 52, 51, 49, 47, 44, 43, 39, 37, 34,
30, 27, 22, 17, 13, 6, 0, -8, -16, -24, -30, -38, -43, -48, -53, -58, -59, -63,
-65, -67, -69, -69, -72, -71, -74, -71, -73, -70, -73, -66, -66, -32, };

#endif /* AKWF_0905_512_H_ */