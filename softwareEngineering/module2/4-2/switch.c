#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("\n Enter Your Number: \n Press 1 for English \n Press 2 for Hindi \n Press 3 for Guj");
    scanf("%d",&num);
    
    switch(num)
    {
        case 1:
        printf("Your Language is English");
        break;
        
        case 2:
        printf("Your Language is Hindi");
        break;
        
        case 3:
        printf("Your Language is Gujarati");
        break;
    }
    
    
    return 0;
}