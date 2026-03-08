#include <stdio.h>

int main()
{
    // Variable declarations
    int choice;      // To store user's food choice
    int qty;         // To store quantity of selected item
    int total = 0;   // To store total bill amount
    int amount = 0;  // To store price of current order
    char more;       // To check if user wants to order more items

    // do-while loop is used so that menu is displayed at least once
    do
    {
        // Displaying food menu
        printf("\n----------- Menu -----------\n");
        printf("1. Pizza    price = 180rs/pcs\n");
        printf("2. Burger   price = 100rs/pcs\n");
        printf("3. Dosa     price = 120rs/pcs\n");
        printf("4. Idli     price = 50rs/pcs\n");

        // Taking user's choice
        printf("Please Enter your choose... : ");
        scanf("%d",&choice);

        // Using switch-case to process user's selected item
        switch(choice)
        {
            case 1:
                // User selected Pizza
                printf("\nYou have selected pizza.\n");

                // Taking quantity from user
                printf("Enter the quantity : ");
                scanf("%d",&qty);

                // Calculating amount for pizza
                amount = 180 * qty;

                // Displaying item amount
                printf("Amount : %d\n",amount);

                // Adding amount to total bill
                total = total + amount;

                // Displaying updated total bill
                printf("Total Amount is = %d\n",total);
                break;

            case 2:
                // User selected Burger
                printf("\nYou have selected Burger.\n");

                printf("Enter the quantity : ");
                scanf("%d",&qty);

                // Calculating amount for burger
                amount = 100 * qty;

                printf("Amount : %d\n",amount);

                // Adding to total bill
                total = total + amount;

                printf("Total Amount is = %d\n",total);
                break;

            case 3:
                // User selected Dosa
                printf("\nYou have selected Dosa.\n");

                printf("Enter the quantity : ");
                scanf("%d",&qty);

                // Calculating amount for dosa
                amount = 120 * qty;

                printf("Amount : %d\n",amount);

                // Updating total amount
                total = total + amount;

                printf("Total Amount is = %d\n",total);
                break;

            case 4:
                // User selected Idli
                printf("\nYou have selected Idli.\n");

                printf("Enter the quantity : ");
                scanf("%d",&qty);

                // Calculating amount for idli
                amount = 50 * qty;

                printf("Amount : %d\n",amount);

                // Adding to total bill
                total = total + amount;

                printf("Total Amount is = %d\n",total);
                break;

            default:
                // If user enters invalid choice
                printf("Invalid choice\n");
        }

        // Asking user if they want to place more orders
        printf("Do you want place more orders ? y & n : ");
        scanf(" %c",&more);

    } 
    // Loop continues if user enters 'y' or 'Y'
    while(more == 'y' || more == 'Y');

    // Displaying final bill amount
    printf("\nFinal Total Amount = %d\n", total);

    return 0; // Program ends
}