#include "raindrops.h"
#include <stdio.h>
#include <string.h>


void convert(char result[], int drops) {
  char pling[6] = "", plang[6] = "", plong[6] = "";
  if ((drops % 3) == 0) sprintf(pling, "%s", "Pling");
  if ((drops % 5) == 0) sprintf(plang, "%s", "Plang");
  if ((drops % 7) == 0) sprintf(plong, "%s", "Plong");
  sprintf(result, "%s%s%s", pling, plang, plong);
  if (strcmp(result, "") == 0) sprintf(result, "%d", drops);
}
