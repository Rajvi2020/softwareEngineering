#include <stdio.h>

int length(char str[])
{
    int i = 0;

    while(str[i] != '\0')
    {
        i++;
    }

    return i;
}

int main()
{
    char str[100];

    printf("Enter string: ");
    scanf("%s", str);

    printf("Length = %d", length(str));

    return 0;
}