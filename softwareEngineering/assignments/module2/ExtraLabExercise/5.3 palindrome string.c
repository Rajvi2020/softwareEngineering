#include <stdio.h>
#include <string.h>

// Function to check if a string is palindrome
int isPalindromeString(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;

    while (start < end) {
        if (str[start] != str[end])
            return 0; // not palindrome
        start++;
        end--;
    }

    return 1; // palindrome
}


int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str); // use gets(str) if you want spaces (deprecated)

    if (isPalindromeString(str))
        printf("%s is a palindrome string.\n", str);
    else
        printf("%s is not a palindrome string.\n", str);

    return 0;
}