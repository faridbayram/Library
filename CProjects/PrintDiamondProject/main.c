#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printDiamond(int size);
void doSmth();
void random();
void srandom();
void srandom_without_seed();
enum Status{ CONTINUE, WON, LOST };
int rollDice(void);

int main(void)
{
    srand(time(NULL));

    int myPoint;
    enum Status gameStatus;
    int sum = rollDice();

    switch (sum) {
        case 7:
        case 11:
            gameStatus = WON;
            break;
        case 2:
        case 3:
        case 12:
            gameStatus = LOST;
            break;
        default:
            gameStatus = CONTINUE;
            myPoint = sum;
            printf("Point is %d\n", myPoint);
            break;
    }

    while(CONTINUE == gameStatus){
        sum = rollDice();

        if(sum == myPoint){
            gameStatus = WON;
        }
        else{
            if(7 == sum){
                gameStatus = LOST;
            }
        }
    }

    if(WON == gameStatus){
        puts("Player wins");
    }
    else{
        puts("Player loses");
    }

    return 0;
}

void doSmth(){
    int max();
    int result = max();
    printf("%d\n", result);
}

void printDiamond(int size){
    int i;
    for(i = 1; i <= size; i ++)
    {
        int k;

        for(k = i; k < size; k ++){
            printf("%s", " ");
        }

        for(k = 1; k <= i; k ++){
            printf("%s", "*");
        }

        for(k = 1; k < i; k ++){
            printf("%s", "*");
        }

        for(k = i; k < size; k ++){
            printf("%s", " ");
        }

        puts("");
    }

    for(i = size; i >= 1; i --)
    {
        int k;

        for(k = i; k <= size; k ++){
            printf("%s", " ");
        }

        for(k = i; k >= 2; k --){
            printf("%s", "*");
        }

        for(k = i; k > 2; k --){
            printf("%s", "*");
        }

        for(k = i; k < size; k ++){
            printf("%s", " ");
        }

        puts("");
    }
}
int max(){
    return 5;
}
void random(){
    unsigned int i;
    for(i = 1; i <= 10; i ++)
    {
        printf("%10d", 1 + (rand() % 6));

        if(i % 5 == 0)
            puts("");
    }
}
void srandom(){
    unsigned int seed;
    printf("%s", "Enter seed:");
    scanf("%u", &seed);

    srand(time(NULL));

    unsigned int i;
    for(i = 1; i <= 20; i ++)
    {
        printf("%10d", 1 + (rand() % 6));

        if(i % 5 == 0)
            puts("");
    }
}
void srandom_without_seed(){

    srand(time(NULL));

    unsigned int i;
    for(i = 1; i <= 20; i ++)
    {
        printf("%10d", 1 + (rand() % 6));

        if(i % 5 == 0){
            puts("");
        }
    }
}
int rollDice(void){
    int die1 = 1 + (rand() % 6);
    int die2 = 1 + (rand() % 6);

    printf("Player rolled %d + %d = %d\n", die1, die2, die1 + die2);
    return die1 + die2;
}