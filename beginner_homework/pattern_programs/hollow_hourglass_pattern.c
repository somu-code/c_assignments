#include <stdio.h>

void print_pattern(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        for (int k = 0; k < n - i; k++) {
            if (i == 0) {
                printf("* ");
            } else if (k == 0 || k == n - i - 1) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = n - i - 2; j > 0; j--) {
            printf(" ");
        }
        for (int k = 0; k < i + 2; k++) {
            if (k == 0 || k == i + 1) {
                printf("* ");
            } else if (i == 2) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}

int main(void) {
    int n = 4;
    print_pattern(n);
}
