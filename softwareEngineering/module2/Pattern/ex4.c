#include<stdio.h>
#include<conio.h>

int main()
{
    
    for(int i=1;i<=4;i++)//row
    {
        int num = i*2;
        for(int j=1;j<=i;j++)//col
        {
            
            printf("%d",num);  
          
        }
        printf("\n");
        
    }

    return 0;
}