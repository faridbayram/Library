#include <stdio.h>
#include <limits.h>

int main(void)
{
    //int x, y, z;
    //int entered_items_count = scanf("%d%d%d", &x, &y, &z);

    //int a;
    //while((a = getchar()) != EOF){
    //    printf("%d\n", a);
    //}

    unsigned int sum = 0, count = 0;
    int i;
    for(i = 1; i <= 99; i += 2){
        sum += i;
        count += 1;
    }

    printf("sum is : %d\n", sum);
    printf("count is : %d\n", count);

    double d = 333.546372;

    printf("right justified -> %20f\n", d);
    printf("right justified -> %20.4f\n", d);
    printf("left justified -> %-20.4f\n", d);


    for(i = 1; i <= 20; i ++){
        if(i % 5 == 0){
            printf("%d\n", i);
        }
        else{
            printf("%d\t", i);
        }
    }

    for (double y = 0.1; y != 1.0; y += 0.1) {
        printf("%f\n", y);
    }
}

