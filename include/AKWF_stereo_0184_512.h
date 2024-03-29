#ifndef AKWF_stereo_0184_512_H_
#define AKWF_stereo_0184_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_stereo_0184_512_NUM_CELLS 1024
#define AKWF_stereo_0184_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_stereo_0184_512_DATA
[] = {-1, -51, 1, -68, 1, -60, 1, -66, 2, -62, 3, -65, 4, -62, 5, -64, 4, -62,
5, -64, 6, -62, 7, -63, 8, -61, 10, -61, 10, -59, 11, -60, 12, -58, 14, -56, 15,
-55, 16, -54, 18, -54, 18, -52, 20, -50, 21, -49, 24, -47, 25, -45, 26, -43, 28,
-42, 30, -40, 31, -38, 33, -35, 35, -33, 36, -31, 38, -29, 39, -27, 41, -24, 43,
-22, 46, -20, 47, -18, 49, -14, 50, -12, 52, -9, 54, -7, 56, -5, 58, -1, 60, 1,
61, 5, 63, 7, 65, 10, 67, 13, 69, 16, 70, 18, 72, 21, 74, 24, 75, 27, 77, 29,
78, 31, 80, 35, 81, 37, 82, 40, 84, 43, 85, 45, 87, 48, 88, 50, 89, 53, 91, 55,
91, 58, 92, 60, 94, 62, 94, 64, 95, 66, 96, 68, 96, 71, 96, 73, 98, 74, 99, 77,
99, 78, 98, 80, 100, 82, 100, 84, 100, 85, 101, 87, 101, 88, 101, 90, 100, 91,
99, 92, 100, 93, 100, 94, 99, 97, 98, 97, 99, 99, 98, 100, 97, 100, 97, 101, 96,
102, 96, 102, 95, 104, 94, 104, 93, 105, 92, 106, 91, 106, 90, 106, 90, 107, 88,
108, 87, 108, 86, 108, 85, 108, 83, 108, 83, 108, 81, 108, 80, 108, 78, 109, 77,
108, 76, 109, 74, 108, 73, 108, 72, 108, 70, 108, 68, 107, 67, 107, 65, 107, 65,
106, 63, 107, 61, 106, 60, 105, 57, 105, 56, 103, 55, 104, 53, 103, 52, 101, 50,
102, 49, 101, 47, 100, 46, 98, 44, 98, 43, 97, 42, 96, 40, 96, 38, 95, 37, 93,
35, 92, 35, 92, 33, 91, 31, 90, 30, 88, 29, 88, 28, 86, 27, 85, 25, 83, 24, 82,
23, 82, 22, 81, 21, 79, 20, 79, 19, 76, 18, 75, 17, 74, 16, 72, 16, 71, 15, 70,
14, 69, 14, 67, 12, 66, 12, 64, 12, 64, 11, 62, 11, 61, 9, 59, 9, 58, 9, 57, 8,
55, 8, 55, 8, 52, 8, 51, 7, 50, 7, 50, 7, 48, 6, 46, 6, 44, 6, 44, 6, 42, 4, 40,
6, 38, 5, 37, 4, 35, 5, 36, 5, 33, 4, 32, 5, 31, 5, 29, 3, 28, 4, 26, 4, 25, 5,
25, 5, 23, 5, 21, 5, 21, 5, 19, 5, 17, 5, 16, 4, 15, 5, 14, 4, 13, 5, 12, 4, 10,
5, 10, 5, 9, 5, 8, 5, 6, 5, 6, 6, 4, 4, 3, 5, 1, 5, 1, 5, -1, 5, -2, 5, -2, 6,
-3, 5, -4, 6, -6, 6, -6, 6, -7, 6, -10, 5, -10, 5, -12, 5, -12, 4, -13, 5, -14,
5, -16, 5, -17, 4, -17, 3, -19, 3, -20, 2, -21, 3, -23, 2, -25, 2, -25, 2, -27,
1, -29, 1, -29, 0, -30, 0, -31, -1, -34, -2, -35, -3, -37, -4, -38, -5, -40, -5,
-41, -6, -42, -7, -45, -7, -45, -8, -46, -9, -48, -10, -49, -12, -51, -13, -53,
-13, -55, -15, -56, -15, -58, -16, -60, -18, -61, -19, -63, -20, -65, -21, -66,
-23, -67, -24, -69, -25, -71, -27, -73, -28, -75, -30, -76, -32, -78, -33, -80,
-34, -80, -36, -83, -37, -84, -39, -86, -40, -88, -42, -89, -44, -91, -45, -92,
-47, -93, -49, -95, -50, -97, -52, -99, -54, -100, -56, -102, -58, -103, -58,
-104, -60, -104, -63, -107, -64, -108, -66, -109, -68, -110, -69, -112, -71,
-113, -73, -113, -74, -116, -76, -116, -78, -118, -80, -119, -82, -119, -84,
-121, -86, -121, -87, -122, -89, -123, -90, -124, -92, -124, -92, -125, -95,
-125, -96, -125, -98, -126, -98, -127, -100, -128, -102, -127, -103, -127, -104,
-128, -105, -128, -107, -128, -108, -128, -108, -128, -110, -127, -111, -128,
-112, -127, -112, -127, -113, -127, -114, -126, -115, -125, -116, -125, -117,
-125, -116, -124, -116, -122, -117, -122, -118, -121, -117, -120, -118, -118,
-118, -118, -118, -116, -118, -116, -118, -114, -118, -113, -118, -110, -117,
-110, -118, -107, -117, -106, -116, -104, -115, -102, -115, -100, -113, -98,
-113, -96, -112, -94, -111, -91, -110, -89, -109, -87, -108, -84, -106, -81,
-105, -79, -104, -77, -102, -73, -101, -71, -99, -68, -97, -66, -95, -62, -94,
-60, -92, -57, -89, -53, -87, -50, -85, -47, -83, -44, -80, -41, -79, -38, -76,
-35, -74, -32, -72, -27, -69, -24, -68, -21, -64, -18, -62, -15, -61, -12, -58,
-9, -55, -6, -53, -3, -49, 1, -47, 4, -46, 6, -45, 8, -43, 9, -42, 11, -41, 13,
-38, 16, -36, 19, -33, 22, -31, 25, -28, 27, -26, 30, -24, 33, -22, 35, -20, 38,
-17, 40, -15, 42, -14, 45, -12, 47, -10, 49, -8, 51, -6, 52, -4, 54, -2, 56, -1,
58, 1, 60, 2, 61, 4, 63, 5, 64, 8, 65, 9, 67, 10, 67, 12, 69, 12, 70, 13, 70,
14, 72, 16, 71, 16, 73, 17, 74, 18, 73, 19, 74, 20, 75, 20, 74, 21, 75, 22, 75,
22, 75, 23, 75, 23, 74, 24, 74, 24, 73, 24, 73, 24, 72, 25, 72, 25, 71, 25, 71,
25, 69, 25, 68, 25, 67, 24, 67, 24, 66, 24, 64, 24, 62, 24, 61, 24, 59, 23, 58,
24, 56, 23, 55, 23, 53, 22, 50, 21, 49, 21, 47, 21, 45, 20, 43, 19, 42, 19, 39,
18, 38, 18, 35, 17, 33, 17, 31, 15, 28, 14, 26, 15, 24, 14, 21, 13, 19, 12, 17,
12, 13, 11, 12, 11, 10, 10, 6, 9, 4, 9, 2, 8, -1, 8, -3, 7, -5, 7, -8, 6, -10,
6, -13, 5, -15, 5, -17, 4, -19, 3, -21, 3, -24, 2, -25, 1, -27, 1, -30, 1, -32,
0, -34, 0, -36, -1, -37, -1, -39, -2, -41, -1, -43, -1, -45, -2, -47, -2, -47,
-2, -49, -3, -51, -3, -52, -3, -54, -3, -54, -2, -57, -3, -56, -2, -59, -3, -57,
-2, -62, -1, -58, -2, -64, -1, -58, 0, -69, 0, -41, };

#endif /* AKWF_stereo_0184_512_H_ */
