#include <stdio.h>

void print_pattern(int n) {
    for (int i = 0; i < n; i++) {
        for (int k = 1; k <= i; k++) {
            printf(" ");
        }
        for (int j = 0; j < n - 1; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

int main(void) {
    int n = 5;
    print_pattern(n);
}
