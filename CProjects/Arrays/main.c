#include <stdio.h>

#define SIZE 15

int binarySearch(const int b[], int searchKey, unsigned int low, unsigned int high);

// function main begins program execution
int main(void)
{
    int a[SIZE];

    // create data
    for (unsigned int i = 0; i < SIZE; ++i) {
        a[i] = 2 * i;
    }

    int searchKey = 24;
    int result = binarySearch(a, searchKey, 0, SIZE - 1);

    printf("%d\n", result);
}

int binarySearch(const int b[], int searchKey, unsigned int low, unsigned int high){
    unsigned int middle = (low + high) / 2;
    if(b[middle] == searchKey){
        return middle;
    }

    if(low > high){
        return -1;
    }
    else if(b[middle] > searchKey){
        high = middle - 1;
    }
    else{
        low = middle + 1;
    }

    return binarySearch(b, searchKey, low, high);
}