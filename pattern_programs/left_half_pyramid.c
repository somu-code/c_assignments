#include <stdio.h>

void print_pattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int k = n - i; k > 0; k--) {
            printf("  ");
        }
        for (int j = i; j > 0; j--) {
            printf(" *");
        }
        printf("\n");
    }
}

int main(void) {
    int n = 5;
    print_pattern(n);
}
