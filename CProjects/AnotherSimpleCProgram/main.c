#include <stdio.h>
#include <stdlib.h>

int main() {
    int integer1;
    int integer2;

    printf("Enter first integer\n");   // prompt
    scanf("%d", &integer1);   // read an integer

    printf("Enter second integer\n");   // prompt
    scanf("%d", &integer2);   // read an integer

    int sum;
    sum = integer1 + integer2;

    printf("Sum is %d\n", sum);
}
