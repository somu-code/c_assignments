#include <stdio.h>

int factorial(int n) {
    int m = 1;
    for (int i = 1; i <= n; i++) {
        m = m * i;
    }
    return m;
}

int combination(int i, int k) {
    return factorial(i) / (factorial(k) * factorial((i - k)));
}

void print_pattern(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = n - i; j > 1; j--) {
            printf(" ");
        }
        for (int k = 0; k <= i; k++) {
            printf("%d ", combination(i, k));
        }
        printf("\n");
    }
}

int main(void) {
    int n = 4;
    print_pattern(n);
}
