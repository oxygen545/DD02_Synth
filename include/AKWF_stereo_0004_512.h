#ifndef AKWF_stereo_0004_512_H_
#define AKWF_stereo_0004_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_stereo_0004_512_NUM_CELLS 1024
#define AKWF_stereo_0004_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_stereo_0004_512_DATA
[] = {1, 41, 2, 52, 4, 44, 5, 45, 8, 39, 12, 40, 13, 35, 15, 36, 19, 33, 21, 32,
24, 29, 26, 28, 28, 26, 32, 26, 38, 27, 43, 30, 46, 30, 51, 32, 55, 35, 59, 38,
64, 39, 66, 41, 70, 44, 73, 45, 77, 48, 79, 49, 83, 52, 85, 53, 88, 57, 90, 58,
94, 61, 96, 63, 97, 65, 100, 67, 102, 69, 103, 72, 106, 73, 107, 75, 108, 77,
110, 79, 111, 80, 113, 83, 114, 86, 116, 87, 117, 88, 117, 90, 117, 91, 118, 93,
120, 94, 120, 96, 121, 97, 122, 99, 122, 99, 124, 101, 124, 103, 124, 104, 125,
105, 126, 105, 125, 107, 126, 108, 126, 109, 127, 109, 127, 110, 127, 110, 127,
110, 127, 111, 127, 111, 127, 112, 127, 112, 127, 112, 127, 113, 127, 112, 127,
112, 127, 113, 127, 112, 127, 111, 127, 111, 127, 111, 127, 110, 127, 111, 127,
110, 126, 108, 125, 107, 124, 106, 124, 105, 124, 104, 123, 103, 122, 101, 123,
100, 121, 98, 120, 97, 120, 95, 119, 93, 118, 91, 118, 90, 116, 86, 116, 84,
115, 83, 115, 81, 113, 78, 112, 75, 111, 73, 110, 69, 108, 67, 108, 65, 106, 61,
105, 58, 104, 56, 103, 52, 102, 50, 100, 47, 100, 43, 97, 41, 97, 40, 96, 37,
96, 34, 94, 31, 93, 29, 93, 27, 92, 25, 91, 23, 90, 21, 89, 18, 89, 17, 89, 15,
87, 13, 86, 11, 86, 10, 85, 8, 86, 6, 84, 5, 84, 3, 83, 3, 83, 2, 83, 2, 83, 1,
82, 1, 82, 0, 83, 0, 83, 0, 83, 1, 83, 1, 83, 2, 83, 2, 84, 4, 84, 4, 85, 6, 85,
7, 87, 9, 87, 11, 88, 12, 89, 14, 89, 16, 91, 18, 92, 21, 92, 22, 92, 24, 93,
26, 95, 28, 95, 31, 96, 32, 97, 34, 96, 33, 95, 28, 94, 28, 94, 26, 93, 23, 92,
20, 91, 20, 93, 21, 93, 22, 93, 23, 94, 25, 95, 26, 95, 28, 95, 29, 95, 29, 96,
29, 96, 30, 96, 31, 95, 31, 96, 31, 96, 32, 96, 32, 96, 33, 96, 33, 96, 33, 95,
34, 96, 33, 96, 33, 95, 34, 94, 32, 94, 32, 93, 30, 92, 29, 91, 28, 90, 27, 89,
24, 88, 22, 86, 20, 84, 18, 82, 14, 81, 11, 78, 8, 77, 5, 73, 0, 71, -3, 67, -9,
64, -13, 60, -17, 58, -20, 54, -26, 50, -30, 46, -35, 41, -38, 36, -42, 31, -46,
27, -50, 21, -54, 15, -58, 10, -60, 4, -64, -2, -67, -7, -69, -13, -73, -18,
-75, -22, -77, -27, -79, -30, -82, -34, -84, -37, -84, -40, -86, -43, -87, -46,
-88, -48, -89, -49, -90, -51, -90, -50, -89, -50, -88, -51, -87, -50, -87, -48,
-83, -48, -82, -47, -80, -45, -79, -44, -76, -42, -73, -42, -70, -39, -67, -37,
-64, -35, -61, -32, -56, -30, -52, -27, -49, -24, -43, -21, -39, -17, -34, -14,
-29, -11, -24, -7, -18, -3, -12, -1, -6, 4, 0, 6, 5, 10, 11, 13, 16, 16, 20, 19,
24, 22, 28, 24, 32, 26, 35, 29, 38, 30, 41, 32, 44, 27, 44, 29, 47, 30, 49, 25,
50, 27, 51, 25, 52, 25, 53, 23, 53, 22, 54, 19, 56, 17, 57, 14, 57, 10, 57, 6,
58, 1, 57, -3, 56, -9, 57, -13, 56, -19, 56, -24, 55, -29, 54, -34, 54, -39, 52,
-44, 52, -48, 50, -53, 48, -57, 48, -61, 46, -65, 44, -68, 43, -73, 40, -79, 32,
-84, 26, -88, 22, -92, 14, -96, 6, -100, -2, -103, -8, -106, -15, -108, -20,
-110, -26, -112, -31, -114, -35, -116, -39, -117, -44, -118, -48, -120, -52,
-121, -55, -121, -58, -123, -61, -123, -63, -124, -66, -125, -68, -125, -70,
-126, -71, -126, -73, -127, -74, -127, -75, -127, -75, -128, -76, -127, -77,
-127, -76, -128, -76, -128, -77, -128, -77, -128, -76, -128, -75, -128, -74,
-128, -74, -128, -74, -128, -73, -127, -71, -127, -71, -126, -68, -126, -64,
-126, -62, -126, -60, -125, -56, -124, -53, -124, -50, -124, -48, -123, -45,
-122, -42, -121, -41, -122, -40, -120, -37, -121, -36, -120, -35, -119, -33,
-119, -31, -118, -27, -117, -18, -115, -12, -114, -6, -113, -3, -111, 3, -109,
10, -109, 12, -108, 14, -106, 18, -105, 21, -104, 24, -103, 26, -101, 30, -100,
32, -98, 35, -97, 37, -97, 39, -96, 41, -93, 42, -93, 44, -92, 45, -91, 47, -90,
47, -88, 49, -87, 49, -87, 50, -87, 50, -86, 50, -85, 49, -86, 50, -85, 50, -85,
50, -85, 48, -85, 48, -84, 47, -85, 46, -85, 45, -86, 44, -85, 39, -87, 24, -87,
11, -88, 0, -87, -14, -89, -30, -90, -42, -90, -51, -90, -58, -90, -66, -92,
-72, -92, -78, -91, -84, -92, -90, -92, -95, -93, -100, -92, -104, -92, -108,
-93, -112, -92, -114, -92, -117, -91, -118, -92, -120, -93, -122, -94, -124,
-93, -125, -93, -127, -93, -127, -92, -128, -92, -128, -92, -127, -91, -128,
-90, -127, -90, -127, -89, -127, -89, -127, -89, -126, -88, -125, -88, -124,
-88, -123, -87, -122, -87, -120, -87, -119, -86, -118, -86, -116, -85, -115,
-84, -113, -84, -111, -83, -109, -83, -106, -82, -104, -82, -102, -83, -99, -82,
-97, -82, -94, -81, -91, -81, -89, -80, -86, -80, -82, -78, -77, -77, -74, -77,
-69, -76, -65, -76, -60, -76, -55, -74, -50, -74, -45, -73, -40, -71, -34, -70,
-28, -69, -22, -68, -16, -67, -9, -67, -3, -65, 3, -62, 10, -61, 16, -61, 21,
-59, 26, -57, 31, -56, 36, -54, 40, -52, 44, -50, 47, -48, 51, -46, 53, -44, 56,
-42, 58, -41, 60, -39, 61, -37, 64, -35, 64, -33, 65, -30, 67, -28, 67, -26, 67,
-25, 67, -23, 68, -20, 67, -19, 67, -16, 64, -15, 66, -13, 63, -11, 63, -9, 58,
-7, 61, -5, 52, -4, 60, -1, 34, };

#endif /* AKWF_stereo_0004_512_H_ */
