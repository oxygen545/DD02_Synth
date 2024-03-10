#ifndef AKWF_dbass_0002_512_H_
#define AKWF_dbass_0002_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_dbass_0002_512_NUM_CELLS 512
#define AKWF_dbass_0002_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_dbass_0002_512_DATA []
= {0, 4, 5, 7, 10, 11, 13, 15, 17, 19, 20, 22, 24, 25, 27, 28, 29, 31, 32, 33,
35, 36, 37, 39, 41, 42, 44, 46, 46, 49, 50, 51, 53, 56, 57, 59, 61, 63, 64, 67,
68, 71, 71, 74, 75, 76, 79, 79, 81, 83, 84, 84, 85, 87, 88, 90, 90, 92, 93, 94,
96, 97, 99, 101, 100, 103, 104, 105, 106, 107, 107, 108, 108, 109, 110, 110,
110, 111, 112, 113, 113, 114, 114, 115, 116, 116, 118, 118, 118, 120, 121, 121,
122, 123, 123, 124, 125, 125, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127,
127, 127, 127, 126, 125, 125, 123, 122, 121, 121, 120, 118, 117, 117, 116, 116,
115, 115, 114, 114, 113, 114, 113, 113, 112, 111, 111, 111, 110, 111, 110, 109,
108, 108, 106, 105, 103, 103, 101, 99, 99, 98, 96, 95, 96, 95, 94, 93, 92, 92,
90, 89, 89, 89, 89, 87, 86, 85, 85, 82, 82, 80, 80, 78, 78, 77, 76, 76, 76, 76,
75, 75, 74, 72, 72, 71, 70, 69, 67, 67, 66, 65, 65, 63, 63, 62, 61, 61, 60, 58,
58, 57, 55, 55, 54, 53, 52, 51, 50, 49, 48, 46, 45, 45, 45, 44, 45, 44, 44, 44,
44, 42, 41, 39, 38, 37, 36, 35, 34, 33, 31, 30, 29, 27, 26, 25, 23, 21, 19, 18,
17, 16, 15, 15, 15, 13, 13, 12, 12, 11, 10, 11, 9, 9, 9, 7, 6, 3, 2, 1, -2, -4,
-6, -7, -9, -10, -11, -12, -12, -13, -12, -13, -14, -14, -13, -13, -13, -12,
-12, -12, -11, -11, -10, -10, -10, -11, -11, -12, -13, -14, -15, -16, -18, -19,
-21, -24, -26, -28, -31, -33, -35, -37, -38, -41, -42, -44, -45, -46, -47, -49,
-49, -50, -52, -51, -52, -53, -54, -55, -54, -55, -56, -57, -58, -59, -60, -61,
-63, -64, -67, -68, -69, -71, -72, -74, -76, -77, -79, -79, -80, -81, -81, -82,
-83, -84, -84, -85, -86, -88, -88, -90, -91, -92, -94, -96, -98, -99, -101,
-103, -105, -106, -106, -108, -108, -108, -109, -109, -109, -109, -109, -109,
-110, -109, -110, -110, -110, -110, -111, -113, -113, -114, -114, -115, -114,
-116, -115, -115, -114, -114, -114, -113, -113, -112, -111, -111, -110, -110,
-109, -108, -109, -107, -108, -108, -107, -108, -108, -108, -109, -109, -110,
-110, -112, -113, -113, -114, -115, -115, -115, -114, -115, -113, -113, -113,
-111, -111, -109, -107, -105, -104, -103, -102, -100, -99, -98, -98, -96, -95,
-94, -93, -92, -91, -91, -91, -89, -90, -88, -88, -87, -87, -87, -85, -85, -84,
-83, -81, -80, -80, -79, -77, -76, -75, -73, -72, -71, -69, -68, -67, -67, -65,
-65, -63, -62, -61, -59, -59, -58, -56, -55, -54, -53, -52, -50, -49, -48, -47,
-46, -45, -43, -43, -40, -39, -38, -38, -36, -35, -34, -32, -32, -30, -29, -27,
-27, -25, -23, -21, -19, -18, -16, -14, -12, -10, -8, -5, -3, -1, };

#endif /* AKWF_dbass_0002_512_H_ */
