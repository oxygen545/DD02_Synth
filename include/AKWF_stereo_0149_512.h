#ifndef AKWF_stereo_0149_512_H_
#define AKWF_stereo_0149_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_stereo_0149_512_NUM_CELLS 1024
#define AKWF_stereo_0149_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_stereo_0149_512_DATA
[] = {0, 0, 1, 2, 1, 3, 3, 5, 3, 5, 4, 6, 4, 7, 4, 8, 5, 10, 6, 10, 6, 11, 7,
12, 7, 12, 8, 13, 7, 13, 8, 15, 9, 15, 10, 16, 10, 16, 10, 18, 11, 18, 11, 18,
12, 20, 12, 20, 12, 20, 14, 21, 14, 22, 14, 22, 13, 24, 14, 24, 15, 24, 16, 24,
16, 25, 16, 26, 16, 26, 17, 26, 18, 27, 17, 28, 18, 28, 19, 29, 19, 29, 20, 30,
20, 30, 20, 30, 21, 31, 21, 32, 21, 32, 22, 34, 22, 34, 22, 33, 22, 35, 23, 36,
24, 35, 24, 36, 25, 37, 25, 37, 26, 38, 26, 38, 27, 38, 27, 38, 28, 39, 27, 40,
29, 40, 28, 41, 28, 41, 29, 42, 29, 42, 30, 43, 30, 43, 30, 44, 31, 43, 31, 44,
32, 45, 32, 45, 33, 46, 33, 45, 34, 46, 33, 47, 35, 47, 35, 48, 35, 48, 35, 48,
36, 49, 36, 50, 37, 50, 37, 50, 38, 50, 38, 51, 39, 52, 39, 52, 39, 53, 40, 53,
40, 54, 40, 54, 41, 54, 41, 55, 42, 55, 42, 56, 43, 56, 43, 56, 43, 56, 43, 57,
44, 57, 44, 59, 45, 58, 46, 59, 46, 59, 47, 60, 46, 61, 47, 61, 48, 61, 48, 61,
48, 62, 48, 63, 50, 62, 49, 64, 51, 63, 51, 63, 51, 65, 52, 65, 52, 65, 52, 65,
53, 66, 52, 67, 53, 67, 54, 67, 54, 67, 55, 68, 56, 68, 55, 69, 56, 70, 57, 70,
57, 70, 57, 71, 58, 71, 58, 72, 58, 72, 60, 72, 60, 72, 59, 73, 61, 73, 60, 73,
61, 75, 61, 74, 61, 75, 62, 75, 63, 75, 63, 77, 64, 77, 64, 76, 64, 77, 66, 77,
66, 78, 65, 78, 66, 79, 67, 79, 68, 79, 68, 80, 68, 79, 68, 81, 69, 80, 69, 81,
70, 82, 70, 82, 71, 83, 72, 82, 72, 83, 72, 84, 73, 84, 73, 85, 74, 85, 73, 85,
73, 86, 74, 86, 75, 86, 75, 86, 75, 87, 76, 87, 76, 88, 76, 88, 77, 88, 78, 89,
78, 89, 79, 90, 79, 90, 79, 91, 80, 91, 80, 91, 81, 91, 81, 92, 82, 92, 82, 92,
82, 93, 83, 94, 83, 94, 83, 94, 84, 94, 84, 95, 84, 94, 85, 95, 86, 95, 86, 96,
86, 96, 86, 97, 86, 97, 87, 97, 87, 97, 87, 98, 88, 98, 89, 98, 89, 99, 90, 99,
89, 100, 90, 100, 90, 100, 91, 100, 92, 100, 91, 100, 92, 100, 92, 101, 92, 101,
93, 101, 93, 101, 93, 102, 94, 102, 94, 103, 95, 103, 95, 103, 95, 104, 96, 103,
95, 104, 95, 104, 96, 104, 96, 104, 96, 104, 97, 105, 96, 105, 97, 106, 98, 105,
97, 106, 98, 106, 98, 106, 99, 106, 99, 107, 99, 107, 100, 107, 100, 106, 99,
107, 100, 108, 101, 108, 100, 108, 102, 109, 101, 109, 102, 109, 101, 108, 102,
109, 96, 96, 76, 47, 49, -15, 37, -44, 38, -41, 44, -29, 30, -34, -27, -68, -95,
-109, -127, -127, -123, -124, -110, -117, -104, -113, -105, -113, -106, -114,
-107, -114, -105, -113, -104, -111, -103, -111, -102, -111, -101, -109, -101,
-109, -100, -108, -100, -107, -98, -107, -98, -106, -98, -106, -96, -105, -96,
-105, -94, -104, -94, -104, -95, -103, -93, -102, -93, -103, -92, -102, -92,
-101, -91, -101, -90, -100, -90, -99, -90, -99, -88, -99, -88, -98, -86, -97,
-87, -97, -86, -97, -86, -96, -85, -94, -85, -95, -84, -94, -83, -94, -82, -94,
-81, -92, -81, -92, -81, -92, -81, -91, -80, -90, -80, -90, -79, -89, -78, -89,
-78, -88, -77, -88, -78, -88, -77, -88, -76, -87, -75, -87, -75, -87, -75, -86,
-74, -85, -74, -85, -74, -85, -73, -85, -72, -85, -72, -84, -72, -84, -71, -83,
-71, -82, -71, -82, -70, -81, -69, -81, -68, -80, -69, -81, -68, -79, -67, -80,
-67, -79, -67, -79, -66, -79, -66, -78, -66, -78, -64, -77, -65, -77, -65, -76,
-64, -75, -63, -76, -62, -74, -62, -75, -63, -75, -62, -74, -62, -74, -60, -73,
-60, -74, -60, -72, -59, -71, -59, -72, -58, -71, -59, -71, -58, -71, -58, -70,
-58, -69, -57, -69, -56, -69, -56, -68, -55, -68, -56, -68, -55, -67, -55, -67,
-54, -66, -53, -66, -53, -65, -54, -66, -52, -65, -52, -65, -51, -64, -51, -64,
-50, -63, -50, -63, -49, -62, -49, -62, -50, -62, -49, -61, -49, -61, -49, -61,
-48, -61, -47, -59, -47, -59, -46, -60, -46, -58, -46, -58, -46, -58, -45, -57,
-45, -57, -44, -56, -44, -56, -43, -56, -42, -56, -43, -55, -42, -54, -43, -54,
-42, -54, -41, -53, -41, -53, -40, -52, -40, -53, -39, -52, -39, -51, -38, -50,
-39, -50, -38, -50, -37, -49, -37, -49, -37, -49, -37, -49, -36, -48, -36, -48,
-36, -48, -35, -47, -34, -47, -34, -47, -34, -46, -33, -45, -33, -45, -32, -44,
-33, -45, -32, -44, -32, -43, -31, -44, -31, -43, -31, -42, -30, -42, -30, -41,
-29, -40, -29, -40, -29, -40, -28, -39, -28, -39, -28, -39, -28, -39, -28, -39,
-27, -38, -27, -37, -26, -37, -25, -36, -25, -36, -25, -36, -25, -35, -24, -35,
-24, -34, -23, -34, -22, -33, -23, -33, -23, -33, -22, -32, -22, -32, -21, -32,
-21, -31, -21, -29, -20, -29, -20, -29, -19, -29, -19, -28, -18, -27, -18, -27,
-19, -26, -17, -27, -17, -26, -16, -25, -17, -25, -16, -24, -16, -24, -16, -24,
-15, -23, -15, -23, -14, -22, -14, -21, -13, -20, -13, -20, -14, -20, -12, -20,
-11, -19, -12, -18, -12, -17, -11, -18, -10, -17, -10, -16, -10, -15, -9, -15,
-9, -15, -8, -13, -8, -14, -8, -13, -7, -13, -7, -12, -7, -12, -6, -11, -5, -9,
-5, -9, -5, -9, -4, -7, -4, -7, -3, -6, -4, -5, -3, -4, -3, -4, -2, -4, -1, -2,
-1, -1, 0, 1, };

#endif /* AKWF_stereo_0149_512_H_ */
