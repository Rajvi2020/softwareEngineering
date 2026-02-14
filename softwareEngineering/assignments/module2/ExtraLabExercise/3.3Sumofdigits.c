#include<stdio.h>
int main(){
 
 int num,sum=0;
 printf("enter a number");
 scanf("%d",&num);
 while(num>0){
  int lastdigit=num%10;
   sum=sum+lastdigit;
   num=num/10;
  
 }
 printf("sum of digits are %d",sum);

  return 0;
}