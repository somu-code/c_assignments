#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *fp;
    fp = fopen("whales.txt", "r");
    if (fp == NULL) {
        perror("fopen");
        exit(1);
    }
    char name[1024];
    float mass;
    int length;
    while (fscanf(fp, "%s %f %d", name, &mass, &length) == 3) {
        printf("%-8s whale, %.1f tonnes, %-3d meters\n", name, mass, length);
    }
    fclose(fp);
}
