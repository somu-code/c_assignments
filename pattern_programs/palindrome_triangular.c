#include <stdio.h>

void print_pattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int l = n - i; l > 0; l--) {
            printf("  ");
        }
        for (int j = i; j > 0; j--) {
            printf(" %d", j);
        }
        for (int k = 2; k <= i; k++) {
            printf(" %d", k);
        }
        printf("\n");
    }
}

int main(void) {
    int n = 4;
    print_pattern(n);
}
