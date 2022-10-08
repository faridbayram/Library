#include <stdio.h>

void printDiamond(int size);
void doSmth();

int main(void)
{
    long long int a = 1;
    short b = a;

    doSmth();

    printf("%hd\n", b);
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