#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *fp;
    int c;
    fp = fopen("hello.txt", "r");
    if (fp == NULL) {
        perror("fopen");
        return EXIT_FAILURE;
    }
    while ((c = fgetc(fp)) != EOF) {
        printf("%c", c);
    }
    fclose(fp);
}
