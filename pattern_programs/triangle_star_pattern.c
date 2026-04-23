#include <stdio.h>

void print_pattern(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = n - i - 1; j > 0; j--) {
            printf(" ");
        }
        for (int k = 0; k <= i; k++) {
            printf("* ");
        }
        printf("\n");
    }
}

int main(void) {
    int n = 5;
    print_pattern(n);
}
