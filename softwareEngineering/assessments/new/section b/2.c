#include <stdio.h>

int main() {
    float studyHours[7];
    float total = 0;
    float average;
    int highestDay = 0;

    // Accept study hours for 7 days
    for (int i = 0; i < 7; i++) {
        do {
            printf("Enter study hours for Day %d: ", i + 1);
            scanf("%f", &studyHours[i]);

            if (studyHours[i] < 0 || studyHours[i] > 24) {
                printf("Invalid input! Study hours must be between 0 and 24.\n");
            }

        } while (studyHours[i] < 0 || studyHours[i] > 24);

        total += studyHours[i];

        // Find day with highest study hours
        if (studyHours[i] > studyHours[highestDay]) {
            highestDay = i;
        }
    }

    average = total / 7;

    // Performance Summary
    printf("\n===== Weekly Study Summary =====\n");
    printf("Weekly Total: %.2f hours\n", total);
    printf("Daily Average: %.2f hours\n", average);
    printf("Highest Study Hours: Day %d (%.2f hours)\n",
           highestDay + 1, studyHours[highestDay]);

    // Visual bars
    printf("\n===== Daily Study Chart =====\n");

    for (int i = 0; i < 7; i++) {
        printf("Day %d: ", i + 1);

        int hours = (int)studyHours[i];

        for (int j = 0; j < hours; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}