#include <stdio.h>
#include <limits.h>


int main(void)
{
    int n = 100;

    int i;
    for(i = 1; i <= n; i ++)
    {
        int k;

        for(k = i; k < n; k ++){
            printf("%s", " ");
        }

        for(k = 1; k <= i; k ++){
            printf("%s", "*");
        }

        for(k = 1; k < i; k ++){
            printf("%s", "*");
        }

        for(k = i; k < n; k ++){
            printf("%s", " ");
        }

        puts("");
    }

    for(i = n; i >= 1; i --)
    {
        int k;

        for(k = i; k <= n; k ++){
            printf("%s", " ");
        }

        for(k = i; k >= 2; k --){
            printf("%s", "*");
        }

        for(k = i; k > 2; k --){
            printf("%s", "*");
        }

        for(k = i; k < n; k ++){
            printf("%s", " ");
        }

        puts("");
    }

    scanf("%d", &n);
}