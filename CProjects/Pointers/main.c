#include <stdio.h>

int main()
{
    const char* suit[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};


    for(int i = 0; i < 4; i ++){
        printf("%c", *(suit[i] + i));
    }
}