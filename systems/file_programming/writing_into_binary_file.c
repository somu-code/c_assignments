#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *fp = fopen("output.bin", "wb");
    if (fp == NULL) {
        perror("fopen");
        return EXIT_FAILURE;
    }
    unsigned char bytes[6] = {0, 1, 2, 3, 4, 5};
    fwrite(bytes, sizeof(char), 6, fp);
    fclose(fp);
}
