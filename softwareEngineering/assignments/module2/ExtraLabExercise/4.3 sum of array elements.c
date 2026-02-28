#include <stdio.h>

int main() {
    int N, i;
    float sum = 0.0, average;

    // Ask user for number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &N);

    int numbers[N]; // array to store numbers

    // Input numbers from the user
    for(i = 0; i < N; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Calculate sum
    for(i = 0; i < N; i++) {
        sum += numbers[i];
    }

    // Calculate average
    average = sum / N;

    // Display results
    printf("Sum of all elements = %.2f\n", sum);
    printf("Average of elements = %.2f\n", average);

    return 0;
}