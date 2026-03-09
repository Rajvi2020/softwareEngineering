#include <stdio.h>

int main()
{
int i,j;
int arr[i][j];
int sum=0;
 printf("Enter elements of 3x3 arr:\n");
 for(i=0;i<3;i++){
  for(j=0;j<3;j++){
    scanf("%d",&arr[i][j]);
  }
 }
 printf("arr is:\n");
 for(i=0;i<3;i++){
  for(j=0;j<3;j++){
    printf("%d\t ",arr[i][j]);
    sum=sum+arr[i][j];
  }
  printf("\n");
 }
 printf("Sum of all elements = %d", sum);


  return 0;
}