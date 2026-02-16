
 
#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,space,num;
    
    printf("Enter Num: ");
    scanf("%d",&num);
    
    for(i=1;i<=num;i++)
    {
        for(space=i;space<num;space++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf(" *");
        }
        printf("\n");
    }

    return 0;
}






  





