#include<stdio.h>
int main(){
 

    for(int i=5;i>=1;i--){
          char ch='A';
        for(int j=1;j<=i;j++){
            printf(" %c",ch);
            ch++;
        }
        printf("\n");
    }


    return 0;
}