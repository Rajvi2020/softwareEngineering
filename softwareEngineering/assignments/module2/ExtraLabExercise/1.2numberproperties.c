#include <stdio.h>

int main() {
    int num;

    // 1. Take input from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // 2. Check if even or odd
    if (num % 2 == 0) {
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
    }

    // 3. Check if positive, negative, or zero
    if (num > 0) {
        printf("The number is positive.\n");
    } else if (num < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }

    // 4. Check if multiple of both 3 and 5
    if (num % 3 == 0 && num % 5 == 0) {
        printf("The number is a multiple of both 3 and 5.\n");
    } else {
        printf("The number is NOT a multiple of both 3 and 5.\n");
    }

    return 0;
}
