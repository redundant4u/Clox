#ifndef clox_debug_h
#define clox_debug_h

#include "chuck.h"

void disassembleChuck(Chuck *chuck, const char *name);
int disassembleInstruction(Chuck *chuck, int offset);

#endif
