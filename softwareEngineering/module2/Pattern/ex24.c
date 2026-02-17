#include <stdio.h>

int main() {
    int rows, i, j, k;

    // printf("Enter the number of rows: ");
    // scanf("%d", &rows);

    for(i=5;i>=1;i--){
      
      for(j=1;j<=i;j++){
        printf("*");
      }
      for(int k=1;k<=2*(5-i);k++){
        printf(" ");
      }
      for(j=1;j<=i;j++){
        printf("*");
      }
      printf("\n");
    }


    return 0;
}