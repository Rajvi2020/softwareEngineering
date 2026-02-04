#include <stdio.h>
int main() {
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);

    switch(marks / 10) {
        case 10: // 100
        case 9:  // 90
            printf("Grade: A\n");
            break;
        case 8:  // 80-89
        case 7:  // 70-79
            if (marks > 75)      // split 76-79 → B, 70-75 → C
                printf("Grade: B\n");
            else
                printf("Grade: C\n");
            break;
        case 6:  // 60-69
        case 5:  // 50-59
            printf("Grade: C\n");
            break;
        default: // 0-49
            printf("Grade: D\n");
            break;
    }

    return 0;
}
