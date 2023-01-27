#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct MathematicalOperation {
    int operand1;
    int operand2;
};

int main() {
    typedef struct MathematicalOperation mo;

    srand(time(NULL));

    mo mo1;
    mo1.operand1 = 5;
    mo1.operand2 = 15;

    mo mo2;
    mo2.operand1 = 32;
    mo2.operand2 = 24;

    mo moArr[2] = {mo1, mo2};
    mo* moPtr = moArr;

    for(int i = 0; i < 10; i ++, moPtr++){
        printf("operand1 : %d, operand2 : %d\n", moPtr->operand1, moPtr->operand2);
    }
}
