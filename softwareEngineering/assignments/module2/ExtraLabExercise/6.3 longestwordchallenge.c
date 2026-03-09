#include<stdio.h>
#include<string.h>

int main()
{
    char str[100], word[50], longest[50];
    int i, j = 0, words = 0, max = 0;

    printf("Enter a sentence: ");
    gets(str);

    for(i = 0; ; i++)
    {
        if(str[i] != ' ' && str[i] != '\0')
        {
            word[j++] = str[i];   // word build kare chhe
        }
        else
        {
            word[j] = '\0';       // word end

            if(j > 0)
            {
                words++;          // word count

                if(j > max)       // longest word check
                {
                    max = j;
                    strcpy(longest, word);
                }
            }

            j = 0;  // next word mate reset

            if(str[i] == '\0')
                break;
        }
    }

    printf("Number of words = %d\n", words);
    printf("Longest word = %s", longest);

    return 0;
}