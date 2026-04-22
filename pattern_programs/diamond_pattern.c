#include <stdio.h>

void print_pattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = n - i; j > 0; j--) {
            printf(" ");
        }
        for (int k = 1; k <= i; k++) {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = n - 1; i > 0; i--) {
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }
        for (int k = i; k > 0; k--) {
            printf("* ");
        }
        printf("\n");
    }
}

int main(void) {
    int n = 4;
    print_pattern(n);
}
