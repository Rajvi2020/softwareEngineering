#include<stdio.h>
int main(){
 int num,range;
 printf("enter a number for which you want to print table");
 scanf("%d",&num);
 printf("range upto which you want to print table");
 scanf("%d",&range);
 for(int i=1;i<=range;i++){
  int ans=num*i;
  printf("%d * %d= %d\n",num, i, ans);
 }
  return 0;
}