#include <stdio.h>

int main(void) {
    int int_array[5] = {
        0, 1, 2, 3, 4,
    };
    int *int_pointer = &int_array[0];
    for (int i = 0; i < 5; i++) {
        printf("%d\n", *(int_pointer + i));
    }
}
