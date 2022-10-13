#include <stdio.h>


unsigned long long int factorial(unsigned int number){
    if(number <= 1){
        return 1;
    }

    return number * factorial(number - 1);
}


int fibonaccies_last_index = -1;
unsigned long long int fibonaccies[100];

unsigned long long int fibonacci(unsigned int number){

    if(0 == number || 1 == number)
        return number;

    if((number - 2) < fibonaccies_last_index){
        return fibonaccies[number - 2] + fibonaccies[number - 1];
    }

    if((number - 2) == fibonaccies_last_index){
        return fibonaccies[number - 2] + fibonacci(number - 1);
    }

    return fibonacci(number - 2) + fibonacci(number - 1);
}


int main() {

    int i;
    for(i = 0; i <100; i ++)
    {
        unsigned long long int current_fibonacci = fibonacci(i);
        printf("fibonacci\t(%u) = %llu\n", i, current_fibonacci);
        fibonaccies_last_index = i;
        fibonaccies[fibonaccies_last_index] = current_fibonacci;
    }

    for(i = 0; i < 5; i ++){
        printf("%llu\n", fibonaccies[i]);
    }

    for(i = 1; i < 99; i ++){
        double golden_ratio = (double)fibonaccies[i + 1]/ (double)fibonaccies[i];
        printf("%d - %.10f\n", i, golden_ratio);
    }

    return 0;
}