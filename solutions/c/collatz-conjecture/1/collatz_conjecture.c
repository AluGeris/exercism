#include "collatz_conjecture.h"


int steps(int start) {
  if (start <= 0) return -1;
  int result = 0;
  for (;start != 1; result++) {
    if (!(start & 1))  start /= 2;
    else start = start * 3 + 1;
  }
  return result;
}
