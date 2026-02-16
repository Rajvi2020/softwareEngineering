#include <stdio.h>

int main() {
    int rows, i, j, k;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        // Loop to print leading spaces
        for (j = i; j < rows; j++) {
            printf(" ");
        }

        // Loop to print stars
        for (k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}

