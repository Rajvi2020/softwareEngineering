// #include <stdio.h>

// int main() {
//     int a, b, c;
//     int largest, smallest;

//     printf("Enter three numbers: ");
//     scanf("%d %d %d", &a, &b, &c);

//     switch (a>=b)
//     {
//       case 0:
//       switch (a>=c)
//       {
//          case 0:
//          printf("a is big");
//          break;
//          case 1:

//     }


//     return 0;
// }

// }

#include<stdio.h>
#include<conio.h>


int main()
{
   
       int a=5,b=2,c=3,num=0;
        
        
        
        switch((a>b&&a>c)?1:(b>c && b>a)?2:3)
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