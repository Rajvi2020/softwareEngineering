#include <stdio.h>

int main()
{
    int num, month;

    // Check even or odd using simple if-else
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("The number is Even\n");
    else
        printf("The number is Odd\n");

    // Nested if example
    if (num > 0)
    {
        printf("The number is Positive\n");

        if (num % 2 == 0)
            printf("It is also Even (Nested If)\n");
        else
            printf("It is also Odd (Nested If)\n");
    }
    else if (num < 0)
    {
        printf("The number is Negative\n");
    }
    else
    {
        printf("The number is Zero\n");
    }

    // Display month name using switch
    printf("\nEnter month number (1-12): ");
    scanf("%d", &month);

    switch (month)
    {
        case 1: printf("January"); break;
        case 2: printf("February"); break;
        case 3: printf("March"); break;
        case 4: printf("April"); break;
        case 5: printf("May"); break;
        case 6: printf("June"); break;
        case 7: printf("July"); break;
        case 8: printf("August"); break;
        case 9: printf("September"); break;
        case 10: printf("October"); break;
        case 11: printf("November"); break;
        case 12: printf("December"); break;
        default: printf("Invalid month number");
    }

    return 0;
}
