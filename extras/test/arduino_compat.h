#ifndef _ARDUINO_COMPAT_H
#define _ARDUINO_COMPAT_H

#include <stdio.h>
#include <stdlib.h>
//#include <sys/types.h>
//#include <sys/stat.h>
#include <fcntl.h>

#include <ctype.h>

#include <string.h>

#include <iostream>
using namespace std;

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned long uint32_t;
typedef bool boolean;
typedef iostream Stream;

#endif
