#include <stdio.h>

void arrayFunc(int *arrPtr){
    arrPtr[3] = 3;
}

int main() {
    int arr[5];

    arrayFunc(arr);

    for(int i = 0; i < 5; i ++){
        printf("%d\n", arr[i]);
    }
}
