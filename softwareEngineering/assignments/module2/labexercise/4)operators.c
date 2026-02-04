#include <stdio.h>

int main()
{
    int a, b;

    // Accepting input from user
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    /* Arithmetic operations */
    printf("\nArithmetic Operations:");
    printf("\nAddition = %d", a + b);
    printf("\nSubtraction = %d", a - b);
    printf("\nMultiplication = %d", a * b);
    printf("\nDivision = %d", a / b);
    printf("\nModulus = %d", a % b);

    /* Relational operations */
    printf("\n\nRelational Operations:");
    printf("\na > b  = %d", a > b);
    printf("\na < b  = %d", a < b);
    printf("\na == b = %d", a == b);
    printf("\na != b = %d", a != b);

    /* Logical operations */
    printf("\n\nLogical Operations:");
    printf("\na && b = %d", a && b);
    printf("\na || b = %d", a || b);
    printf("\n!a     = %d", !a);

    return 0;
}
