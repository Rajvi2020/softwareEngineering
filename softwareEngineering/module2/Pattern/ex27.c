#include <stdio.h>

int main() {
    int i, j;

    for(i = 1; i <= 5; i++) {

        // Space print
        for(int space = 1; space <= 5 - i; space++) {
            printf(" ");
        }

        // Increasing numbers
        for(j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // // Decreasing numbers
        for(j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}