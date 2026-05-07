#include <stdio.h>

int main(void) {
    int int_array[] = {0, 1, 2, 3, 4};
    int *p = int_array;
    for (int i = 0; i < 5; i++) {
        printf("%d", int_array[i]);  // array notation
    }
    printf("\n");
    for (int i = 0; i < 5; i++) {
        printf("%d", p[i]);  // array notation with pointer
    }
    printf("\n");
    for (int i = 0; i < 5; i++) {
        printf("%d", *(int_array + i));  // pointer notation with array
    }
    printf("\n");
    for (int i = 0; i < 5; i++) {
        printf("%d", *(p + i));  // pointer notation with pointer variable
    }
    printf("\n");
}
