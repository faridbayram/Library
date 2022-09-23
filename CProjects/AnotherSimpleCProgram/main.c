#include <stdio.h>
#include <stdlib.h>

int custom_pow(int number, int power){

    int result = 1;

    int i;
    for(i = 0; i < power; i ++)
    {
        result *= number;
    }

    return result;
}

int main() {
    int integer1;
    int integer2;

    printf("Enter first integer\n");   // prompt
    scanf("%d", &integer1);   // read an integer

    printf("Enter second integer\n");   // prompt
    scanf("%d", &integer2);   // read an integer

    int sum = integer1 + integer2;

    printf("Sum is %d\n", sum);

    printf("%d\n", custom_pow(5, 2));
    printf("%d\n", custom_pow(4, 6));

}
