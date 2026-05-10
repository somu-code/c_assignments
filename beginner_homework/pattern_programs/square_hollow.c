#include <stdio.h>

void print_pattern(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0)
                printf("*");
            else if (i == n - 1)
                printf("*");
            else if (i > 0 && i < n - 1) {
                if (j == 0)
                    printf("*");
                else if (j > 0 && j < n - 1)
                    printf(" ");
                else if (j == n - 1)
                    printf("*");
            }
        }
        printf("\n");
    }
}

int main(void) {
    int n = 8;
    print_pattern(n);
}
