#include <stdio.h>
#include <string.h>

void reverseString(char str[])
{
    int i;
    int length = strlen(str);
    char temp;

    for(i = 0; i < length / 2; i++)
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