#include "eliuds_eggs.h"


uint16_t egg_count(int display) {
  int result = 0;
  for (int i = sizeof(display) * 8 - 1; i >= 0; i--) { 
    if ((display >> i) & 1) result++;                  
  }                           
  return result;
}
