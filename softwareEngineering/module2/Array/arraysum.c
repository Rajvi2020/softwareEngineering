#include<stdio.h>
#include<conio.h>
int main()
{
   
   int size;
    printf("Enter total subjects:");
   scanf("%d",&size);
int marks[size],total=0;
for(int i=0;i<size;i++){
  int ans=i+1;



  printf("enter marks for subject %d",ans);
  scanf("%d",&marks[i]);

}
for(int i=0;i<size;i++){
  total+=marks[i];

}

printf("\n Your total is %d",total);
    float per = total/5;
    printf("\n Your Percentage is %f",per);

   return 0;
}