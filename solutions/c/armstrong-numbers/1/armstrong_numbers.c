#include "armstrong_numbers.h"

bool is_armstrong_number(int n) {
  int count = 0, sum = 0, temp = n, x, y;
  while (temp > 0) {
    count += 1;
    temp /= 10;
  }
  temp = n;
  while (temp > 0) {
    x = temp % 10;
    y = x;
    for (int i = count - 1; i > 0; i--) {
      x *= y;
    }
    sum += x;
    temp /= 10;
  }
  return sum == n;
}