#include<stdio.h>
int main(){

 int a,b;
 char op;
 printf("enter two numbers");
 scanf("%d %d" ,&a,&b);
 printf("enter operator");
 scanf(" %c",&op);

 switch (op)
 {
 case '+':
   printf("Result= %d",a+b);
  break;
 
  case '-':
   printf("Result= %d",a-b);
  break;
  case '*':
   printf("Result= %d",a*b);
  break;
  case '/':
   printf("Result= %d",a/b);
  break;
  case '%':
   printf("Result= %d",a%b);
  break;

 default:printf("invalid operator");
  break;
 }
  return 0;
}