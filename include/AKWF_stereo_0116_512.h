#ifndef AKWF_stereo_0116_512_H_
#define AKWF_stereo_0116_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_stereo_0116_512_NUM_CELLS 1024
#define AKWF_stereo_0116_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_stereo_0116_512_DATA
[] = {2, -16, 5, -19, 8, -13, 10, -13, 14, -8, 17, -6, 20, -2, 24, -1, 26, 3,
29, 6, 32, 9, 35, 11, 37, 14, 41, 17, 44, 20, 46, 23, 49, 26, 52, 28, 54, 31,
57, 33, 60, 36, 62, 39, 65, 42, 66, 45, 70, 47, 72, 50, 74, 52, 76, 55, 79, 57,
80, 59, 82, 61, 84, 64, 86, 66, 88, 69, 90, 72, 91, 73, 93, 75, 95, 77, 95, 78,
97, 80, 99, 83, 100, 84, 102, 86, 102, 88, 104, 90, 104, 91, 106, 93, 106, 94,
108, 96, 108, 97, 109, 98, 109, 99, 110, 100, 110, 101, 111, 102, 111, 103, 111,
105, 111, 105, 111, 105, 111, 106, 111, 106, 111, 107, 111, 107, 109, 108, 109,
108, 109, 108, 108, 108, 108, 108, 107, 108, 106, 107, 105, 107, 104, 107, 103,
108, 103, 106, 101, 106, 101, 106, 100, 105, 97, 104, 96, 104, 95, 102, 94, 101,
93, 100, 91, 100, 90, 98, 88, 97, 86, 97, 84, 94, 83, 93, 81, 92, 79, 90, 78,
89, 75, 87, 74, 85, 71, 85, 70, 82, 67, 81, 65, 79, 63, 77, 61, 75, 59, 73, 58,
71, 55, 70, 52, 67, 51, 66, 48, 64, 46, 61, 43, 59, 42, 57, 39, 56, 37, 53, 35,
51, 32, 49, 30, 46, 29, 44, 25, 42, 24, 39, 22, 37, 19, 35, 18, 33, 14, 30, 12,
28, 11, 26, 9, 23, 6, 22, 5, 19, 2, 17, 1, 15, -1, 13, -4, 11, -5, 8, -8, 6, -9,
5, -11, 3, -13, 0, -14, -1, -16, -3, -18, -4, -19, -7, -21, -8, -22, -10, -23,
-11, -24, -13, -25, -15, -26, -16, -28, -18, -29, -18, -30, -19, -32, -21, -32,
-22, -33, -24, -33, -24, -34, -26, -35, -27, -36, -28, -37, -29, -36, -29, -37,
-31, -38, -31, -38, -32, -39, -32, -39, -32, -39, -33, -38, -33, -39, -35, -39,
-33, -40, -34, -40, -35, -39, -35, -40, -35, -39, -34, -39, -36, -39, -35, -38,
-36, -39, -35, -38, -36, -37, -35, -38, -36, -38, -35, -37, -34, -37, -34, -35,
-35, -35, -34, -35, -33, -34, -34, -34, -33, -33, -33, -33, -32, -33, -33, -32,
-32, -31, -31, -30, -31, -29, -30, -29, -29, -28, -30, -28, -29, -26, -29, -26,
-28, -25, -27, -25, -26, -24, -26, -23, -25, -21, -25, -21, -24, -19, -24, -19,
-23, -18, -22, -17, -22, -16, -21, -15, -20, -15, -19, -13, -19, -11, -17, -11,
-16, -9, -16, -9, -15, -7, -13, -7, -14, -6, -13, -4, -12, -3, -11, -2, -9, 0,
-9, 2, -7, 3, -7, 3, -5, 5, -5, 7, -3, 7, -3, 9, -1, 11, 0, 11, 1, 14, 2, 15, 4,
16, 6, 18, 6, 19, 7, 22, 9, 22, 10, 24, 12, 25, 13, 28, 15, 30, 16, 31, 17, 32,
19, 33, 20, 36, 23, 38, 24, 39, 25, 42, 27, 43, 29, 44, 30, 46, 32, 48, 33, 50,
35, 51, 36, 53, 38, 54, 41, 56, 42, 58, 44, 59, 46, 60, 48, 63, 49, 64, 51, 66,
53, 68, 54, 68, 56, 70, 58, 72, 60, 73, 61, 75, 63, 77, 64, 78, 66, 79, 67, 80,
69, 82, 71, 82, 72, 83, 74, 85, 74, 86, 76, 86, 78, 88, 79, 88, 79, 89, 80, 89,
81, 90, 83, 90, 83, 91, 86, 91, 86, 92, 86, 92, 87, 92, 87, 91, 88, 91, 89, 91,
90, 92, 90, 92, 90, 92, 90, 92, 90, 91, 90, 90, 90, 90, 91, 89, 90, 88, 90, 87,
90, 86, 90, 85, 89, 84, 88, 83, 88, 82, 87, 81, 87, 79, 85, 78, 85, 77, 83, 74,
82, 74, 81, 72, 80, 70, 79, 68, 77, 66, 76, 64, 75, 62, 73, 61, 72, 58, 70, 57,
69, 55, 67, 52, 65, 50, 63, 49, 61, 46, 59, 43, 57, 42, 55, 39, 53, 37, 51, 35,
50, 32, 48, 30, 46, 27, 43, 25, 41, 23, 39, 21, 37, 18, 34, 16, 32, 13, 29, 10,
27, 9, 26, 6, 23, 4, 21, 2, 18, -1, 17, -3, 13, -5, 11, -8, 9, -10, 8, -12, 5,
-14, 3, -16, 0, -19, -2, -20, -4, -22, -6, -25, -9, -26, -10, -29, -12, -31,
-14, -33, -17, -34, -18, -37, -21, -38, -22, -40, -24, -43, -26, -45, -29, -46,
-31, -48, -32, -50, -34, -51, -36, -53, -38, -56, -40, -56, -42, -58, -44, -60,
-45, -62, -47, -63, -48, -64, -50, -67, -53, -68, -54, -70, -56, -70, -58, -72,
-58, -73, -60, -75, -63, -77, -64, -77, -66, -79, -67, -80, -68, -81, -70, -83,
-71, -84, -73, -85, -74, -87, -75, -87, -77, -89, -79, -89, -80, -91, -82, -93,
-82, -93, -84, -94, -85, -95, -87, -97, -87, -98, -89, -98, -91, -99, -91, -100,
-92, -101, -94, -103, -95, -104, -96, -105, -97, -105, -99, -107, -100, -108,
-101, -109, -102, -109, -103, -110, -104, -112, -105, -112, -106, -113, -107,
-114, -108, -115, -109, -116, -111, -117, -111, -118, -112, -118, -113, -119,
-114, -120, -115, -121, -116, -122, -117, -121, -118, -123, -119, -123, -119,
-124, -120, -124, -121, -126, -122, -126, -122, -126, -123, -127, -123, -128,
-124, -127, -125, -128, -125, -128, -126, -128, -126, -127, -126, -128, -126,
-128, -126, -128, -127, -128, -127, -127, -127, -127, -126, -126, -126, -127,
-126, -125, -126, -125, -126, -124, -125, -123, -126, -123, -125, -122, -124,
-121, -124, -119, -123, -118, -122, -117, -121, -115, -120, -114, -120, -113,
-118, -112, -117, -109, -115, -108, -114, -106, -113, -104, -111, -103, -110,
-100, -109, -98, -107, -96, -106, -94, -104, -92, -101, -89, -99, -87, -98, -84,
-95, -82, -94, -79, -92, -77, -90, -74, -88, -72, -84, -68, -83, -65, -80, -63,
-78, -60, -76, -57, -73, -54, -70, -50, -67, -48, -65, -44, -62, -42, -60, -38,
-56, -35, -54, -32, -51, -29, -49, -26, -46, -23, -43, -20, -39, -17, -38, -13,
-33, -10, -32, -7, -27, -4, -28, -1, -15, };

#endif /* AKWF_stereo_0116_512_H_ */