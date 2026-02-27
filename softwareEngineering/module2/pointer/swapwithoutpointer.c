#include<stdio.h>
#include<conio.h>

void swap(int x, int y)
{
    printf("\n Before Swapping value in function X is : %d ",x);
    printf("\n Before Swapping value in function Y is : %d ",y);
    
    int temp;

     temp = x; 
     x = y;    
     y = temp; 
    
    printf("\n After Swapping value in function X is : %d ",x);
    printf("\n After Swapping value in function Y is : %d ",y);
}
 
int main()
{
    int x = 6;
    int y = 2;
    
    printf("\n  %d ",x);
    printf("\n %d ",y);
    
    swap(6,2);
    
    printf("\n %d ",x);
    printf("\n %d ",y);
    
  
    
 
    return 0;
}