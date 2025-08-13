#include "grains.h"

uint64_t square(uint8_t index) {
    if (!index || index > 64) return 0;
    uint64_t one = 1;
    return one << (index - 1);
}

uint64_t total(void) {
    return 18446744073709551615ull;
}