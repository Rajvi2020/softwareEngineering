#include <stdio.h>

int main()
{
    int arr[10];
    int i, j;
    int max, min, temp;

    printf("Enter 10 integers:\n");

    
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = min = arr[0];

    
    for(i = 1; i < 10; i++)
    {
        if(arr[i] > max)
            max = arr[i];

        if(arr[i] < min)
            min = arr[i];
    }

    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);

  
   for(i=0;i<10-1;i++){
   for(j=i+1;j<10;j++){
    if(arr[i]>arr[j]){
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
   }
}}

    printf("Sorted array (Ascending):\n");

    for(i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}