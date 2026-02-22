#include <stdio.h>

float add(float a, float b)
{
  return a + b;
}

float subtract(float a, float b)
{
  return a - b;
}

float multiply(float a, float b)
{
  return a * b;
}

float divide(float a, float b)
{
  return a / b;
}

int main()
{
  float num1, num2;

  printf("Enter two numbers: ");
  scanf("%f %f", &num1, &num2);

  printf("Addition = %.2f\n", add(num1, num2));
  printf("Subtraction = %.2f\n", subtract(num1, num2));
  printf("Multiplication = %.2f\n", multiply(num1, num2));

  if (num2 != 0)
    printf("Division = %.2f\n", divide(num1, num2));
  else
    printf("Division not possible (divide by zero)");

  return 0;
}