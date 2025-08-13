#include "perfect_numbers.h"
#include <math.h>

int aliquot_sum(int number) {
  int sum = 1;
  for (int i = 2; i <= sqrt((double)number); i++) {
    if (number % i == 0) {
      sum += i;
      if (number / i != i) sum += number / i;
    }
  }
  return sum;
}

int classify_number(int number) {
  if (number < 1) return ERROR;
  if (number == 1) return DEFICIENT_NUMBER;
  if (number == aliquot_sum(number)) return PERFECT_NUMBER;
  if (number < aliquot_sum(number)) return ABUNDANT_NUMBER;
  else return DEFICIENT_NUMBER;
}
