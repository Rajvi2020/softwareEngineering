#include<stdio.h>
int main(){
  int num,i,result=1;
  printf("enter your number");
  scanf("%d",&num);

  if(num==1 || num==0 ){
    printf("factorial is 1");
  }
 
  
  else if(num<0){
    printf("invalid input");

  }
  else{
    for(i=2;i<=num;i++){
    result*=i;
    }
    printf("factorial is %d\n" ,result);
  }

  return 0;
}