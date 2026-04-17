#include <stdio.h>

void print_pattern(int n) {
    for (int i = n; i > 0; i--) {
        int j = 1;
        for (int k = 1; k <= i; k++) {
            printf("%d ", j);
            j++;
        }
        printf("\n");
    }
}

int main(void) {
    int n = 8;
    print_pattern(n);
}
