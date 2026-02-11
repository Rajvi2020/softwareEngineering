// #include<stdio.h>
// int main(){
//   int sum=0,num,i,temp;
//   int lastdigit;
//   printf("enter a number");
//   scanf("%d",&num);
//   temp=num;
//   while(temp!=0){
//     lastdigit=temp%10;
//     sum=sum+lastdigit;
//     temp =temp/10;
//   }
//   printf("sum of all digits are %d" ,sum);
//   return 0;
  
// }
#include<stdio.h>
int main(){
  int sum=0,num;
  printf("entr number");
  scanf("%d",&num);
  while (
    num>0
  )
  {
    /* code */
    int rem=num%10;
    sum+=rem;
    num=num/10;
  }
  printf("sum of all digits are %d",sum);
  
  return 0;
}