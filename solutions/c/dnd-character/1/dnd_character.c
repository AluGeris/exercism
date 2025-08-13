#include "dnd_character.h"
#include <math.h>
#include <stdlib.h>

int ability(void) {
  return rand() % (18 - 3 + 1) + 3;
}

int modifier(int score) {
  return floor(((double)score - 10) / 2);
}

dnd_character_t make_dnd_character(void) {
  dnd_character_t newborn = { 
    .strength = ability(),
    .dexterity = ability(),
    .constitution = ability(),
    .intelligence = ability(),
    .wisdom = ability(),
    .charisma = ability(),
  };
  newborn.hitpoints = 10 + modifier(newborn.constitution);
  return newborn;
}
