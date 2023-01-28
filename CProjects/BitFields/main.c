#include <stdio.h>

typedef struct bitCard {
    unsigned int face : 4;
    unsigned int suit : 2;
    unsigned int color : 1;
} card;

typedef struct {
    int (*addFuncPtr)(int a, int b)
} func;

int add(int a, int b){
    return a + b;
}

int main() {
    card c;
    c.face = 5;
    c.face <<= 2;

    printf("%d\n", c.face);

    func myFunc;
    myFunc.addFuncPtr = &add;
    printf("%d", myFunc.addFuncPtr(5, 55));
}