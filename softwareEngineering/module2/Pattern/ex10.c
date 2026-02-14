#include<stdio.h>
int main(){
  int num;
  printf("enter a number");
  scanf("%d",&num);
  for(int i=1;i<=num;i++){
      for(int space=1;space<=num-i;space++){
        printf(" ");
      }
      for(int j=1;j<=i;j++){
        printf("*");
      }
      printf("\n");
  }


  return 0;
}

