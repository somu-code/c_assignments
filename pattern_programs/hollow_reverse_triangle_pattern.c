#include <stdio.h>

void print_pattern(int n) {
    for (int i = 0; i < n; i++) {
        if (i > 0) {
            for (int j = 0; j < i; j++) {
                printf(" ");
            }
        }
        for (int j = n - i; j > 0; j--) {
            if (i == 0 || i == n - 1) {
                printf("* ");
            } else if (j == 1 || j == n - i) {
                printf("* ");
            } else
                printf("  ");
        }
        printf("\n");
    }
}

int main(void) {
    int n = 5;
    print_pattern(n);
}
