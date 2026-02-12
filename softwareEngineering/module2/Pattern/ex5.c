#include<stdio.h>
#include<conio.h>

int main()
{
    
    for(int i=1;i<=4;i++)//row
    {
       
        for(int j=1;j<=i;j++)//col
        {
             int num = j*2;
            printf("%d",num);  
          
        }
        printf("\n");
        
    }

    return 0;
}