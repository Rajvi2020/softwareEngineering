#include<stdio.h>
#include<conio.h>
int main()
{
    int age;
    printf("Enter Your Age:");
    scanf("%d",&age);
    
    if(age>=18)
    {
        printf("Eligible to vote");
        
        if(age>=60)
        {
             printf("Senior Citizen");
        }
        else
        {
             printf("Young Age");
        }
        
    }
    
    else
    {
        printf("Not Eligible to vote");
    }

    return 0;
}