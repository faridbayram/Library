#include <stdio.h>

struct MathematicalOperation {
    int operand1;
    int operand2;
};

int main() {
    struct MathematicalOperation op1;
    op1.operand1 = 5;
    op1.operand2 = 15;

    printf("sum of %d and %d is %d", op1.operand1, op1.operand2, op1.operand1 + op1.operand2);
}
