#ifndef AKWF_piano_0010_512_H_
#define AKWF_piano_0010_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_piano_0010_512_NUM_CELLS 512
#define AKWF_piano_0010_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_piano_0010_512_DATA []
= {0, 1, 3, 5, 6, 7, 8, 10, 12, 12, 15, 14, 17, 18, 20, 21, 22, 24, 25, 27, 28,
30, 31, 32, 34, 35, 38, 39, 41, 42, 43, 44, 46, 48, 49, 50, 52, 52, 54, 55, 57,
58, 59, 61, 62, 64, 64, 65, 66, 68, 69, 70, 71, 73, 73, 75, 77, 77, 79, 80, 80,
82, 83, 84, 86, 87, 88, 89, 89, 91, 91, 92, 94, 95, 95, 97, 97, 99, 100, 100,
100, 102, 103, 104, 105, 105, 106, 107, 108, 109, 109, 110, 111, 112, 113, 113,
113, 115, 115, 115, 117, 117, 118, 118, 118, 119, 119, 120, 121, 121, 122, 122,
122, 123, 123, 124, 125, 124, 126, 126, 126, 126, 127, 126, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
127, 127, 127, 127, 127, 126, 126, 126, 125, 125, 125, 123, 124, 124, 122, 123,
122, 121, 122, 119, 120, 120, 119, 118, 117, 116, 116, 115, 114, 113, 112, 111,
111, 110, 110, 108, 107, 106, 105, 105, 103, 102, 101, 100, 99, 98, 96, 96, 95,
93, 92, 91, 90, 89, 88, 87, 85, 84, 83, 81, 81, 78, 77, 76, 74, 73, 72, 71, 69,
67, 66, 64, 62, 62, 60, 59, 56, 56, 54, 53, 50, 49, 48, 47, 45, 43, 42, 40, 39,
37, 35, 34, 32, 31, 30, 27, 26, 25, 23, 22, 20, 19, 17, 16, 14, 12, 11, 9, 8, 6,
4, 3, 1, 0, -1, -3, -5, -6, -9, -9, -11, -12, -14, -16, -17, -18, -19, -22, -23,
-25, -26, -27, -28, -30, -32, -33, -34, -36, -37, -39, -41, -42, -42, -44, -45,
-46, -48, -49, -50, -52, -53, -54, -56, -57, -57, -59, -61, -63, -63, -64, -65,
-66, -67, -68, -70, -71, -72, -73, -74, -75, -75, -78, -78, -80, -80, -82, -81,
-83, -84, -84, -86, -86, -87, -88, -88, -90, -90, -92, -91, -93, -94, -94, -95,
-96, -96, -97, -97, -99, -99, -99, -100, -101, -101, -102, -102, -103, -103,
-104, -104, -105, -105, -105, -106, -106, -107, -107, -107, -108, -108, -108,
-108, -109, -109, -109, -110, -109, -110, -110, -111, -110, -111, -111, -111,
-110, -110, -111, -111, -111, -111, -111, -111, -111, -111, -111, -111, -111,
-111, -110, -110, -110, -110, -110, -109, -110, -110, -109, -109, -108, -108,
-108, -107, -106, -107, -106, -105, -106, -105, -105, -105, -104, -104, -103,
-103, -102, -102, -101, -100, -100, -99, -99, -98, -98, -97, -97, -97, -95, -94,
-94, -94, -92, -92, -91, -90, -89, -89, -88, -87, -86, -85, -84, -83, -82, -82,
-81, -79, -78, -78, -76, -76, -75, -74, -72, -71, -71, -69, -69, -67, -66, -65,
-64, -64, -61, -60, -59, -58, -57, -55, -54, -53, -53, -50, -49, -48, -47, -45,
-43, -43, -42, -41, -38, -37, -36, -34, -33, -31, -30, -28, -27, -26, -24, -23,
-22, -20, -19, -18, -16, -14, -14, -12, -11, -9, -8, -7, -5, -5, -3, -1, -1, };

#endif /* AKWF_piano_0010_512_H_ */
