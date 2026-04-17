#include <stdio.h>

void print_pattern(int n) {
    int i = 1;
    for (int j = 0; j < n; j++) {
        for (int k = 0; k <= j; k++) {
            printf("%d ", i);
            i++;
        }
        printf("\n");
    }
}

int main(void) {
    int n = 4;
    print_pattern(n);
}
