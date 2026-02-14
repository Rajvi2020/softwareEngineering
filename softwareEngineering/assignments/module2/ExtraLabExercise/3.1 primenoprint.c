#include<stdio.h>
int main(){
  int num,input;
  printf("enter input");
  scanf("%d",&input);
  
  for(num=2;num<=100;num++){
    int flag=0;
   for(int i=2;i<num;i++){
    if(num%i==0)
    {
      flag=1;
      break;
  }}
   
   if(flag==0){
    printf("%d\n",num);
   }
  }
  return 0;
}