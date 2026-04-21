#include <stdio.h>

void print_pattern(int n) {
    for (int i = n; i > 0; i--) {
        for (int j = i; j > 0; j--) {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = 1; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

int main(void) {
    int n = 4;
    print_pattern(n);
}
