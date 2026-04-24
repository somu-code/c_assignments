#include <stdio.h>

void print_pattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < i; j++) {
            printf(" ");
        }
        for (int k = i; k <= n; k++) {
            printf("%d ", k);
        }
        printf("\n");
    }
    for (int i = n - 1; i > 0; i--) {
        for (int j = i; j > 1; j--) {
            printf(" ");
        }
        for (int k = i; k <= n; k++) {
            printf("%d ", k);
        }
        printf("\n");
    }
}

int main(void) {
    int n = 4;
    print_pattern(n);
}
