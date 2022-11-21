#include <stdio.h>

#define RESULT_SIZE 17

char* isPalindromeRecursion(char text[], int leftIndex, int rightIndex){
    if(text[leftIndex] != text[rightIndex]){
        return "is not polindrome";
    }

    leftIndex ++;
    rightIndex --;

    if(leftIndex >= rightIndex)
        return "is polindrome    ";

    return isPalindromeRecursion(text, leftIndex + 1, rightIndex - 1);
}

char* isPalindrome(char text[], int leftIndex, int rightIndex){
    if(leftIndex >= rightIndex)
        return "invalid input    ";

    return isPalindromeRecursion(text, leftIndex, rightIndex);
}

void printIsPolindrome(const char* string){
    for(size_t i = 0; i < RESULT_SIZE; i ++){
        printf("%c",*(string + i));
    }
    puts("");
}

int main() {
    char* example1 = isPalindrome("radar", 0, 4);
    printIsPolindrome(example1);

    char* example2 = isPalindrome("able was i ere i saw elba", 0, 24);
    printIsPolindrome(example2);

    char* example3 = isPalindrome("a man a plan a canal panama", 0, 26);
    printIsPolindrome(example3);
}