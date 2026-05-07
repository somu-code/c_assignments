#include <stdio.h>

int custom_strlen(char *s) {
    char *p = s;
    while (*p != '\0') {
        p++;
    }
    return p - s;
}

int main(void) {
    printf("Length of the given string: %d\n", custom_strlen("Hello, world!"));
}
