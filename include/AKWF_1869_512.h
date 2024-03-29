#ifndef AKWF_1869_512_H_
#define AKWF_1869_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1869_512_NUM_CELLS 512
#define AKWF_1869_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1869_512_DATA [] = {1,
6, 10, 15, 20, 24, 28, 31, 33, 38, 40, 42, 45, 48, 48, 51, 52, 53, 54, 54, 54,
54, 55, 53, 54, 53, 53, 52, 51, 49, 48, 48, 46, 45, 44, 42, 41, 40, 39, 38, 37,
36, 35, 34, 34, 33, 32, 32, 31, 31, 30, 30, 30, 30, 31, 31, 31, 31, 32, 33, 34,
34, 35, 36, 37, 38, 40, 41, 42, 43, 45, 47, 48, 50, 51, 53, 55, 57, 58, 60, 62,
64, 66, 68, 70, 72, 75, 77, 79, 80, 82, 84, 86, 88, 90, 92, 94, 96, 97, 99, 102,
103, 105, 106, 108, 109, 111, 113, 114, 115, 116, 117, 118, 119, 121, 122, 123,
123, 124, 124, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
127, 127, 127, 126, 127, 126, 125, 124, 123, 123, 122, 121, 120, 120, 119, 117,
117, 115, 115, 114, 112, 112, 110, 109, 108, 106, 106, 104, 103, 102, 101, 100,
98, 97, 96, 95, 93, 93, 91, 90, 89, 87, 88, 86, 84, 84, 83, 82, 81, 80, 79, 78,
77, 77, 76, 75, 74, 74, 73, 73, 73, 71, 72, 71, 70, 70, 70, 70, 70, 69, 69, 68,
69, 69, 69, 70, 69, 69, 69, 69, 69, 69, 69, 69, 70, 70, 70, 70, 70, 70, 69, 70,
70, 69, 68, 69, 68, 67, 67, 67, 65, 65, 64, 62, 61, 59, 57, 56, 52, 50, 48, 46,
42, 38, 35, 32, 28, 25, 20, 15, 12, 7, 3, -3, -7, -11, -17, -20, -24, -28, -32,
-35, -38, -42, -43, -46, -48, -49, -51, -52, -53, -53, -54, -54, -55, -54, -53,
-53, -53, -53, -51, -51, -49, -49, -47, -46, -44, -43, -42, -41, -40, -38, -38,
-37, -35, -35, -34, -33, -33, -33, -32, -31, -30, -31, -30, -31, -31, -31, -30,
-30, -32, -32, -32, -34, -34, -35, -36, -38, -39, -40, -40, -42, -44, -45, -46,
-48, -50, -51, -53, -55, -58, -59, -61, -63, -65, -66, -69, -70, -73, -75, -76,
-79, -81, -83, -85, -87, -88, -90, -92, -94, -96, -98, -99, -101, -103, -106,
-106, -108, -111, -110, -112, -114, -115, -116, -118, -119, -120, -121, -121,
-123, -124, -124, -125, -125, -127, -126, -127, -127, -127, -128, -127, -128,
-128, -128, -128, -127, -128, -127, -127, -127, -127, -125, -125, -124, -124,
-122, -122, -121, -121, -120, -118, -117, -116, -116, -115, -113, -112, -111,
-111, -109, -108, -106, -105, -104, -103, -102, -101, -100, -99, -97, -95, -95,
-93, -93, -91, -89, -89, -88, -86, -85, -85, -84, -82, -81, -81, -79, -78, -78,
-77, -76, -76, -74, -74, -73, -74, -72, -72, -71, -71, -70, -70, -69, -70, -69,
-69, -70, -69, -69, -68, -69, -69, -68, -69, -68, -69, -69, -69, -69, -70, -70,
-70, -70, -69, -70, -70, -70, -70, -70, -70, -69, -68, -68, -68, -68, -68, -66,
-66, -64, -63, -62, -61, -59, -57, -55, -53, -50, -48, -44, -42, -38, -34, -31,
-27, -23, -20, -15, -10, -6, -1, };

#endif /* AKWF_1869_512_H_ */
