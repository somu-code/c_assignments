#include <stdio.h>

void print_pattern(int n) {
    for (int i = 0; i < n; i++) {
        int j = 1;
        for (int k = 0; k <= i; k++) {
            printf("%d ", j);
            j++;
        }
        printf("\n");
    }
}

int main(void) {
    int n = 4;
    print_pattern(n);
}
