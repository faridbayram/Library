#include <stdio.h>

union number {
    int x;
    char* y;
    char t[40];
};

int main()
{
    union number value;

    value.x = 100;
    printf("%s\n%s\n%s\n %d\n\n%s\n %s\n\n\n",
           "Put 100 in the integer member",
           "and print both members.",
           "int:", value.x,
           "double:", value.y);

    value.y = "my name is farid";
    printf("%s\n%s\n%s\n %d\n\n%s\n %s\n",
           "Put 100.0 in the floating member",
           "and print both members.",
           "int:", value.x,
           "double:", value.y);
}