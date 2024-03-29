#ifndef AKWF_1964_512_H_
#define AKWF_1964_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1964_512_NUM_CELLS 512
#define AKWF_1964_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1964_512_DATA [] = {4,
11, 16, 21, 24, 29, 32, 37, 41, 45, 49, 53, 57, 63, 66, 70, 75, 78, 83, 88, 91,
94, 96, 98, 99, 102, 103, 105, 107, 109, 111, 113, 115, 116, 118, 121, 122, 124,
126, 127, 125, 122, 119, 116, 112, 109, 106, 102, 99, 96, 93, 90, 86, 82, 80,
77, 73, 70, 67, 61, 55, 50, 44, 39, 34, 27, 21, 15, 10, 5, -1, -7, -13, -18,
-24, -30, -35, -41, -46, -49, -53, -58, -62, -68, -72, -75, -80, -84, -88, -93,
-97, -101, -106, -110, -114, -118, -122, -123, -122, -122, -121, -121, -120,
-121, -120, -119, -120, -119, -118, -118, -117, -116, -117, -117, -116, -115,
-111, -106, -102, -98, -94, -89, -86, -82, -77, -73, -68, -64, -61, -55, -52,
-47, -43, -40, -36, -30, -25, -21, -16, -11, -6, -1, 4, 9, 14, 18, 24, 28, 32,
38, 42, 48, 52, 56, 58, 60, 62, 65, 67, 70, 71, 74, 76, 77, 80, 82, 84, 86, 88,
90, 93, 95, 97, 96, 94, 93, 91, 90, 90, 89, 87, 86, 84, 83, 82, 81, 79, 78, 77,
75, 74, 73, 70, 67, 63, 61, 59, 55, 52, 49, 46, 44, 41, 37, 34, 31, 28, 26, 24,
20, 17, 14, 12, 9, 6, 4, 1, -1, -4, -6, -9, -12, -13, -17, -18, -21, -24, -27,
-29, -31, -31, -33, -35, -35, -37, -38, -39, -40, -41, -42, -43, -44, -45, -46,
-48, -49, -50, -50, -51, -52, -51, -51, -51, -52, -51, -51, -52, -52, -51, -51,
-50, -51, -51, -50, -51, -51, -51, -51, -50, -48, -48, -47, -46, -45, -44, -43,
-43, -42, -41, -41, -40, -38, -37, -36, -36, -36, -34, -33, -31, -29, -28, -26,
-25, -23, -22, -21, -18, -17, -15, -14, -12, -11, -9, -8, -6, -5, -2, 0, 2, 4,
7, 9, 12, 14, 17, 18, 21, 22, 25, 27, 30, 32, 34, 36, 39, 40, 42, 44, 46, 47,
49, 51, 53, 55, 57, 59, 62, 62, 64, 67, 69, 70, 72, 72, 73, 72, 72, 73, 73, 72,
73, 72, 72, 72, 71, 71, 71, 72, 71, 71, 71, 71, 69, 67, 64, 62, 59, 56, 53, 51,
49, 46, 44, 41, 38, 36, 34, 31, 28, 25, 22, 20, 14, 11, 6, 2, -2, -7, -12, -15,
-19, -24, -28, -33, -37, -41, -46, -51, -55, -59, -62, -65, -68, -71, -73, -76,
-79, -81, -84, -87, -89, -93, -95, -98, -101, -103, -107, -109, -112, -113,
-113, -115, -116, -117, -117, -118, -118, -120, -121, -121, -122, -123, -124,
-126, -126, -127, -127, -128, -125, -123, -120, -117, -113, -111, -108, -105,
-101, -98, -96, -94, -90, -87, -84, -80, -78, -75, -73, -71, -70, -69, -68, -68,
-66, -65, -64, -63, -63, -62, -60, -60, -59, -58, -56, -56, -55, -53, -56, -59,
-61, -64, -66, -69, -71, -73, -77, -78, -81, -84, -85, -88, -90, -93, -95, -98,
-99, -93, -88, -82, -76, -70, -64, -58, -53, -46, -41, -35, -28, -22, -16, -11,
-5, 0, };

#endif /* AKWF_1964_512_H_ */
