#include <stdio.h>

int main()
{
    int num = 10;
    int *ptr;

    ptr = &num;

    printf("Original value of num = %d\n", num);

   
    
    *ptr = 20;

    printf("Modified value of num = %d\n", num);

    return 0;
}