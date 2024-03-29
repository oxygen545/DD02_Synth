#ifndef AKWF_1156_512_H_
#define AKWF_1156_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1156_512_NUM_CELLS 512
#define AKWF_1156_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1156_512_DATA [] = {1,
4, 8, 12, 15, 19, 23, 27, 32, 37, 41, 45, 50, 53, 58, 63, 67, 71, 74, 78, 82,
86, 89, 93, 97, 99, 103, 106, 108, 111, 113, 115, 117, 120, 121, 122, 124, 125,
126, 126, 127, 127, 127, 127, 127, 127, 127, 126, 125, 125, 125, 123, 122, 120,
119, 118, 115, 113, 111, 108, 106, 104, 103, 99, 96, 94, 91, 88, 87, 83, 80, 77,
74, 70, 68, 64, 61, 57, 54, 50, 48, 44, 41, 37, 34, 30, 28, 24, 20, 17, 13, 10,
6, 4, 1, -3, -6, -9, -12, -15, -17, -19, -22, -24, -27, -28, -31, -33, -34, -35,
-36, -38, -40, -40, -40, -41, -42, -41, -41, -41, -40, -39, -39, -38, -36, -35,
-34, -32, -29, -28, -26, -23, -20, -18, -15, -13, -10, -6, -2, 1, 4, 8, 12, 15,
19, 22, 26, 31, 34, 38, 42, 45, 50, 54, 57, 62, 65, 68, 72, 75, 78, 82, 86, 89,
91, 94, 97, 100, 102, 105, 106, 109, 112, 113, 115, 117, 119, 120, 122, 122,
123, 123, 124, 124, 125, 125, 125, 124, 124, 124, 123, 122, 121, 120, 119, 118,
115, 114, 111, 110, 108, 105, 103, 100, 97, 95, 91, 88, 84, 82, 78, 74, 70, 67,
63, 58, 53, 50, 46, 42, 37, 31, 28, 22, 18, 13, 9, 4, -1, -5, -10, -15, -20,
-25, -29, -34, -38, -42, -48, -51, -56, -60, -64, -67, -72, -76, -79, -82, -85,
-90, -92, -95, -98, -100, -103, -105, -107, -109, -111, -112, -114, -116, -116,
-118, -117, -118, -119, -119, -118, -119, -119, -119, -118, -117, -117, -115,
-115, -114, -112, -110, -108, -107, -105, -103, -101, -98, -96, -94, -91, -89,
-86, -84, -81, -78, -75, -72, -69, -65, -63, -60, -57, -54, -52, -49, -45, -42,
-39, -36, -33, -29, -27, -24, -21, -19, -16, -13, -11, -8, -5, -2, -1, 2, 3, 6,
8, 9, 11, 13, 13, 15, 16, 18, 19, 21, 20, 21, 22, 23, 23, 24, 23, 24, 24, 23,
23, 22, 21, 21, 19, 19, 18, 17, 16, 14, 12, 11, 9, 7, 5, 3, 1, -1, -3, -6, -8,
-10, -13, -15, -17, -20, -22, -25, -28, -30, -34, -36, -39, -41, -44, -45, -49,
-50, -54, -56, -59, -61, -62, -65, -67, -69, -71, -73, -75, -77, -79, -80, -81,
-83, -84, -86, -86, -87, -88, -90, -90, -90, -91, -91, -91, -91, -92, -92, -91,
-92, -91, -91, -91, -90, -90, -89, -89, -88, -86, -86, -84, -83, -81, -80, -78,
-77, -75, -74, -72, -71, -70, -67, -65, -64, -61, -60, -59, -57, -55, -53, -50,
-49, -48, -46, -44, -42, -40, -38, -36, -35, -33, -31, -30, -28, -27, -26, -24,
-23, -22, -21, -20, -19, -18, -18, -17, -16, -16, -16, -16, -16, -16, -15, -16,
-16, -16, -16, -17, -18, -19, -20, -20, -23, -23, -25, -26, -28, -29, -30, -31,
-32, -32, -32, -32, -30, -30, -30, -29, -26, -26, -24, -22, -20, -16, -15, -12,
-8, -4, -2, };

#endif /* AKWF_1156_512_H_ */
