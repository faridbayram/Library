#include <stdio.h>

void function0(int a);
void function1(int b);
void function2(int c);

int main() {
    void (*f[3])(int) = {function0, function1, function2};

    printf("%s", "Enter a number between 0, 1 and 2 to the end :");
    int choice;
    scanf("%u", &choice);

    while(choice >= 0 && choice < 3){
        (*f[choice])(choice);

        printf("%s", "Enter a number between 0 and 2, 3 to end: ");
        scanf("%u", &choice);
    }
}

void function0(int a){
    printf("You entered %d so function0 was called\n\n", a);
}

void function1(int b){
    printf("You entered %d so function1 was called\n\n", b);
}

void function2(int c){
    printf("You entered %d so function2 was called\n\n", c);
}