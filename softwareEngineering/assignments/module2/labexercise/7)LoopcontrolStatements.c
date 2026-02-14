#include<stdio.h>
int main(){
  
  for(int i=1;i<=10;i++){
    // if(i==5){
    //   break;}
if(i==3){
  continue;
}
    printf("%d\t",i);
    
  }

  return 0;
}