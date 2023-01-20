#include <stdio.h>

int main()
{
    int b[5] = {1,2,3,4,5};
    int* bPtr;

    bPtr = b;

    for(int i = 0; i < 10; i ++)
    {
        printf("element at %d is : %d\n", i, *(bPtr + i));
    }
}
