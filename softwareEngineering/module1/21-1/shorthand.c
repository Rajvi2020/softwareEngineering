#include<stdio.h>

int main()
{
    int a = 6;
    int b = 3;
    
    a+=b;//a=a+b//6+3=9
    printf("\n %d",a);//9
    
    a-=b;//a=a-b // 9-3 ==6
    printf("\n %d",a);
    
    a*=b;
    printf("\n %d",a);
    
    return 0;
}