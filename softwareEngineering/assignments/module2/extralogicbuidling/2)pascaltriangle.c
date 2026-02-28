#include<stdio.h>
int main(){
  int i,j,c;
  for(
    i=0;i<5;i++){
    for(int space=1;space<=5-i;space++){
      printf(" ");
    }
    for(j=0;j<=i;j++){
       if(i==0 || j==0){
        c=1;
       }
       else{
        c=(c*(i-j+1))/j;
       }
       printf("%d ",c);
    }
    printf("\n");
  }


  return 0;
}