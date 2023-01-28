#include <stdio.h>

void displayBits(unsigned int value){
    printf("%10u = ", value);

    for(int i = 1; i <= 32; i ++){
        char left = value << 1 >> 1 == value ? '0' : '1';
        putchar(left);

        if(i % 8 == 0)
            putchar(' ');

        value <<= 1;
    }
}

int main() {
    unsigned int x; // variable to hold user input

    printf("%s", "Enter a nonnegative int: ");
    scanf("%u", &x);

    displayBits(x);
}
