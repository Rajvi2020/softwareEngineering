#include <stdio.h>

#define SUBJECTS 3
#define DAYS 7

struct StudyLog {
    char subject[40];
    float hours[7];
};

// Function to calculate and display weekly report
void displayWeeklyReport(struct StudyLog logs[]) {
    printf("\n========== WEEKLY PRODUCTIVITY REPORT ==========\n");

    for (int i = 0; i < SUBJECTS; i++) {
        float total = 0;

        for (int j = 0; j < DAYS; j++) {
            total += logs[i].hours[j];
        }

        float average = total / DAYS;

        printf("\nSubject: %s\n", logs[i].subject);
        printf("Weekly Total: %.2f hours\n", total);
        printf("Daily Average: %.2f hours\n", average);
    }
}

// Function to display progress chart
void displayProgressChart(struct StudyLog logs[]) {
    printf("\n========== PROGRESS CHART ==========\n");

    for (int i = 0; i < SUBJECTS; i++) {
        printf("\n%s\n", logs[i].subject);

        for (int j = 0; j < DAYS; j++) {
            printf("Day %d: ", j + 1);

            int wholeHours = (int)logs[i].hours[j];

            for (int k = 0; k < wholeHours; k++) {
                printf("•");
            }

            printf(" %.2f hours\n", logs[i].hours[j]);
        }
    }
}

// Function to save records to file
void saveToFile(struct StudyLog logs[]) {
    FILE *file = fopen("productivity_log.txt", "w");

    if (file == NULL) {
        printf("Error: Could not open productivity_log.txt\n");
        return;
    }

    for (int i = 0; i < SUBJECTS; i++) {
        fprintf(file, "%s", logs[i].subject);

        for (int j = 0; j < DAYS; j++) {
            fprintf(file, ",%.2f", logs[i].hours[j]);
        }

        fprintf(file, "\n");
    }

    fclose(file);

    printf("\nStudy records saved successfully to productivity_log.txt\n");
}

int main() {

    struct StudyLog logs[SUBJECTS] = {
        {"C Programming", {0, 0, 0, 0, 0, 0, 0}},
        {"Python", {0, 0, 0, 0, 0, 0, 0}},
        {"Database", {0, 0, 0, 0, 0, 0, 0}}
    };

    int choice;

    do {
        printf("\n========================================\n");
        printf("     STUDENT PRODUCTIVITY TRACKER\n");
        printf("========================================\n");
        printf("1. Log Today's Study Hours\n");
        printf("2. View Weekly Report\n");
        printf("3. Save & Exit\n");
        printf("Enter your choice: ");

        scanf("%d", &choice);

        switch (choice) {

            case 1: {
                int day;

                printf("\nEnter today's day number (1-7): ");
                scanf("%d", &day);

                if (day < 1 || day > 7) {
                    printf("Invalid day! Please enter a number between 1 and 7.\n");
                    break;
                }

                for (int i = 0; i < SUBJECTS; i++) {

                    float hours;

                    do {
                        printf("Enter study hours for %s: ",
                               logs[i].subject);

                        scanf("%f", &hours);

                        if (hours < 0 || hours > 24) {
                            printf("Invalid hours! Enter a value between 0 and 24.\n");
                        }

                    } while (hours < 0 || hours > 24);

                    logs[i].hours[day - 1] = hours;
                }

                printf("\nToday's study hours logged successfully!\n");
                break;
            }

            case 2:
                displayWeeklyReport(logs);
                displayProgressChart(logs);
                break;

            case 3:
                saveToFile(logs);
                printf("Exiting program. Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Please select 1, 2, or 3.\n");
        }

    } while (choice != 3);

    return 0;
}