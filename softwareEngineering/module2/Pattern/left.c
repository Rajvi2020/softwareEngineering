// Online C compiler to run C program online
#include <stdio.h>

int main() {
  

    // This loop for traverse pyramid from top to bottom
    for (int i = 1; i <=5; i++)
    {
char ch='A';
        // This loop for printing leading whitespaces
        for (int space=1; space <= 5-i; space++)
        {
            printf(" ");
        }

        // This loop for printing * character in each row
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
           ch++;
        }
         
              
     
        printf("\n");
       
    }
    

    return 0;
}