#include <stdio.h>

size_t strlen_implentation(const char *string) {
    size_t len = 0;
    while (string[len] != '\0') {
        len++;
    }
    return len;
}

int main(void) {
    char *string = "Hello, world!";
    printf("Lenght of given string: %zu\n", strlen_implentation(string));
}
