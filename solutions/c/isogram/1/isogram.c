#include "isogram.h"
#include <stddef.h>

bool is_isogram(const char phrase[]) {
  if (phrase == NULL) { return false; }
  char c;
  int counters[26] = { 0 };
  for (int i = 0; phrase[i] != '\0'; i++) {
    c = phrase[i];
    if (c == 32 || c == 45) { continue; }
    if (c < 97) { c += 32; }
    counters[c - 97] += 1;
    if (counters[c - 97] > 1) { return false; }
  }
  return true;
}