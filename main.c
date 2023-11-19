#define SOL_PRINT_IMPLEMENTATION
#include "print.h"

typedef struct {
    int x;
    int y;
} Thing;

int main() {
    int x = 2;

    println("%zhi", x);
    println("%zih", x);
    println("%izh", x);

    return 0;
}
