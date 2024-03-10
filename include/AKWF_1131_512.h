#ifndef AKWF_1131_512_H_
#define AKWF_1131_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1131_512_NUM_CELLS 512
#define AKWF_1131_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1131_512_DATA [] = {1,
0, 5, -2, 35, 53, 47, 51, 47, 50, 49, 51, 49, 51, 50, 51, 51, 51, 51, 51, 51,
52, 52, 53, 53, 53, 53, 53, 53, 53, 54, 54, 54, 54, 55, 54, 55, 55, 55, 56, 55,
56, 56, 56, 57, 57, 56, 56, 57, 57, 57, 58, 57, 58, 59, 58, 59, 59, 59, 60, 60,
59, 61, 61, 61, 60, 60, 61, 61, 61, 61, 62, 63, 63, 62, 62, 62, 63, 64, 64, 63,
64, 64, 64, 65, 65, 65, 64, 65, 65, 66, 67, 66, 67, 67, 67, 67, 67, 67, 68, 68,
67, 68, 68, 69, 69, 69, 70, 70, 70, 69, 70, 70, 70, 70, 71, 71, 71, 71, 72, 72,
72, 72, 73, 73, 72, 72, 73, 74, 74, 73, 74, 75, 74, 74, 73, 73, 73, 73, 73, 73,
72, 73, 72, 72, 72, 72, 71, 71, 70, 70, 70, 71, 70, 70, 70, 69, 70, 69, 68, 68,
68, 68, 68, 68, 67, 67, 67, 67, 67, 66, 66, 66, 66, 65, 66, 65, 65, 65, 64, 64,
64, 64, 63, 63, 62, 63, 62, 63, 62, 62, 62, 62, 61, 61, 61, 60, 61, 59, 60, 60,
59, 59, 60, 59, 59, 59, 59, 58, 59, 58, 58, 57, 57, 57, 57, 56, 55, 56, 56, 55,
55, 55, 55, 55, 54, 54, 54, 53, 54, 54, 52, 52, 52, 52, 53, 52, 52, 52, 52, 51,
51, 50, 50, 49, 50, 50, 49, 50, 49, 48, 48, 49, 47, 48, 47, 47, 47, 47, 47, 47,
45, 47, 45, 47, 45, 48, 41, 51, 19, -16, -7, -14, -11, -14, -14, -17, -16, -18,
-18, -20, -21, -22, -22, -24, -25, -25, -26, -27, -29, -30, -31, -32, -33, -33,
-35, -36, -38, -37, -40, -41, -40, -43, -44, -44, -45, -46, -47, -49, -49, -50,
-51, -52, -54, -54, -56, -56, -58, -59, -60, -60, -61, -62, -63, -64, -65, -66,
-67, -69, -69, -71, -71, -72, -73, -74, -75, -76, -77, -78, -80, -80, -81, -82,
-83, -84, -85, -86, -87, -88, -90, -90, -91, -93, -93, -94, -95, -97, -97, -98,
-100, -101, -102, -102, -103, -104, -105, -106, -107, -109, -109, -110, -111,
-112, -113, -114, -115, -116, -116, -119, -119, -121, -121, -122, -123, -124,
-125, -126, -126, -128, -127, -126, -126, -125, -123, -121, -121, -119, -118,
-118, -116, -115, -114, -113, -112, -112, -111, -109, -109, -107, -106, -105,
-104, -103, -102, -101, -100, -99, -98, -96, -95, -94, -93, -92, -91, -90, -89,
-88, -87, -86, -85, -84, -83, -82, -81, -80, -79, -78, -77, -76, -74, -74, -72,
-72, -70, -70, -69, -67, -66, -65, -64, -63, -62, -62, -60, -60, -58, -57, -56,
-55, -54, -53, -52, -50, -50, -48, -48, -47, -46, -44, -44, -43, -41, -40, -39,
-38, -38, -36, -35, -35, -33, -33, -32, -30, -29, -29, -27, -26, -25, -24, -23,
-22, -21, -20, -19, -18, -18, -16, -14, -14, -13, -11, -11, -10, -9, -8, -6, -5,
-5, -4, -2, -2, -1, };

#endif /* AKWF_1131_512_H_ */