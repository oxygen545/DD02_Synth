#ifndef AKWF_stereo_0037_512_H_
#define AKWF_stereo_0037_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_stereo_0037_512_NUM_CELLS 1024
#define AKWF_stereo_0037_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_stereo_0037_512_DATA
[] = {0, 102, 3, 127, 6, 121, 8, 127, 10, 123, 13, 127, 15, 124, 18, 127, 20,
126, 23, 127, 25, 125, 25, 126, 27, 121, 29, 120, 30, 117, 31, 116, 33, 113, 33,
111, 37, 108, 38, 107, 40, 105, 41, 103, 42, 101, 43, 98, 45, 96, 45, 94, 46,
93, 48, 90, 49, 90, 51, 88, 51, 86, 53, 85, 53, 84, 55, 81, 56, 80, 57, 75, 59,
72, 60, 68, 61, 63, 62, 59, 64, 54, 65, 48, 65, 44, 67, 39, 68, 36, 68, 33, 70,
29, 71, 25, 72, 22, 74, 18, 76, 13, 77, 8, 79, 2, 81, -3, 84, -10, 85, -14, 89,
-17, 91, -22, 93, -25, 97, -29, 99, -31, 100, -31, 102, -33, 105, -37, 107, -41,
108, -44, 109, -47, 110, -51, 112, -54, 113, -59, 114, -62, 116, -67, 119, -70,
120, -73, 122, -75, 123, -78, 124, -81, 125, -83, 126, -84, 127, -85, 127, -85,
127, -85, 127, -84, 127, -83, 127, -82, 127, -81, 127, -79, 127, -78, 127, -77,
127, -75, 125, -73, 125, -70, 124, -67, 123, -63, 122, -61, 122, -58, 121, -54,
119, -52, 118, -50, 117, -48, 116, -46, 113, -44, 113, -42, 110, -40, 109, -36,
107, -36, 106, -34, 105, -33, 104, -29, 103, -27, 101, -24, 99, -21, 97, -18,
95, -15, 93, -12, 91, -9, 90, -6, 88, -3, 87, 1, 85, 3, 83, 6, 82, 9, 81, 12,
80, 14, 79, 17, 78, 18, 77, 19, 77, 22, 77, 24, 77, 26, 77, 29, 76, 32, 76, 36,
76, 40, 76, 42, 75, 45, 75, 46, 75, 48, 75, 49, 75, 50, 74, 50, 73, 53, 74, 55,
75, 58, 74, 61, 75, 63, 76, 65, 77, 68, 78, 70, 79, 74, 80, 77, 80, 81, 81, 85,
82, 90, 83, 94, 84, 96, 85, 99, 86, 100, 87, 101, 89, 101, 91, 102, 92, 102, 93,
103, 95, 105, 97, 106, 98, 106, 99, 105, 100, 104, 100, 102, 102, 101, 103, 99,
104, 98, 105, 97, 106, 95, 107, 94, 108, 92, 107, 90, 108, 89, 108, 85, 109, 82,
109, 78, 108, 75, 108, 73, 108, 72, 108, 68, 109, 67, 109, 66, 108, 64, 109, 62,
108, 59, 106, 57, 105, 54, 102, 49, 101, 46, 100, 40, 98, 35, 97, 31, 94, 25,
92, 20, 91, 18, 88, 14, 86, 11, 83, 6, 80, 2, 77, -2, 73, -5, 71, -9, 67, -11,
64, -13, 61, -16, 57, -17, 54, -20, 51, -23, 48, -24, 44, -28, 40, -31, 37, -34,
34, -37, 31, -40, 29, -42, 25, -44, 23, -45, 20, -47, 17, -49, 15, -51, 11, -52,
5, -55, 2, -56, -1, -58, -4, -59, -7, -60, -9, -63, -11, -65, -12, -68, -15,
-71, -16, -75, -18, -77, -21, -80, -21, -82, -24, -84, -25, -85, -28, -85, -29,
-87, -30, -89, -32, -91, -34, -93, -34, -93, -35, -94, -37, -95, -38, -98, -39,
-99, -39, -103, -41, -103, -42, -103, -43, -103, -44, -104, -44, -103, -45,
-103, -46, -101, -48, -99, -48, -98, -51, -97, -53, -97, -54, -95, -56, -96,
-57, -95, -59, -94, -61, -95, -63, -95, -64, -95, -66, -94, -68, -93, -69, -91,
-69, -91, -72, -91, -74, -91, -75, -89, -78, -88, -80, -84, -81, -82, -83, -78,
-86, -74, -87, -72, -90, -67, -92, -63, -94, -59, -96, -55, -97, -51, -98, -47,
-100, -43, -101, -41, -103, -37, -102, -35, -104, -33, -106, -32, -106, -30,
-107, -29, -107, -26, -108, -25, -108, -23, -108, -22, -109, -21, -109, -21,
-109, -20, -110, -21, -110, -20, -110, -19, -109, -18, -109, -17, -109, -16,
-108, -15, -108, -12, -106, -9, -105, -7, -105, -5, -104, -2, -102, 0, -100, 2,
-100, 4, -98, 6, -96, 8, -95, 9, -93, 11, -92, 11, -91, 11, -90, 11, -88, 10,
-88, 9, -86, 7, -86, 5, -85, 4, -85, 2, -85, 2, -84, 1, -84, 1, -83, 1, -83, 0,
-82, 0, -83, 0, -83, 1, -83, 1, -83, 1, -83, 1, -82, 2, -83, 3, -84, 4, -84, 7,
-84, 8, -84, 8, -84, 8, -84, 8, -85, 7, -85, 7, -85, 5, -86, 4, -87, 3, -88, 1,
-89, -1, -90, -3, -91, -7, -92, -11, -94, -15, -95, -18, -96, -21, -98, -24,
-100, -27, -99, -30, -100, -32, -101, -34, -102, -35, -102, -37, -103, -40,
-103, -42, -105, -44, -105, -44, -105, -45, -105, -48, -106, -50, -106, -52,
-107, -54, -105, -55, -105, -57, -105, -59, -104, -61, -104, -62, -103, -63,
-103, -64, -102, -66, -102, -68, -101, -70, -99, -72, -98, -74, -96, -76, -96,
-77, -94, -79, -92, -81, -91, -82, -89, -83, -88, -82, -86, -82, -85, -81, -83,
-79, -81, -78, -79, -75, -78, -72, -76, -69, -74, -68, -73, -67, -71, -67, -68,
-66, -66, -66, -65, -65, -63, -64, -61, -63, -59, -62, -57, -61, -55, -60, -53,
-58, -51, -57, -50, -56, -48, -54, -47, -52, -46, -49, -44, -45, -42, -42, -40,
-38, -39, -37, -38, -35, -36, -33, -35, -32, -35, -31, -34, -29, -35, -29, -34,
-27, -32, -26, -32, -24, -31, -22, -30, -20, -30, -18, -30, -16, -30, -14, -31,
-12, -30, -10, -30, -8, -29, -6, -28, -4, -28, -3, -28, 0, -28, 0, -28, 2, -28,
3, -28, 5, -29, 8, -29, 9, -29, 10, -29, 11, -30, 13, -31, 15, -32, 16, -33, 17,
-33, 18, -35, 19, -35, 21, -36, 22, -37, 24, -37, 24, -39, 25, -39, 26, -41, 28,
-42, 30, -42, 33, -43, 36, -43, 40, -44, 44, -44, 47, -44, 51, -45, 55, -44, 59,
-45, 62, -45, 65, -45, 67, -45, 71, -44, 74, -44, 78, -45, 81, -44, 84, -45, 85,
-45, 89, -44, 91, -45, 94, -44, 97, -44, 99, -43, 100, -41, 104, -39, 104, -38,
104, -36, 104, -34, 105, -32, 107, -30, 106, -28, 108, -27, 108, -25, 111, -22,
110, -20, 117, -18, 114, -15, 120, -13, 115, -10, 127, -7, 116, -4, 127, -1, 82,
};

#endif /* AKWF_stereo_0037_512_H_ */
