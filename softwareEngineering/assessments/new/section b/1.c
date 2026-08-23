#include <stdio.h>

int main() {
    float percentage;

    printf("Enter student's percentage: ");
    scanf("%f", &percentage);

    // Validate percentage
    if (percentage < 0 || percentage > 100) {
        printf("Error: Percentage must be between 0 and 100.\n");
        return 0;
    }

    // Grade Band Checker
    if (percentage >= 90) {
        printf("Grade: A\n");
        printf("A — Excellent work! Keep it up!\n");
    }
    else if (percentage >= 75) {
        printf("Grade: B\n");
        printf("B — Good work! Keep pushing.\n");
    }
    else if (percentage >= 60) {
        printf("Grade: C\n");
        printf("C — Nice effort! You can do even better.\n");
    }
    else if (percentage >= 45) {
        printf("Grade: D\n");
        printf("D — Keep working hard! Improvement is possible.\n");
    }
    else {
        printf("Grade: F\n");
        printf("F — Don't give up! Learn from this and try again.\n");
    }

    return 0;
}