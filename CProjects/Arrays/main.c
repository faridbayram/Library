#include <stdio.h>

#define SIZE 7

void printArray(const int b[SIZE], unsigned int size);

// function main begins program execution
int main(void)
{
    const int numbers[] = {1, 2, 3, 4};
    printArray(numbers, SIZE);

    int scanner;
    //scanf("%d", &scanner);
    return 0;
}

void printArray(const int b[], unsigned int size){
    for(unsigned int i = 0; i < size; i ++)
    {
        printf("element at position %u is : %d\n", i, b[i]);
    }
}