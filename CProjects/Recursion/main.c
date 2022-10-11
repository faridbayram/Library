#include <stdio.h>

unsigned long long int factorial(unsigned int number);
unsigned long long int fibonacci(unsigned int number);

int main() {
    unsigned int i;
    for(i = 0; i <= 30; i ++)
    {
        printf("fibonacci\t(%u) = %llu\n", i, fibonacci(i));
    }

    return 0;
}

unsigned long long int factorial(unsigned int number){
    if(number <= 1){
        return 1;
    }

    return number * factorial(number - 1);
}

unsigned long long int fibonacci(unsigned int number){
    if(0 == number || 1 == number)
        return number;

    return fibonacci(number - 2) + fibonacci(number - 1);
}