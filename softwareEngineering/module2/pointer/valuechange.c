#include<stdio.h>
#include<conio.h>
int main()
{
  char a='b';
  char *ptr;
  ptr=&a;
  printf("value of a is %c\n" ,a);
    printf("%p \n",ptr);
    *ptr='d';
     printf("%c \n",a);
  printf("%p \n",ptr); 




  return 0;
}