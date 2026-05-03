#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *fp = fopen("output.bin", "rb");
    if (fp == NULL) {
        perror("fopen");
        return EXIT_FAILURE;
    }
    unsigned char c;
    while (fread(&c, sizeof(char), 1, fp) > 0) {
        printf("%d\n", c);
    }
    fclose(fp);
}
