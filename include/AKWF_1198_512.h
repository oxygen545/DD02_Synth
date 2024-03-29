#ifndef AKWF_1198_512_H_
#define AKWF_1198_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1198_512_NUM_CELLS 512
#define AKWF_1198_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1198_512_DATA [] =
{17, 30, 26, 29, 27, 29, 25, 45, 50, 49, 48, 50, 49, 52, 46, 60, 81, 77, 78, 78,
78, 78, 77, 81, 110, 110, 110, 110, 110, 110, 109, 110, 110, 111, 109, 111, 110,
110, 108, 111, 108, 113, 126, 126, 126, 127, 126, 126, 125, 127, 126, 127, 126,
126, 125, 126, 125, 126, 126, 127, 126, 125, 127, 126, 126, 125, 126, 125, 127,
124, 127, 100, 72, 77, 74, 78, 78, 79, 77, 78, 76, 76, 76, 75, 76, 76, 75, 75,
76, 76, 74, 78, 57, 43, 48, 44, 48, 45, 48, 45, 56, 61, 61, 60, 60, 61, 60, 61,
61, 61, 61, 60, 61, 62, 59, 63, 38, 29, 32, 31, 32, 31, 33, 30, 32, 31, 32, 31,
32, 31, 31, 32, 31, 32, 31, 45, 50, 48, 48, 48, 49, 48, 48, 50, 52, 51, 51, 51,
51, 51, 51, 51, 51, 50, 45, 47, 45, 47, 44, 49, 33, 15, 17, 17, 17, 16, 15, 18,
15, 21, 34, 32, 33, 30, 32, 29, 34, 13, -4, 2, -3, -1, -3, 0, -2, -1, -2, -1,
-1, -1, -1, -1, -1, -1, -3, -5, -2, -4, 1, -32, -55, -50, -53, -51, -52, -50,
-52, -51, -52, -51, -52, -52, -52, -51, -52, -51, -52, -51, -51, -52, -52, -51,
-52, -52, -50, -78, -85, -82, -73, -64, -68, -65, -67, -66, -67, -66, -66, -66,
-65, -67, -65, -69, -50, -34, -38, -36, -38, -37, -38, -35, -35, -34, -34, -34,
-34, -34, -9, -5, -6, -6, -6, -5, -5, 12, 14, 14, 14, 14, 12, 15, 12, 32, 46,
42, 44, 42, 44, 42, 42, 43, 44, 43, 42, 43, 43, 42, 42, 42, 43, 43, 43, 43, 41,
44, 42, 44, 41, 49, 60, 59, 58, 56, 57, 57, 57, 57, 57, 56, 56, 56, 57, 56, 58,
51, 23, 25, 23, 25, 25, 24, 25, 25, 26, 24, 25, 23, 25, -12, -29, -24, -27, -23,
-24, -23, -24, -23, -25, -26, -28, -28, -28, -29, -28, -29, -29, -28, -28, -27,
-52, -59, -55, -59, -56, -57, -56, -58, -46, -42, -43, -43, -42, -43, -43, -43,
-43, -43, -43, -43, -43, -43, -43, -45, -70, -72, -71, -72, -72, -73, -72, -71,
-71, -72, -71, -73, -71, -71, -68, -70, -68, -70, -67, -53, -52, -53, -52, -52,
-51, -53, -51, -52, -52, -53, -52, -52, -52, -52, -52, -52, -52, -53, -55, -54,
-55, -53, -56, -51, -73, -86, -83, -85, -83, -83, -83, -83, -85, -75, -65, -68,
-68, -69, -68, -69, -69, -69, -69, -68, -70, -69, -69, -69, -69, -69, -69, -69,
-70, -69, -69, -69, -70, -69, -70, -69, -68, -67, -68, -107, -119, -115, -118,
-117, -117, -116, -118, -116, -118, -116, -117, -116, -117, -116, -118, -116,
-118, -115, -118, -114, -121, -102, -81, -86, -84, -86, -84, -84, -71, -67, -68,
-68, -68, -67, -67, -65, -65, -65, -64, -66, -64, -67, -41, -35, -37, -36, -36,
-38, -30, 0, -3, -1, -2, -1, -2, -3, };

#endif /* AKWF_1198_512_H_ */
