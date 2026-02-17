#include <stdio.h>

int main() {
    int rows, i, j, k;

    // printf("Enter the number of rows: ");
    // scanf("%d", &rows);

    for(i=1;i<=5;i++){
      for(int space=1;space<=5-i;space++)
      {
        printf(" ");
      }
      for(j=i;j>=1;j--){
        printf("%d",j);
      }
      printf("\n");
    }
    return 0;
}