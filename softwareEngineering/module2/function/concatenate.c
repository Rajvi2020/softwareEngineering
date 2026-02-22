#include <stdio.h>

void concatenate(char str1[], char str2[]) {
    int i = 0, j = 0;

    // Find end of first string
    while(str1[i] != '\0') {
        i++;
    }
 str1[i] = ' ';
    i++;
    // Copy second string into first string
    while(str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }

    // Add null character at end
    str1[i] = '\0';
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    concatenate(str1, str2);

    printf("Concatenated string: %s", str1);

    return 0;
}