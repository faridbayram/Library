#include <stdio.h>
#include <dos.h>
#include <unistd.h>
#include <limits.h>

int main(){
    int a = 10; // use unary plus operator
    int b = (-a); // It does not change the operand value
    printf (" The value of a: %d \n", a);
    printf (" The value of b: %d \n", b);
    return 0;
}