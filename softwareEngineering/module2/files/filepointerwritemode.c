#include <stdio.h>
#include <stdlib.h>

int main()
{

  FILE *fp;
  char c;
  fp=fopen("..//kishan.txt","w");
  printf("enter text");
  while((c=getchar())!='0'){
    putc(c,fp);
  }
  fclose(fp);
 fp=fopen("..//kishan.txt","r");
 printf("File Content:");
 while((c=getc(fp))!=EOF){
  printf("%c",c);
 }
 fclose(fp);



  return 0;
}