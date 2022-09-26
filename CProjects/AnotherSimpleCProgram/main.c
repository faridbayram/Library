#include <stdio.h>
#include <dos.h>
#include <unistd.h>

int main(){
    int i = 1;
    int count_of_students = 5;

    double currentGrade;
    double result = 0;

    while (i <= count_of_students){
        printf("Enter the grade of student %d :", i);

        scanf("%lf", &currentGrade);
        result += currentGrade;

        i ++;
    }

    result /= count_of_students;

    printf("Average grade is : %lf", result);

    return 0;
}