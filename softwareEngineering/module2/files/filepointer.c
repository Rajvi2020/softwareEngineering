#include <stdio.h>
#include <conio.h>

int main()
{

  FILE *fp;
  fp = fopen("..//tops.txt", "w");
  char c;

  while ((c = getchar()) != '0')
  {
    putc(c, fp);
  }

  fclose(fp);

  printf("\nData output\n");

  fp = fopen("..//tops.txt", "r");

  while ((c = getc(fp)) != EOF)
  {
    printf("%c", c);
  }

  fclose(fp);

  return 0;
}
