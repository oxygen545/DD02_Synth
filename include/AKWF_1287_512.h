#ifndef AKWF_1287_512_H_
#define AKWF_1287_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1287_512_NUM_CELLS 512
#define AKWF_1287_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1287_512_DATA [] =
{56, 94, 100, 117, 122, 127, 125, 121, 112, 102, 94, 90, 89, 94, 106, 113, 41,
37, 52, 51, 52, 42, 32, 18, 8, -2, -8, -10, -7, -2, 0, 10, 98, 111, 100, 95, 83,
74, 66, 60, 54, 50, 47, 43, 40, 32, 28, 14, -81, -99, -99, -102, -99, -97, -93,
-90, -89, -89, -92, -95, -100, -102, -105, -95, -2, 15, 18, 25, 28, 30, 26, 21,
15, 10, 9, 13, 22, 36, 60, 75, 10, 21, 41, 49, 51, 46, 38, 25, 14, 3, -5, -8,
-9, -4, -5, 10, 99, 107, 101, 99, 93, 90, 86, 85, 85, 86, 86, 84, 82, 72, 68,
45, -54, -72, -78, -85, -89, -89, -90, -89, -88, -86, -86, -84, -83, -76, -72,
-49, 54, 73, 87, 100, 108, 111, 108, 101, 91, 81, 72, 66, 66, 68, 82, 80, 3, 8,
16, 15, 12, 2, -10, -23, -36, -46, -52, -51, -50, -42, -42, -21, 68, 74, 69, 65,
59, 53, 50, 47, 48, 48, 51, 52, 54, 49, 53, 34, -56, -60, -58, -56, -51, -44,
-41, -35, -33, -33, -35, -38, -46, -47, -56, -39, 50, 55, 57, 57, 57, 51, 42,
31, 20, 9, 3, 1, 7, 15, 38, 38, -30, -15, -4, 2, 1, -6, -19, -32, -45, -55, -63,
-65, -66, -58, -61, -34, 55, 57, 57, 56, 54, 52, 53, 53, 56, 57, 62, 58, 59, 48,
49, 16, -81, -89, -100, -104, -110, -110, -112, -111, -113, -112, -115, -112,
-114, -108, -108, -75, 23, 35, 51, 60, 68, 70, 68, 61, 53, 42, 36, 30, 34, 37,
56, 46, -24, -9, -3, 1, -2, -9, -19, -30, -40, -46, -51, -48, -47, -36, -39, -7,
79, 74, 71, 64, 58, 49, 44, 38, 36, 31, 33, 26, 28, 18, 22, -14, -103, -102,
-107, -103, -103, -98, -96, -90, -91, -90, -95, -94, -102, -99, -109, -78, 10,
10, 21, 23, 27, 25, 23, 16, 10, 3, 5, 6, 19, 30, 60, 53, -8, 18, 28, 37, 35, 30,
17, 6, -9, -18, -27, -28, -33, -24, -31, 4, 85, 78, 78, 72, 69, 62, 61, 58, 61,
59, 61, 55, 56, 42, 45, 1, -91, -93, -105, -107, -111, -109, -110, -106, -107,
-102, -103, -99, -99, -86, -88, -40, 55, 64, 82, 92, 103, 104, 102, 94, 86, 74,
69, 62, 66, 66, 87, 64, -4, 13, 14, 18, 10, 1, -15, -27, -42, -48, -55, -54,
-54, -43, -50, -9, 71, 61, 60, 51, 46, 38, 34, 29, 30, 28, 31, 26, 30, 20, 28,
-17, -97, -91, -96, -91, -91, -83, -82, -77, -79, -79, -86, -88, -99, -98, -114,
-75, 4, -6, 3, -1, -2, -10, -17, -31, -40, -52, -54, -57, -46, -40, -10, -32,
-88, -61, -55, -46, -51, -54, -66, -77, -90, -95, -102, -98, -98, -84, -89, -38,
42, 36, 42, 40, 44, 43, 49, 50, 58, 62, 69, 67, 72, 60, 68, 15, -66, -63, -74,
-74, -77, -74, -74, -72, -71, -69, -69, -66, -65, -57, -52, -20, };

#endif /* AKWF_1287_512_H_ */
