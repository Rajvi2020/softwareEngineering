#include<stdio.h>
#include<conio.h>
int main()
{
    char c;
    printf("\n Enter Your Character: From A to Z");
    scanf("%c",&c);
    
    switch(c)
    {
        case 'A':printf("It's a Vowel");
        break;
        
        case 'E':printf("It's a Vowel");
        break;
        
        case 'I':printf("It's a Vowel");
        break;
        
        case 'O':printf("It's a Vowel");
        break;
        
        case 'U':printf("It's a Vowel");
        break;
        
        default: printf("It's a Consonant");
        break;
        
    }
    
    return 0;
}