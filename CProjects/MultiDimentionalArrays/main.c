#include <stdio.h>

int main() {
    char fcs[23];
    scanf("%s", fcs);

    int i;
    for(i = 0; i < 50; i ++)
    {
        printf("%c\n", fcs[i]);
    }
    //printf(fcs, 5, 15);

    return 0;
}