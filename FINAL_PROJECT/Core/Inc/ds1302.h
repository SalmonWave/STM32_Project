#include "main.h"

#define ADDR_SECONDS 0x80 //write 정보만 define, read정보는 write정보+1


#define ADDR_MINUTES 0x82
#define ADDR_HOURS 0x84
#define ADDR_DATE 0x86
#define ADDR_MONTH 0x88
#define ADDR_DAYOFWEEK 0x8a
#define ADDR_YEAR 0x8c
#define ADDR_WRITEPROTECTED 0x8e
