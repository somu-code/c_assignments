#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

void *memcpy_implementation(void *destination, const void *source,
                            size_t byte_count) {
    const uint8_t *src = source;
    uint8_t *dest = destination;
    while (byte_count--) {
        *dest++ = *src++;
    }
    return destination;
}

size_t byte_count_in_a_string(const char *string) {
    size_t i = 0;
    while (string[i] != '\0') {
        i++;
    }
    return i + 1;
}

int main(void) {
    char *string = "Hello, world!";
    size_t string_byte_count = byte_count_in_a_string(string);
    char *destination = malloc(string_byte_count);
    if (destination == NULL) {
        perror("malloc failed\n");
        exit(EXIT_FAILURE);
    }
    memcpy_implementation(destination, string, string_byte_count);
    printf("%s\n", destination);
    free(destination);
}
