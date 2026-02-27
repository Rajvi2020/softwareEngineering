#include<stdio.h>


int main()
{

    FILE *fp;
    fp=fopen("tops1.txt","w");
    char c;
    while ((c=getchar())!='0')
    {
      /* code */
      putc(c,fp);

    }
    fclose(fp);
    printf("\nData output\n");
    fp=fopen("tops.txt","r");
     while((c=getc(fp))!=EOF)
    {	
      printf("%c",c);
    }

     fclose(fp);

    return 0;
  }