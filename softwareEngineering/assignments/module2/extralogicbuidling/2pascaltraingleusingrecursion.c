#include <stdio.h>

// Recursive function to find combination
int combination(int n, int r)
{
  if (r == 0 || r == n)
    return 1; // Base case
  else
    return combination(n - 1, r - 1) + combination(n - 1, r);
}

int main()
{
  int rows, i, j;

  printf("Enter the number of rows: ");
  scanf("%d", &rows);

  for (i = 0; i < rows; i++)
  {
    // Print spaces for formatting
    for (j = 0; j < rows - i - 1; j++)
      printf("  ");

    // Print numbers in the row
    for (j = 0; j <= i; j++)
      printf("%4d", combination(i, j));

    printf("\n");
  }

  return 0;
}