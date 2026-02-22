#include<stdio.h>
#include<conio.h>


int main()
{
   
       int a=5,b=2,c=3,num=0;
        
        if(a>b && a>c)
        {
           num=1; 
        }
        else if(b>c && b>a)
        {
            num=2;
        }
        else
        {
            num=3;   
        }
        
        switch(num)
        {
            case 1: printf("a is bigger");
            break;
            
            case 2: printf("b is bigger");
            break;
            
            case 3: printf("c is bigger");
            break;
            
            default : printf("Invalid");
            break;
        }
    
  
  
    return 0;
}