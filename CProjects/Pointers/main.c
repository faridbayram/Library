#include <stdio.h>

void myFunc(int *arrPtr){
    for(int i = 0; i < 3; i ++)
    {
        arrPtr[i] = i + 1;
    }

    int newArray[] = {5,4,3};
    arrPtr = newArray;
}

void printArray(int arr[]){
    for(int i = 0; i < 3; i ++)
    {
        printf("%d\t", arr[i]);
    }
    puts("");

    arr[2] = 2;
    int someOtherArr[] = {1,1,1,1,11,1};
    arr = someOtherArr;
}

void f(int *ptr){
    *ptr = 15;
    int a = 1;
}

int main() {
    int i = 3;
    printf("%d\n", i);
    const int *iPtr = &i;
    int k = 3;
    iPtr = &k;

    f(iPtr);
    printf("%d\n", i);

}


