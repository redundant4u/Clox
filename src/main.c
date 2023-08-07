#include "chuck.h"
#include "common.h"
#include "debug.h"

int main(int argc, const char *argv[]) {
    Chuck chuck;

    initChuck(&chuck);
    writeChuck(&chuck, OP_RETURN);

    disassembleChuck(&chuck, "test chuck");
    freeChuck(&chuck);

    return 0;
}
