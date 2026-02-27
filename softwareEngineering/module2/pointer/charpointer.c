#include <stdio.h>
int main()
{
  char a = 'a';
  char b = 'b';
  char c = 'c';

  char *ptr;
  char *ptr2;
  char *ptr3;
  ptr = &a;
  ptr = &b;
  ptr = &c;
  printf("%p\n", ptr);
  printf("%p\n", ptr3);
  printf("%p\n", ptr2);
  return 0;
}