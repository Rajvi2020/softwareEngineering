#include<stdio.h>
#include<conio.h>
int main()
{
  
    printf("\n Menu : \n Press 1 for Pizza - Rs.100 \n Press 2 for Burger - Rs.70 \n Press 3 for Coffee - Rs. 120");
    
    int tableno;
    int choice;
    int qua;
    int finalamount = 0;
    printf("\n Enter Table No:");
    scanf("%d",&tableno);
    
    printf("\n Enter choice:");
    scanf("%d",&choice);
    
    printf("\n Enter Quantity:");
    scanf("%d",&qua);
    
    if(choice==1)
    {
        finalamount = 100*qua;
    }
     if(choice==2)
    {
        finalamount = 70*qua;
    }
     if(choice==3)
    {
        finalamount = 120*qua;
    }
    else
    {
        printf("Item Not Available");
    }
    
    printf("\n Total Bill is : %d",finalamount);
    return 0;
}


// #include<stdio.h>
// #include<conio.h>
// int main()
// {
  
//     printf("\n Menu : \n Press 1 for Pizza - Rs.100 \n Press 2 for Burger - Rs.70 \n Press 3 for Coffee - Rs. 120");
    
//     int tableno;
//     int choice;
//     int qua;
//     int finalamount = 0;
//     printf("\n Enter Table No:");
//     scanf("%d",&tableno);
    
//     printf("\n Enter choice:");
//     scanf("%d",&choice);
    
//     printf("\n Enter Quantity:");
//     scanf("%d",&qua);
    
//     if(choice==1)
//     {
//         finalamount = 100*qua;
//     }
//     else if(choice==2)
//     {
//         finalamount = 70*qua;
//     }
//     else if(choice==3)
//     {
//         finalamount = 120*qua;
//     }
//     else
//     {
//         printf("Item Not Available");
//     }
    
//     printf("\n Total Bill is : %d",finalamount);
//     return 0;
// }