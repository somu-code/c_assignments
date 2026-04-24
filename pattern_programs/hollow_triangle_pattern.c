#include <stdio.h>

void print_pattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = n - i; j > 0; j--) {
            printf(" ");
        }
        for (int k = 1; k <= i; k++) {
            if (i == 1 && k == 1) {
                printf("*");
            } else if (i == n) {
                printf("* ");
            } else if (k == 1 || k == i) {
                printf("* ");
            } else if (k != 1 || k != i) {
                printf("  ");
            }
        }
        printf("\n");
    }
}

int main(void) {
    int n = 5;
    print_pattern(n);
}
