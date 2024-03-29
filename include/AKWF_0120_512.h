#ifndef AKWF_0120_512_H_
#define AKWF_0120_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0120_512_NUM_CELLS 512
#define AKWF_0120_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0120_512_DATA [] = {2,
5, 10, 13, 16, 21, 25, 29, 32, 35, 39, 42, 46, 49, 52, 55, 59, 62, 65, 68, 72,
74, 77, 80, 83, 85, 88, 90, 92, 94, 95, 98, 100, 101, 103, 104, 105, 105, 107,
108, 109, 110, 111, 111, 111, 112, 112, 112, 113, 113, 113, 114, 112, 112, 113,
112, 112, 112, 111, 110, 110, 110, 109, 107, 106, 107, 105, 104, 103, 103, 102,
101, 100, 99, 98, 97, 96, 94, 93, 91, 91, 90, 88, 87, 84, 84, 82, 81, 80, 78,
76, 75, 74, 72, 70, 69, 66, 65, 63, 62, 59, 57, 56, 53, 51, 49, 46, 45, 42, 40,
38, 36, 33, 30, 29, 26, 24, 20, 18, 15, 13, 10, 8, 5, 2, 0, -3, -6, -8, -12,
-14, -18, -21, -24, -27, -30, -33, -36, -38, -41, -44, -47, -50, -53, -56, -58,
-60, -62, -65, -67, -70, -73, -75, -77, -79, -82, -83, -85, -87, -89, -91, -93,
-95, -96, -97, -98, -100, -101, -103, -104, -105, -106, -107, -108, -109, -109,
-110, -111, -112, -112, -112, -112, -113, -112, -112, -112, -111, -111, -111,
-111, -110, -110, -110, -109, -108, -107, -107, -106, -105, -104, -103, -102,
-102, -100, -99, -97, -96, -95, -94, -93, -92, -90, -89, -88, -87, -85, -84,
-82, -81, -79, -78, -77, -76, -73, -72, -71, -69, -68, -66, -65, -61, -60, -59,
-57, -55, -53, -51, -48, -46, -44, -41, -39, -37, -34, -32, -30, -27, -24, -21,
-19, -16, -14, -10, -8, -5, -1, 3, 5, 8, 12, 15, 18, 23, 26, 29, 32, 36, 39, 42,
46, 49, 53, 56, 59, 63, 65, 68, 71, 73, 77, 79, 82, 84, 86, 89, 91, 94, 97, 98,
99, 102, 104, 105, 106, 108, 109, 111, 112, 113, 114, 115, 116, 117, 116, 118,
118, 118, 119, 119, 119, 120, 119, 118, 118, 118, 118, 118, 117, 116, 116, 116,
114, 114, 113, 112, 112, 111, 109, 109, 107, 106, 105, 104, 102, 103, 100, 99,
98, 97, 95, 94, 93, 91, 89, 88, 87, 84, 83, 80, 79, 77, 76, 74, 72, 70, 68, 66,
63, 62, 59, 58, 54, 52, 50, 47, 45, 44, 41, 38, 36, 34, 31, 29, 26, 23, 21, 18,
16, 14, 12, 8, 6, 3, 0, -3, -5, -8, -10, -13, -16, -19, -22, -25, -28, -31, -34,
-37, -39, -42, -45, -49, -51, -54, -57, -60, -62, -66, -68, -70, -73, -76, -78,
-81, -83, -86, -87, -90, -92, -94, -96, -98, -99, -102, -103, -104, -106, -107,
-108, -110, -110, -112, -112, -113, -113, -114, -115, -115, -116, -116, -116,
-116, -116, -115, -115, -115, -115, -114, -114, -113, -113, -113, -112, -110,
-110, -110, -108, -108, -107, -106, -105, -104, -102, -102, -101, -100, -98,
-97, -95, -95, -93, -92, -91, -89, -88, -86, -85, -84, -82, -81, -79, -78, -76,
-74, -72, -70, -69, -67, -65, -64, -61, -59, -56, -54, -52, -50, -47, -45, -42,
-40, -38, -34, -32, -29, -27, -23, -21, -17, -14, -10, -7, -3, 0, };

#endif /* AKWF_0120_512_H_ */
