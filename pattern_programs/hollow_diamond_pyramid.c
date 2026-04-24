#include <stdio.h>

void print_pattern(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = n - i; j > 1; j--) {
            printf(" ");
        }
        for (int k = 0; k <= i; k++) {
            if (k == 0 || k == i)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    for (int i = n - 2; i >= 0; i--) {
        for (int k = n - i - 1; k > 0; k--) {
            printf(" ");
        }
        for (int j = i; j >= 0; j--) {
            if (j == 0 || j == i)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}

int main(void) {
    int n = 4;
    print_pattern(n);
}
