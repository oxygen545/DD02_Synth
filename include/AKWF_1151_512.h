#ifndef AKWF_1151_512_H_
#define AKWF_1151_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1151_512_NUM_CELLS 512
#define AKWF_1151_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1151_512_DATA [] = {2,
8, 14, 18, 22, 26, 29, 30, 32, 37, 44, 51, 51, 51, 52, 51, 51, 50, 50, 50, 50,
51, 51, 51, 53, 53, 55, 56, 58, 59, 61, 62, 65, 67, 69, 71, 73, 76, 77, 80, 81,
83, 84, 87, 88, 88, 90, 91, 92, 92, 93, 94, 95, 94, 95, 95, 96, 96, 97, 96, 96,
96, 98, 98, 98, 99, 97, 98, 97, 98, 96, 97, 96, 96, 95, 95, 94, 94, 93, 92, 92,
91, 90, 90, 90, 88, 87, 88, 87, 86, 86, 85, 84, 84, 83, 82, 80, 80, 79, 77, 77,
76, 76, 75, 75, 76, 77, 78, 80, 83, 84, 84, 86, 86, 87, 87, 86, 87, 86, 86, 86,
85, 85, 85, 84, 84, 83, 83, 81, 83, 89, 95, 96, 94, 93, 93, 91, 91, 89, 88, 87,
86, 84, 83, 83, 82, 81, 81, 80, 80, 80, 79, 80, 79, 78, 79, 79, 79, 78, 79, 78,
79, 80, 79, 80, 81, 81, 83, 82, 83, 83, 83, 84, 83, 83, 83, 83, 83, 82, 82, 82,
81, 80, 80, 80, 79, 78, 77, 77, 76, 75, 73, 72, 71, 70, 69, 68, 66, 65, 64, 62,
60, 59, 59, 57, 55, 53, 52, 51, 50, 48, 46, 45, 44, 42, 41, 40, 39, 39, 36, 35,
34, 33, 32, 30, 29, 28, 27, 25, 22, 21, 18, 15, 13, 10, 8, 7, 6, 5, 4, 4, 6, 6,
7, 9, 9, 9, 6, 8, 15, 20, 21, 22, 24, 26, 27, 28, 28, 29, 29, 29, 27, 24, 23,
19, 16, 12, 8, 3, -1, -5, -9, -14, -19, -23, -28, -32, -37, -39, -42, -46, -49,
-52, -53, -57, -58, -59, -62, -63, -64, -65, -66, -65, -65, -66, -67, -66, -67,
-67, -66, -66, -66, -67, -67, -66, -67, -66, -66, -66, -66, -66, -66, -65, -65,
-65, -64, -64, -64, -63, -63, -63, -62, -62, -61, -61, -61, -61, -62, -62, -62,
-63, -65, -65, -66, -67, -69, -71, -72, -74, -76, -77, -79, -81, -84, -85, -89,
-90, -93, -97, -99, -101, -104, -108, -111, -114, -117, -120, -122, -125, -126,
-127, -128, -128, -127, -126, -127, -126, -124, -125, -125, -124, -119, -111,
-108, -108, -108, -109, -108, -108, -108, -107, -107, -105, -103, -103, -102,
-101, -99, -98, -97, -95, -94, -93, -92, -92, -90, -89, -88, -87, -86, -85, -83,
-82, -82, -80, -78, -78, -77, -76, -74, -73, -72, -72, -71, -71, -69, -69, -68,
-66, -66, -64, -63, -62, -62, -61, -60, -59, -58, -57, -56, -55, -55, -55, -55,
-53, -53, -53, -53, -52, -53, -52, -52, -52, -51, -52, -51, -52, -51, -52, -51,
-51, -51, -50, -51, -50, -49, -50, -49, -48, -49, -49, -48, -48, -47, -46, -46,
-46, -45, -44, -43, -43, -42, -41, -41, -40, -39, -40, -39, -38, -37, -36, -36,
-35, -34, -35, -34, -34, -34, -36, -33, -27, -21, -21, -20, -20, -20, -19, -18,
-17, -15, -12, -7, 2, 10, 20, -8, -14, -22, -30, -15, -11, -1, };

#endif /* AKWF_1151_512_H_ */
