#ifndef AKWF_stereo_0002_512_H_
#define AKWF_stereo_0002_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_stereo_0002_512_NUM_CELLS 1024
#define AKWF_stereo_0002_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_stereo_0002_512_DATA
[] = {1, -15, 5, -24, 9, -26, 13, -32, 18, -35, 21, -41, 26, -45, 29, -49, 33,
-54, 38, -59, 41, -62, 44, -67, 48, -72, 51, -77, 55, -81, 59, -85, 62, -90, 65,
-95, 68, -100, 71, -104, 76, -103, 77, -102, 80, -102, 83, -101, 85, -101, 83,
-100, 82, -99, 82, -99, 82, -98, 81, -98, 81, -98, 80, -98, 80, -98, 80, -97,
79, -97, 79, -97, 79, -97, 79, -96, 79, -96, 78, -96, 78, -96, 78, -95, 77, -95,
77, -94, 77, -95, 77, -94, 77, -95, 76, -94, 77, -94, 76, -94, 76, -93, 76, -94,
76, -94, 76, -93, 76, -93, 76, -94, 76, -94, 76, -93, 76, -93, 76, -93, 76, -93,
76, -94, 75, -93, 75, -93, 75, -93, 76, -94, 75, -92, 76, -93, 75, -93, 76, -92,
75, -93, 75, -93, 75, -93, 75, -93, 75, -93, 75, -93, 75, -92, 75, -92, 75, -92,
75, -93, 75, -92, 75, -92, 74, -93, 75, -92, 75, -93, 75, -91, 75, -93, 75, -92,
75, -93, 75, -92, 75, -93, 74, -92, 74, -92, 75, -92, 75, -93, 75, -93, 74, -92,
75, -93, 75, -93, 75, -93, 75, -93, 74, -92, 75, -93, 74, -92, 76, -93, 74, -93,
75, -93, 73, -92, 75, -92, 73, -93, 76, -92, 73, -92, 77, -93, 73, -93, 77, -92,
73, -93, 77, -91, 73, -93, 75, -92, 73, -93, 75, -92, 74, -94, 75, -90, 76, -95,
71, -88, 84, -101, 0, -24, 55, 94, 86, 95, 67, 95, 81, 92, 70, 91, 79, 90, 72,
89, 78, 88, 72, 86, 78, 86, 73, 84, 76, 84, 73, 83, 77, 83, 74, 80, 75, 81, 75,
79, 75, 79, 75, 79, 75, 79, 75, 77, 75, 78, 75, 77, 75, 76, 75, 76, 75, 75, 75,
75, 75, 75, 76, 75, 75, 74, 75, 73, 75, 74, 75, 74, 75, 73, 76, 72, 75, 73, 75,
73, 75, 73, 75, 72, 75, 72, 76, 72, 75, 71, 75, 71, 74, 71, 74, 71, 75, 71, 74,
70, 74, 71, 74, 70, 75, 70, 74, 71, 74, 70, 74, 70, 74, 70, 74, 70, 74, 69, 74,
69, 74, 69, 74, 69, 74, 70, 74, 69, 74, 69, 73, 69, 73, 69, 73, 68, 73, 68, 73,
68, 72, 68, 73, 68, 72, 67, 72, 68, 72, 67, 73, 67, 72, 67, 73, 67, 73, 67, 72,
67, 72, 67, 72, 67, 71, 66, 72, 67, 72, 66, 72, 66, 72, 66, 72, 66, 71, 66, 72,
66, 71, 67, 71, 66, 70, 65, 71, 66, 70, 66, 71, 66, 72, 65, 71, 65, 71, 65, 71,
65, 71, 65, 71, 66, 71, 65, 71, 65, 71, 65, 70, 65, 71, 65, 70, 65, 71, 65, 71,
64, 70, 64, 70, 64, 70, 64, 70, 64, 70, 64, 70, 64, 69, 64, 70, 63, 70, 63, 70,
64, 69, 63, 69, 64, 69, 64, 69, 64, 69, 64, 69, 63, 69, 64, 69, 62, 69, 64, 69,
63, 69, 64, 68, 63, 69, 63, 68, 62, 69, 63, 67, 63, 68, 64, 67, 63, 68, 62, 67,
62, 68, 63, 68, 62, 68, 62, 67, 62, 69, 62, 68, 63, 67, 62, 67, 63, 68, 61, 67,
63, 67, 61, 68, 63, 66, 59, 69, 66, -52, -37, -128, -128, -115, -121, -118,
-123, -112, -118, -113, -118, -108, -113, -108, -113, -104, -110, -104, -109,
-101, -107, -101, -107, -99, -105, -99, -103, -97, -103, -96, -101, -95, -100,
-94, -99, -93, -99, -91, -98, -92, -97, -91, -95, -91, -96, -90, -96, -90, -95,
-89, -94, -89, -94, -88, -93, -88, -94, -87, -93, -87, -93, -87, -92, -87, -92,
-86, -92, -86, -91, -86, -91, -86, -91, -86, -91, -86, -91, -85, -91, -85, -91,
-84, -91, -85, -90, -85, -89, -84, -90, -84, -90, -85, -89, -85, -90, -83, -90,
-84, -90, -84, -90, -84, -89, -84, -89, -84, -89, -84, -89, -84, -89, -84, -89,
-83, -89, -83, -90, -83, -89, -84, -89, -83, -89, -83, -89, -83, -88, -83, -83,
-84, -77, -84, -72, -83, -67, -83, -62, -83, -57, -84, -53, -83, -48, -83, -44,
-83, -38, -82, -34, -83, -28, -84, -25, -83, -21, -83, -16, -83, -12, -83, -8,
-83, -2, -83, 1, -83, 5, -83, 9, -83, 13, -83, 17, -83, 21, -83, 24, -83, 28,
-83, 32, -82, 36, -83, 39, -83, 42, -83, 45, -83, 49, -83, 53, -84, 55, -83, 58,
-83, 62, -83, 65, -83, 68, -84, 71, -83, 74, -84, 74, -83, 74, -83, 73, -83, 73,
-83, 72, -83, 72, -83, 72, -83, 71, -82, 71, -83, 70, -83, 70, -83, 69, -83, 69,
-83, 69, -83, 69, -83, 68, -84, 68, -83, 67, -83, 68, -83, 67, -83, 67, -83, 67,
-83, 67, -83, 67, -82, 66, -84, 66, -82, 66, -83, 67, -82, 66, -83, 67, -83, 66,
-83, 66, -83, 66, -83, 66, -83, 67, -83, 67, -83, 66, -83, 65, -83, 66, -83, 65,
-84, 65, -83, 66, -84, 65, -82, 66, -83, 65, -83, 66, -83, 65, -83, 66, -83, 65,
-82, 65, -82, 66, -83, 66, -83, 65, -84, 66, -82, 66, -83, 65, -83, 65, -83, 65,
-83, 65, -83, 65, -83, 64, -83, 65, -83, 66, -83, 65, -82, 65, -83, 66, -83, 65,
-83, 66, -84, 66, -83, 65, -83, 66, -84, 64, -84, 65, -83, 66, -83, 65, -83, 66,
-83, 65, -83, 65, -84, 66, -83, 65, -83, 65, -83, 65, -83, 65, -84, 65, -84, 66,
-83, 66, -83, 65, -84, 65, -83, 65, -83, 65, -83, 65, -83, 65, -83, 66, -84, 65,
-83, 66, -83, 65, -84, 65, -83, 65, -83, 65, -83, 65, -83, 66, -84, 66, -83, 66,
-83, 65, -83, 66, -84, 66, -83, 66, -83, 66, -84, 65, -83, 62, -84, 59, -83, 54,
-83, 52, -81, 48, -74, 44, -70, 40, -64, 36, -59, 32, -54, 29, -49, 25, -44, 20,
-39, 17, -34, 12, -30, 9, -25, 5, -20, 1, -16, -5, -11, -6, -6, -14, -2, -10, };

#endif /* AKWF_stereo_0002_512_H_ */
