#include <stdio.h>

int main()
{
    int num,sum=0,fdigit=0;
    
    printf("Enter Num: ");
    scanf("%d",&num);//1234
    int ldigit=num%10;
    while(num>0){
      if(num>9){
        num=num/10;
      }
      else{
        fdigit=num;
        num=num/10;
      }
    }
     int ans = fdigit+ldigit;
  
    
    printf("Sum is : %d",ans);

    return 0;

}