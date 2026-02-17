#include<stdio.h>

int main()
{
    int i,j,num,space;
    
    printf("Enter Num of Rows:");
    scanf("%d",&num);//5
    
    for(i=1;i<=5;i++)
    {
        
        
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=5;i>=1;i--){
      for(j=1;j<=i;j++){
        printf("*");
      }
      printf("\n");
    }

    return 0;
}