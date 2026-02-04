#include<stdio.h>

int main()
{
   int marks;
   
   printf("Enter Your marks");
   scanf("%d",&marks);//56
   
   if(marks>=70)
   {
       printf("A Grade");
   }
   if(marks>=60)
   {
        printf("B Grade");
   }
   if(marks>=50)
   {
        printf("C Grade");
   }
  if(marks>=40)
   {
        printf("D Grade");
   }
   else
   {
        printf("Fail");
   }
    
    return 0;
}