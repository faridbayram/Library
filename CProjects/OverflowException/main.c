#include <stdio.h>
#include <limits.h>
#include <malloc.h>

int main() {
    int* ptr = (int*) malloc (sizeof (int));
    *ptr = 3;


}
