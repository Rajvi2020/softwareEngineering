#include <stdio.h>

int main()
{
    int num,rev=0;
    
    printf("Enter Num: ");
    scanf("%d",&num);//1234
    while(num>0){
      int rem=num%10;
      rev=rev*10+rem;
      num=num/10;
    }
      printf("reverse num is : %d ",rev);
}