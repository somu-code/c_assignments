#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n = 0;
    FILE* fp = fopen("output.txt", "w");
    if (fp == NULL) {
        perror("fopen");
        return EXIT_FAILURE;
    }
    fputc('A', fp);
    fputc('\n', fp);
    fputs("Hello, world!\n", fp);
    fprintf(fp, "Address of int variable n %p\n", (void*)&n);
    fclose(fp);
}
