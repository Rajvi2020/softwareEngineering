#include<stdio.h>


  int fact(int n){
if(n<0){

  printf("factiorial does not exist");
  return 0;
}
else if(n==0){
  return  1;
}
else{
  return n * fact(n-1);
}

}
  
 int main(){
  int n;
  printf("enter n"); 
  scanf("%d",&n);
  int result=fact(n);
   if(result!=0){
   printf("%d",result);
}}

