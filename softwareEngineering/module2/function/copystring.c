#include <stdio.h>

void copyString(char str1[], char str2[])
{
    int i = 0;

    while(str1[i] != '\0')
    {
        str2[i] = str1[i];   // Copy character
        i++;
    }

    str2[i] = '\0';   // Add null character at end
}

int main()
{
    char str1[100], str2[100];

    printf("Enter string: ");
    scanf("%s", str1);

    copyString(str1, str2);

    printf("Copied string: %s", str2);

    return 0;
}