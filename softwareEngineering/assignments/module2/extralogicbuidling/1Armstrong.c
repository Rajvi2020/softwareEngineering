#include <stdio.h>

int main()
{
    int num, original, remainder;
    int
     result = 0;

    printf("Enter a number: ");
    scanf("%d", &num);
original=num;
    while(num !=0){
    
    remainder=num%10;
    result=result+(remainder*remainder*remainder);
    num=num/10;
    }
    if (result == original)
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");


    return 0;
}


