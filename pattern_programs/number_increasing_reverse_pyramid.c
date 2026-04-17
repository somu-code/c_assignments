#include <stdio.h>

int main(void) {
    for (int i = 4; i > 0; i--) {
        int j = 1;
        for (int k = 1; k <= i; k++) {
            printf("%d ", j);
            j++;
        }
        printf("\n");
    }
}
