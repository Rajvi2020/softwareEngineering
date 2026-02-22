#include <stdio.h>

// Function to convert uppercase to lowercase and vice versa
void toggleCase(char str[])
{
    int i = 0;

    while (str[i] != '\0')
    {
        // If character is uppercase
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;   // Convert to lowercase
        }
        // If character is lowercase
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;   // Convert to uppercase
        }

        i++;
    }
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    gets(str);   // Taking input

    toggleCase(str);   // Function call

    printf("After toggling case: %s", str);

    return 0;
}