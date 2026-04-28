#include <stdio.h>

int main(void) {
    FILE *fp;
    int c;
    fp = fopen("hello.txt", "r");
    if (fp == NULL) {
        printf("File does not exist\n");
        return 0;
    }
    while ((c = fgetc(fp)) != EOF) {
        printf("%c", c);
    }
    fclose(fp);
}
