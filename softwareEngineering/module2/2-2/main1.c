#include<stdio.h>
#include<conio.h>
int main()
{
   int num;
   
   printf("Enter Your Number");
   scanf("%d",&num);
   
    if(num<0)
    {
        printf("Negative");
    }
    else
    {
        printf("Positive");
    }
    
    
    return 0;
}