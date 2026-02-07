#include <stdio.h>

int main()
{
  
    int num;
    printf("Enter Your Number");
    scanf("%d",&num);//5
    
    for(int i=1;i<=10;i++)
    {
        int ans = num*i;
        printf("\n %d * %d = %d",num,i,ans);
    }
  

    return 0;
}