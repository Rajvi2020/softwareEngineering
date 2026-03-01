#include <stdio.h>

int main()
{

  FILE *fp;
  char str[100];
  fp = fopen("..//tops.txt", "w");
  char c;
  printf("enter text");

  while ((c=getchar())!='0')
  {
  /* code */
   putc(c,fp);
  // fprintf(fp,"%c",c);
  // fputc(c,fp);

   }

  //fgets(str, 100, stdin);
  //fputs(str, fp);
  fclose(fp);
  printf("\nData output\n");
  fp = fopen("..//tops.txt", "r");
  // while (fgets(str, 100, fp) != NULL)
  // {
  //   printf("%s", str);
  // }
  // 2.1)while(fscanf(fp,"%s",str)!=EOF)  printf("%s",str); or
  // 2.2)while(fscanf(fp,"%c",&c) != EOF)
  // {
  //     printf("%c", c);
  // }

  //3) 
  while((c=fgetc(fp))!=EOF)
       {
        putchar(c);
         //printf("%c",c);
       }

  fclose(fp);

  return 0;
}