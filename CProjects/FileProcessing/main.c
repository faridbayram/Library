#include <stdio.h>
#include <sys/stat.h>
#include <time.h>

int main() {
    char filename[] = "clients.txt";
    struct stat filestat;

    if(stat(filename, &filestat) == 0) {
        printf("File size: %lld bytes\n", filestat.st_size);
        printf("File permissions: %o\n", filestat.st_mode & 0777);
        printf("File creation time: %s", ctime(&filestat.st_ctime));
        printf("File modification time: %s", ctime(&filestat.st_mtime));
    }
    else {
        printf("Failed to get file metadata.\n");
    }

    return 0;
}






/*int main() {
    FILE* cfPtr;
    char buffer[100];

    cfPtr = fopen("clients.txt", "w+");

    if(cfPtr == NULL){
        puts("File could not be opened");
        return -1;
    }

    fseek(cfPtr, 10, SEEK_SET);

    fread(buffer, 1, 10, cfPtr);

    printf("Data read from file: %s\n", buffer);

    fclose(cfPtr);

    int i;
    scanf("%d", &i);
    return 0;
}*/