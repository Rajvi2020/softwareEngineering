#include<stdio.h>
#include<conio.h>

int main()
{
    int choice,num=1;
    printf("enter choice: ");
    scanf("%d",&choice);
    
    for(int i=1;i<=choice;i++)//row
    {
       
        for(int j=1;j<=i;j++)//col
        {
            
          printf("%d",num);
          num++;
          
        }
        printf("\n");
        
    }

    return 0;
}