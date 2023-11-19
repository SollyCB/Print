#define SOL_PRINT_IMPLEMENTATION
#include "print.h"

typedef struct {
    int x;
    int y;
} Thing;

int main() {
    s64 x = 182974987923;

    println("%zbi", x);
    println("%zib", x);
    println("%izb", x);

    return 0;
}
