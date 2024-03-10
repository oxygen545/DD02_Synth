#ifndef AKWF_1224_512_H_
#define AKWF_1224_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1224_512_NUM_CELLS 512
#define AKWF_1224_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1224_512_DATA [] = {3,
13, 23, 33, 43, 52, 61, 70, 77, 85, 91, 97, 102, 107, 112, 116, 119, 120, 122,
124, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126, 127, 126, 126,
125, 123, 123, 123, 122, 121, 120, 119, 118, 117, 116, 113, 113, 111, 110, 108,
107, 104, 102, 101, 99, 97, 95, 93, 91, 88, 85, 83, 82, 77, 72, 64, 57, 47, 37,
27, 15, 5, -5, -15, -24, -34, -42, -49, -56, -62, -68, -73, -77, -81, -83, -86,
-88, -90, -92, -93, -93, -94, -94, -94, -94, -95, -94, -93, -94, -93, -92, -91,
-91, -90, -90, -89, -87, -86, -85, -84, -82, -81, -79, -78, -75, -74, -72, -70,
-67, -66, -64, -61, -58, -56, -54, -52, -52, -54, -56, -59, -61, -64, -68, -71,
-73, -77, -80, -82, -85, -86, -86, -87, -88, -88, -87, -86, -84, -84, -83, -80,
-79, -76, -76, -73, -72, -70, -68, -67, -65, -64, -63, -61, -60, -59, -59, -57,
-57, -56, -56, -56, -56, -55, -56, -56, -55, -55, -57, -56, -57, -58, -58, -58,
-59, -60, -60, -61, -62, -62, -63, -64, -65, -65, -67, -68, -68, -70, -71, -71,
-72, -72, -74, -75, -75, -78, -79, -79, -80, -82, -82, -84, -84, -85, -86, -87,
-89, -89, -90, -92, -92, -92, -94, -94, -95, -95, -96, -97, -98, -98, -98, -99,
-100, -100, -100, -101, -101, -101, -101, -101, -101, -97, -93, -85, -76, -68,
-58, -48, -39, -29, -18, -10, -1, 7, 14, 19, 25, 29, 33, 37, 41, 43, 46, 48, 51,
54, 56, 58, 60, 62, 64, 67, 68, 71, 74, 76, 79, 82, 84, 85, 89, 90, 92, 94, 95,
96, 97, 97, 98, 98, 98, 98, 98, 97, 97, 97, 95, 95, 95, 92, 92, 91, 90, 88, 87,
86, 84, 81, 81, 78, 77, 75, 74, 72, 70, 68, 67, 65, 62, 61, 59, 57, 56, 53, 52,
51, 48, 45, 41, 36, 31, 26, 20, 14, 9, 3, -2, -7, -12, -17, -21, -26, -28, -31,
-34, -37, -38, -40, -41, -42, -44, -44, -45, -45, -45, -46, -45, -45, -44, -45,
-45, -46, -48, -50, -54, -56, -59, -63, -67, -70, -72, -74, -76, -78, -79, -80,
-81, -84, -86, -90, -94, -98, -101, -105, -109, -113, -116, -118, -121, -123,
-124, -125, -126, -126, -126, -125, -125, -125, -123, -122, -120, -119, -117,
-116, -114, -111, -110, -107, -106, -104, -102, -100, -99, -97, -95, -92, -92,
-91, -89, -87, -86, -84, -83, -82, -81, -81, -79, -78, -77, -76, -75, -74, -74,
-73, -72, -71, -70, -70, -70, -69, -69, -69, -68, -67, -68, -66, -67, -66, -67,
-66, -67, -68, -68, -70, -73, -74, -76, -78, -81, -84, -86, -88, -90, -92, -94,
-96, -98, -100, -101, -102, -103, -106, -107, -108, -108, -110, -111, -113,
-114, -114, -115, -116, -117, -116, -117, -117, -118, -118, -118, -118, -119,
-118, -119, -118, -119, -119, -119, -119, -118, -114, -108, -101, -91, -83, -72,
-62, -53, -44, -35, -26, -18, -9, -2, };

#endif /* AKWF_1224_512_H_ */