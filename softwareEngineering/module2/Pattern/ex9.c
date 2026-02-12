
#include<stdio.h>
#include<conio.h>

int main()
{
    int choice,num=1,num2=97;
    //char c='A';
    printf("enter choice: ");
    scanf("%d",&choice);
    
    for(int i=1;i<=choice;i++)//row
    {
       
        for(int j=1;j<=i;j++)//col
        {
            
            printf("%c",num2);
            
          
        }
        num2++;
        printf("\n");
        
    }

    return 0;
}
