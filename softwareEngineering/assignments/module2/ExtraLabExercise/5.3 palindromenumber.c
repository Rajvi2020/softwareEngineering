
#include <stdio.h>

// Function to check if a number is palindrome
int isPalindromeNumber(int num) {
    int original = num, reversed = 0, remainder;

    while (num > 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    if (original == reversed)
        return 1; // palindrome
    else
        return 0; // not palindrome
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPalindromeNumber(number))
        printf("%d is a palindrome number.\n", number);
    else
        printf("%d is not a palindrome number.\n", number);

    return 0;
}