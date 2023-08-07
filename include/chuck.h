#ifndef clox_chuck_h
#define clox_chuck_h

#include "common.h"

typedef enum {
    OP_RETURN,
} OpCode;

typedef struct {
    int count;
    int capacity;
    uint8_t *code;
} Chuck;

void initChuck(Chuck *chuck);
void freeChuck(Chuck *chuck);
void writeChuck(Chuck *chuck, uint8_t byte);

#endif
