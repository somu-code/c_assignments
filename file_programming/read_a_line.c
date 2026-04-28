#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *fp;
    fp = fopen("multi_line_text.txt", "r");
    if (fp == NULL) {
        perror("fopen");
        exit(1);
    }
    char s[1024];
    int line_count = 0;
    while (fgets(s, sizeof s, fp) != NULL) {
        printf("%d %s", ++line_count, s);
    }
    fclose(fp);
}
