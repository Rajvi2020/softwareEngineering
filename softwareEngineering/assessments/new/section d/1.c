#include <stdio.h>

int main() {
    int numbers[10];
    int max, min;
    int sum = 0;
    float mean;

    // Accept 10 integers
    printf("Enter 10 integers:\n");

    for (int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }

    // Initialize min and max
    min = numbers[0];
    max = numbers[0];

    // Find min, max and sum
    for (int i = 0; i < 10; i++) {
        if (numbers[i] < min) {
            min = numbers[i];
        }

        if (numbers[i] > max) {
            max = numbers[i];
        }

        sum += numbers[i];
    }

    mean = (float)sum / 10;

    printf("\nMaximum: %d\n", max);
    printf("Minimum: %d\n", min);
    printf("Mean: %.2f\n", mean);

    // Sort array in ascending order
    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (numbers[i] > numbers[j]) {
                int temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }

    printf("Sorted array: ");

    for (int i = 0; i < 10; i++) {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    // Check whether mean is closer to min, max or midway
    float distanceFromMin = mean - min;
    float distanceFromMax = max - mean;

    if (distanceFromMin < distanceFromMax) {
        printf("The mean is closer to the minimum.\n");
    }
    else if (distanceFromMin > distanceFromMax) {
        printf("The mean is closer to the maximum.\n");
    }
    else {
        printf("The mean is exactly midway between the minimum and maximum.\n");
    }

    return 0;
}