#include <stdio.h>

void printCharacters(const char *sPtr)
{
    for (; *sPtr != '\0'; ++sPtr) { // no initialization
        printf("%c", *sPtr);
    }
}

int main() {
    int x;
    int y;

    const int *const ptr;

    int size = sizeof ptr;
    printf("size of address(ptr) for this machine is : %d", size);
}


