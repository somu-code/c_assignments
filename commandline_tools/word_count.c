#include <stdio.h>

int my_strlen(char *s) {
    int count = 0;
    while (s[count] != '\0') {
        count++;
    }
    return count;
}

int main(void) {
    char *s = "Hello";
    printf("Length of the given string is %d\n", my_strlen(s));
}
