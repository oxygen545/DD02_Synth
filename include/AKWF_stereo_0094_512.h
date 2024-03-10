#ifndef AKWF_stereo_0094_512_H_
#define AKWF_stereo_0094_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_stereo_0094_512_NUM_CELLS 1024
#define AKWF_stereo_0094_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_stereo_0094_512_DATA
[] = {0, -11, 2, -11, 4, -6, 6, -3, 8, 1, 9, 4, 11, 8, 12, 10, 13, 14, 14, 17,
15, 21, 15, 23, 16, 26, 17, 28, 17, 33, 17, 34, 18, 37, 18, 40, 19, 43, 19, 44,
18, 47, 19, 49, 18, 51, 19, 53, 19, 54, 20, 56, 20, 58, 21, 60, 21, 61, 21, 62,
21, 64, 22, 65, 21, 67, 22, 67, 24, 67, 24, 69, 24, 70, 25, 71, 26, 72, 28, 72,
29, 73, 30, 73, 31, 73, 32, 74, 33, 75, 34, 76, 36, 75, 38, 75, 39, 76, 40, 76,
42, 76, 43, 77, 45, 76, 46, 77, 47, 78, 50, 78, 50, 77, 52, 78, 53, 79, 55, 78,
56, 78, 58, 78, 59, 79, 61, 79, 62, 79, 63, 79, 63, 80, 65, 79, 67, 79, 68, 79,
68, 79, 69, 79, 71, 78, 70, 78, 72, 78, 72, 78, 73, 78, 73, 77, 73, 77, 74, 77,
74, 77, 74, 77, 74, 77, 75, 76, 74, 75, 75, 74, 74, 74, 75, 73, 74, 72, 73, 73,
73, 72, 73, 72, 73, 70, 72, 71, 72, 69, 72, 70, 71, 69, 71, 68, 71, 68, 70, 67,
71, 66, 70, 65, 69, 65, 70, 64, 68, 64, 69, 62, 69, 62, 69, 62, 69, 60, 68, 61,
68, 60, 67, 59, 68, 59, 68, 59, 67, 58, 68, 58, 68, 57, 68, 56, 68, 57, 68, 57,
68, 55, 67, 56, 68, 55, 68, 55, 68, 56, 67, 55, 68, 55, 68, 54, 67, 54, 68, 54,
68, 53, 67, 53, 68, 53, 67, 54, 67, 54, 67, 53, 68, 53, 67, 54, 67, 53, 66, 53,
66, 52, 66, 53, 65, 53, 66, 52, 65, 52, 64, 52, 64, 51, 64, 51, 64, 51, 63, 51,
62, 50, 62, 50, 61, 50, 61, 50, 61, 48, 60, 50, 59, 47, 59, 48, 58, 48, 58, 48,
58, 47, 56, 46, 56, 46, 56, 46, 56, 46, 55, 45, 55, 44, 54, 44, 54, 43, 53, 43,
53, 42, 53, 42, 52, 42, 52, 41, 52, 40, 51, 41, 50, 40, 51, 40, 51, 40, 51, 39,
52, 37, 54, 37, 56, 36, 57, 35, 58, 35, 58, 34, 59, 33, 60, 33, 60, 33, 61, 33,
61, 32, 61, 32, 61, 31, 63, 31, 63, 31, 63, 30, 63, 31, 63, 31, 63, 30, 63, 30,
62, 31, 61, 31, 61, 31, 60, 31, 59, 32, 58, 32, 57, 33, 56, 32, 54, 33, 52, 33,
52, 33, 49, 34, 48, 34, 47, 35, 45, 35, 44, 36, 42, 36, 39, 36, 39, 37, 36, 37,
36, 37, 33, 38, 31, 39, 30, 39, 28, 39, 27, 39, 25, 39, 25, 39, 22, 38, 22, 38,
20, 38, 19, 38, 17, 38, 17, 38, 16, 38, 14, 38, 14, 37, 12, 37, 12, 37, 11, 36,
10, 36, 10, 35, 9, 35, 10, 34, 9, 34, 9, 33, 9, 33, 8, 32, 8, 32, 8, 31, 8, 30,
9, 29, 7, 29, 8, 29, 8, 28, 7, 28, 7, 27, 8, 26, 8, 25, 9, 25, 8, 24, 9, 23, 8,
23, 9, 22, 10, 22, 10, 21, 10, 20, 10, 20, 10, 19, 10, 19, 10, 19, 11, 19, 12,
18, 11, 17, 11, 17, 12, 17, 12, 16, 12, 16, 13, 17, 13, 16, 13, 16, 12, 15, 13,
16, 13, 16, 14, 15, 13, 15, 13, 15, 14, 15, 14, 16, 14, 16, 14, 15, 13, 16, 13,
17, 15, 17, 14, 17, 14, 17, 14, 17, 14, 17, 15, 17, 15, 18, 14, 16, 15, 18, 15,
17, 15, 17, 15, 17, 15, 17, 14, 17, 14, 17, 14, 17, 14, 17, 13, 18, 14, 16, 13,
16, 13, 17, 13, 16, 13, 16, 13, 17, 12, 16, 12, 16, 11, 14, 10, 15, 10, 14, 10,
14, 9, 13, 8, 13, 7, 12, 7, 11, 6, 11, 5, 11, 5, 9, 3, 9, 2, 8, 1, 7, 1, 6, -1,
6, -2, 4, -3, 3, -5, 3, -5, 1, -7, 0, -8, -1, -10, -3, -10, -5, -13, -6, -13,
-8, -15, -9, -15, -10, -17, -11, -19, -13, -20, -15, -22, -17, -23, -18, -25,
-20, -27, -22, -27, -24, -29, -26, -31, -27, -33, -30, -34, -31, -36, -33, -38,
-35, -39, -38, -40, -38, -41, -42, -43, -42, -45, -45, -46, -47, -47, -50, -49,
-52, -51, -53, -52, -56, -54, -59, -55, -60, -58, -62, -59, -64, -59, -67, -60,
-68, -62, -71, -64, -72, -65, -75, -66, -77, -66, -80, -67, -81, -68, -84, -69,
-86, -69, -87, -70, -91, -72, -93, -73, -95, -74, -97, -76, -99, -76, -100, -77,
-102, -78, -104, -79, -106, -80, -107, -82, -109, -83, -110, -84, -112, -85,
-114, -87, -114, -88, -116, -89, -117, -91, -119, -92, -120, -93, -119, -95,
-121, -96, -122, -98, -123, -99, -123, -101, -123, -102, -126, -103, -125, -105,
-125, -107, -127, -107, -127, -109, -127, -110, -127, -112, -128, -113, -128,
-114, -128, -114, -128, -116, -128, -117, -128, -117, -128, -118, -128, -119,
-128, -120, -128, -120, -128, -121, -127, -121, -127, -121, -126, -122, -126,
-123, -126, -123, -125, -123, -126, -124, -125, -123, -124, -122, -124, -123,
-122, -122, -121, -123, -121, -122, -121, -121, -120, -121, -119, -120, -119,
-119, -118, -119, -117, -118, -116, -117, -116, -116, -115, -115, -114, -115,
-112, -114, -111, -113, -111, -112, -110, -110, -109, -110, -108, -108, -106,
-107, -105, -106, -104, -105, -103, -103, -102, -101, -101, -100, -99, -99, -98,
-98, -98, -97, -97, -95, -95, -93, -94, -92, -93, -91, -91, -89, -90, -89, -88,
-86, -87, -85, -86, -84, -85, -82, -83, -81, -83, -80, -82, -79, -80, -78, -79,
-76, -77, -75, -76, -74, -75, -72, -74, -71, -72, -70, -71, -69, -69, -67, -69,
-67, -66, -65, -66, -61, -64, -57, -62, -53, -60, -49, -57, -46, -57, -43, -55,
-40, -52, -37, -50, -34, -48, -30, -45, -27, -41, -25, -39, -21, -37, -18, -33,
-15, -31, -12, -27, -9, -25, -6, -21, -4, -20, -2, -10, };

#endif /* AKWF_stereo_0094_512_H_ */
