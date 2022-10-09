#include <stdio.h>

int x = 1;


void useGlobal(void)
{
    printf("\nglobal x is %d on entering useGlobal\n", x);
    x *= 10;
    printf("global x is %d on exiting useGlobal\n", x);
}

void useStaticLocal(void)
{
    // initialized once
    static int x;
    printf("\nlocal static x is %d on entering useStaticLocal\n", x);
    ++x;
    printf("local static x is %d on exiting useStaticLocal\n", x);
}

int main() {
    useGlobal();
    useGlobal();

    useStaticLocal();
    useStaticLocal();
}
