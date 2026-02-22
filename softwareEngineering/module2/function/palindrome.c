#include <stdio.h>
#include <string.h>

int checkPalindrome(char str[]) {
    int i, length;

    length = strlen(str);

    for(i = 0; i < length / 2; i++) {
        if(str[i] != str[length - i - 1]) {
            return 0;   // Not Palindrome
        }
    }
    return 1;   // Palindrome
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    if(checkPalindrome(str))
        printf("String is Palindrome");
    else
        printf("String is Not Palindrome");

    return 0;
}