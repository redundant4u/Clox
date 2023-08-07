#include <stdlib.h>

#include "chuck.h"
#include "memory.h"

void initChuck(Chuck *chuck) {
    chuck->count = 0;
    chuck->capacity = 0;
    chuck->code = NULL;
}

void freeChuck(Chuck *chuck) {
    FREE_ARRAY(uint8_t, chuck->code, chuck->capacity);
    initChuck(chuck);
}

void writeChuck(Chuck *chuck, uint8_t byte) {
    if (chuck->capacity < chuck->count + 1) {
        int oldCapacity = chuck->capacity;

        chuck->capacity = GROW_CAPACITY(oldCapacity);
        chuck->code =
            GROW_ARRAY(uint8_t, chuck->code, oldCapacity, chuck->capacity);
    }

    chuck->code[chuck->count] = byte;
    chuck->count++;
}
