#include <stdio.h>

void print_pattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= i; k++) {
            printf("%d ", i);
        }
        printf("\n");
    }
}

int main(void) {
    int n = 4;
    print_pattern(n);
}
