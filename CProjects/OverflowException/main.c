#include <stdio.h>
#include <limits.h>
#include <malloc.h>

double pow(double number, int exp){
    if(exp == 1)
        return number;

    return number * pow(number, exp - 1);
}

int main() {
    int result = pow(12, 7);
    printf("%d\n", result);

    return 0;
}
