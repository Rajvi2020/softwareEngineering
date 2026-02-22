#include <stdio.h>

int countWords(char str[])
{
    int i = 0, count = 0;

    // Loop until end of string
    while(str[i] != '\0')
    {
        // If space male to word complete thay
        if(str[i] == ' ')
        {
            count++;
        }
        i++;
    }

    // Words = spaces + 1
    return count + 1;
}

int main()
{
    char str[100];

    printf("Enter a sentence: ");
    scanf("%[^\n]", str);   // space sathe input

    printf("Total words = %d", countWords(str));

    return 0;
}