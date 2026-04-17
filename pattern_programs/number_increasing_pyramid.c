#include <stdio.h>

int main(void) {
    for (int i = 0; i < 4; i++) {
        int j = 1;
        for (int k = 0; k <= i; k++) {
            printf("%d ", j);
            j++;
        }
        printf("\n");
    }
}
