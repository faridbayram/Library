#include <stdio.h>
#include <malloc.h>

void writeArray(char* ptr, int till){
    for(int i = 0; i < till; i++, ptr++){
        printf("%c", *ptr);
    }
}

int main() {
    char* string = "my name is farid";

    char* str = (char*) malloc(sizeof(char) * 20);

    for(int i = 0; i < 17; i ++){
        *(str+i) = *(string + i);
    }

    *(str+18) = "a"[0];
    *(str+19) = "b"[0];
    *(str+20) = "c"[0];
    *(str+21) = "d"[0];
    *(str+22) = "e"[0];
    *(str+23) = "f"[0];
    *(str+24) = "g"[0];

    writeArray(str, 100);
}



