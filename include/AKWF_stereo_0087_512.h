#ifndef AKWF_stereo_0087_512_H_
#define AKWF_stereo_0087_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_stereo_0087_512_NUM_CELLS 1024
#define AKWF_stereo_0087_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_stereo_0087_512_DATA
[] = {0, 2, 1, 4, 2, 4, 4, 6, 5, 6, 4, 8, 6, 9, 7, 10, 7, 10, 8, 11, 9, 13, 11,
13, 11, 13, 13, 15, 13, 15, 14, 17, 15, 17, 15, 18, 17, 20, 18, 20, 19, 21, 20,
22, 21, 23, 22, 24, 22, 25, 24, 26, 24, 26, 26, 27, 27, 28, 27, 29, 28, 30, 28,
31, 29, 31, 30, 33, 30, 33, 32, 35, 33, 35, 34, 35, 35, 37, 36, 38, 37, 39, 38,
40, 38, 41, 40, 41, 40, 43, 41, 43, 42, 44, 44, 45, 43, 45, 45, 46, 46, 47, 47,
48, 49, 50, 48, 51, 49, 52, 51, 51, 52, 52, 55, 54, 55, 55, 57, 55, 58, 56, 59,
57, 60, 58, 62, 58, 62, 59, 62, 60, 64, 61, 65, 62, 66, 62, 66, 63, 67, 65, 69,
66, 70, 66, 70, 68, 70, 68, 71, 69, 72, 70, 73, 71, 74, 72, 74, 73, 75, 74, 76,
75, 77, 76, 78, 76, 79, 78, 79, 78, 80, 79, 81, 80, 82, 81, 83, 81, 84, 83, 84,
84, 85, 84, 86, 84, 87, 87, 88, 87, 88, 87, 89, 89, 90, 90, 91, 90, 92, 92, 93,
93, 93, 92, 94, 94, 96, 95, 96, 95, 97, 97, 97, 96, 98, 98, 100, 99, 100, 99,
101, 101, 102, 101, 103, 102, 103, 103, 104, 104, 105, 106, 106, 106, 108, 107,
108, 108, 110, 109, 110, 109, 110, 110, 112, 111, 112, 111, 113, 113, 114, 114,
115, 115, 116, 116, 118, 118, 118, 118, 119, 119, 120, 120, 120, 120, 121, 121,
122, 122, 123, 123, 123, 124, 125, 124, 126, 126, 126, 125, 125, 125, 122, 124,
121, 123, 119, 122, 118, 121, 116, 120, 116, 119, 114, 118, 114, 116, 112, 115,
112, 114, 110, 113, 111, 112, 110, 110, 108, 110, 107, 108, 107, 107, 106, 107,
105, 105, 103, 105, 102, 103, 102, 102, 101, 101, 100, 100, 100, 98, 98, 98, 98,
96, 98, 95, 96, 94, 96, 93, 95, 91, 94, 91, 92, 89, 92, 88, 91, 88, 90, 87, 89,
85, 88, 84, 87, 83, 86, 82, 85, 81, 84, 79, 83, 78, 82, 78, 81, 77, 80, 75, 79,
74, 78, 73, 77, 72, 76, 71, 75, 70, 73, 68, 72, 67, 70, 65, 69, 65, 69, 65, 67,
62, 66, 61, 65, 60, 64, 59, 63, 58, 61, 56, 60, 56, 59, 54, 58, 53, 57, 53, 54,
51, 54, 50, 53, 50, 51, 48, 50, 46, 49, 46, 47, 44, 46, 43, 45, 42, 44, 41, 43,
40, 41, 39, 40, 37, 39, 36, 38, 36, 36, 33, 35, 33, 33, 32, 33, 30, 31, 30, 30,
28, 30, 27, 27, 26, 26, 25, 24, 24, 24, 23, 22, 22, 21, 21, 20, 19, 19, 19, 17,
18, 16, 16, 15, 15, 14, 14, 13, 12, 12, 12, 11, 10, 10, 9, 9, 8, 8, 7, 7, 6, 5,
5, 4, 3, 3, 2, 2, 1, 2, 0, -1, -1, -1, -2, -2, -3, -3, -3, -3, -5, -5, -7, -5,
-8, -7, -8, -6, -10, -8, -11, -9, -12, -11, -13, -12, -14, -13, -16, -13, -16,
-14, -17, -15, -18, -17, -20, -17, -21, -19, -22, -20, -23, -21, -24, -22, -25,
-23, -26, -24, -28, -26, -29, -26, -30, -27, -32, -29, -32, -30, -33, -30, -34,
-32, -36, -33, -37, -34, -38, -35, -38, -36, -40, -37, -41, -38, -42, -40, -43,
-41, -44, -42, -45, -43, -47, -44, -47, -45, -48, -47, -49, -48, -51, -50, -52,
-51, -53, -52, -54, -52, -55, -54, -57, -55, -57, -56, -59, -57, -60, -58, -61,
-60, -62, -61, -63, -63, -64, -63, -65, -64, -67, -65, -68, -67, -69, -67, -69,
-69, -70, -70, -72, -71, -73, -73, -73, -74, -75, -75, -77, -76, -77, -77, -78,
-79, -79, -80, -80, -81, -82, -81, -83, -84, -85, -85, -85, -85, -86, -87, -87,
-88, -88, -89, -89, -90, -91, -90, -92, -92, -92, -93, -94, -94, -94, -96, -96,
-97, -97, -99, -98, -101, -99, -102, -101, -103, -101, -105, -102, -106, -103,
-108, -104, -108, -105, -110, -106, -111, -107, -111, -110, -113, -110, -114,
-111, -116, -111, -117, -113, -117, -114, -118, -115, -120, -117, -120, -118,
-121, -119, -122, -119, -123, -122, -125, -122, -125, -123, -127, -125, -128,
-126, -127, -125, -126, -124, -124, -125, -123, -124, -121, -124, -120, -122,
-119, -122, -118, -121, -117, -120, -116, -119, -115, -118, -114, -117, -114,
-116, -113, -116, -112, -114, -112, -114, -111, -113, -111, -111, -110, -110,
-109, -110, -108, -109, -108, -109, -108, -108, -106, -107, -107, -105, -106,
-104, -105, -103, -104, -103, -104, -102, -103, -101, -103, -99, -102, -99,
-101, -98, -100, -97, -100, -97, -99, -95, -98, -95, -98, -94, -97, -93, -96,
-92, -95, -91, -95, -90, -93, -89, -92, -88, -93, -88, -92, -86, -91, -86, -91,
-85, -89, -85, -89, -84, -87, -82, -87, -81, -85, -80, -84, -79, -84, -79, -82,
-77, -81, -77, -81, -76, -79, -74, -79, -74, -77, -72, -77, -72, -76, -71, -76,
-69, -74, -68, -73, -68, -71, -68, -71, -66, -69, -65, -69, -64, -68, -64, -66,
-62, -65, -62, -65, -61, -64, -60, -62, -59, -60, -57, -60, -58, -59, -57, -57,
-56, -57, -55, -56, -54, -56, -53, -54, -52, -53, -50, -53, -50, -50, -49, -50,
-48, -49, -47, -48, -47, -47, -46, -46, -45, -45, -44, -44, -43, -42, -42, -42,
-41, -40, -40, -39, -39, -39, -38, -38, -37, -37, -37, -37, -36, -35, -35, -34,
-34, -32, -33, -33, -32, -31, -32, -31, -30, -30, -29, -29, -29, -28, -28, -27,
-27, -27, -25, -26, -25, -25, -24, -24, -24, -23, -22, -22, -22, -22, -20, -21,
-19, -20, -19, -19, -18, -19, -17, -18, -16, -17, -16, -15, -14, -15, -13, -14,
-13, -13, -11, -13, -11, -11, -10, -11, -9, -10, -9, -8, -7, -8, -6, -8, -5, -7,
-4, -6, -3, -5, -3, -5, -2, -3, -2, -3, 0, -1, 1, 0, 3, 1, 2, };

#endif /* AKWF_stereo_0087_512_H_ */
