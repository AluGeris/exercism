#include "binary.h"


int convert(const char *input) {
  int result = 0, x = 1;
  for (int i = strlen(input); i > 0; i--) {
    if (input[i - 1] != '0' && input[i - 1] != '1') return INVALID;
    if (input[i - 1] == '1') {
      result += x;
    }
    x = x << 1;
  }
  return result;
}
