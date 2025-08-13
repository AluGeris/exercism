#include "armstrong_numbers.h"
#include <math.h>

bool is_armstrong_number(int n) {
  int sum = 0, temp = n, x;
  int count = (int)log10((double)n) + 1;
  while (temp > 0) {
    x = temp % 10;
    sum += pow(x, count);
    temp /= 10;
  }
  return sum == n;
}