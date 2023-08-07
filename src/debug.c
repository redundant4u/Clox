#include <stdio.h>

#include "debug.h"

void disassembleChuck(Chuck *chuck, const char *name) {
    printf("== %s ==\n", name);

    for (int offset = 0; offset < chuck->count;) {
        offset = disassembleInstruction(chuck, offset);
    }
}

static int simpleInstruction(const char *name, int offset) {
    printf("%s\n", name);
    return offset + 1;
}

int disassembleInstruction(Chuck *chunk, int offset) {
    printf("%04d ", offset);

    uint8_t instruction = chunk->code[offset];

    switch (instruction) {
    case OP_RETURN:
        return simpleInstruction("OP_RETURN", offset);
    default:
        printf("Unknown opcode %d\n", instruction);
        return offset + 1;
    }
}
