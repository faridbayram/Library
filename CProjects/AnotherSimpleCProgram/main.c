#include <stdio.h>
#include <dos.h>
#include <unistd.h>

int main(){
    double weight;
    double height;

    printf("%s", "Enter your weight (in kilograms) :");
    scanf("%lf", &weight);

    printf("%s", "Enter your height (in meters) :");
    scanf("%lf", &height);

    double bmi = weight / (height * height);

    printf("Your BMI index is, %lf\n\n", bmi);

    puts("BMI VALUES");
    puts("Underweight: less than 18.5");
    puts("Normal:      between 18.5 and 24.9");
    puts("Overweight:  between 25 and 29.9");
    puts("Obese:       30 or greater");
}