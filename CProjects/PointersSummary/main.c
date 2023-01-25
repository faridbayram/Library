#include <stdio.h>

/*
void function_NonConstantPointer_To_NonConstantData(int* p){
    *p = 5;

    int x;
    p = &x;
}


void function_ConstantPointer_To_NonConstantData(int* const p){
    *p = 5;

    int x;
    p = &x; // As expected
}


void function_NonConstantPointer_To_ConstantData(const int* p){
    *p = 5; // As expected

    int x;
    p =  &x;
}


void function_ConstantPointer_To_ConstantData(const int* const p){
    *p = 5; // As expected

    int x;
    p = &x; // As expected
}
*/

void printArray(int* ptr, int size){
    for(int i = 0; i < size; ++i, ++ptr){
        printf("%d, ", *ptr);
    }
    puts("");
}

int main() {
    int numbers[] = {1,2,3,4,5};

    for(int i = 0; i < 5; i ++){
        printf("%d, ", numbers[i]);
    }
    puts("");

    printArray(numbers, 5);

    for(int i = 0; i < 5; i ++){
        printf("%d, ", numbers[i]);
    }
    puts("");

    char inp[100];
    gets(inp);
}
