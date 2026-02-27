#include <stdio.h>
#include <stdlib.h>

int main()
{

  FILE *file_pointer;
  char c;
  file_pointer = fopen("..\\kgcoding.txt", "r");

  if (file_pointer == NULL)
  {
    printf("file coud not be opened");
    return 1;
  }
   while((c = getc(file_pointer)) != EOF) {
        printf("%c", c);  // Print each character
    }
  fclose(file_pointer);

  return 0;
}