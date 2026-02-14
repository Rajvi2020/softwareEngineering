#include<stdio.h>

int main()
{
    int i,j,num,space;
    
    printf("Enter Num of Rows:");
    scanf("%d",&num);//5
    
    for(i=1;i<=num;i++)
    {
        for(space=1;space<=num-i;space++)
        {
            printf("*");
        }
        
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }

    return 0;
}