#include <stdio.h>

void reverseString(char str[])
{
    int i = 0;
    int length = 0;
    char temp;

   
    while (str[length] != '\0')
    {
        length++;
    }

   
    
    for (i = 0; i < length / 2; i++)
    {
        temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    reverseString(str);

    printf("Reversed string: %s", str);

    return 0;
}