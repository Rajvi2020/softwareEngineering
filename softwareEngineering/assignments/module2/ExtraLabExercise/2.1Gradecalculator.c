#include<stdio.h>
int main(){
  int marks;
  printf("enter marks");
  scanf("%d", &marks);
  if(marks>90){
    printf("A grade");
  }
  else if(marks>75 && marks<90){
    printf("B grade");
  }
  else if(marks>50 && marks<=75){
    printf("C grade");

  }
  else{
    printf("D grade");
  }
  return 0;
}