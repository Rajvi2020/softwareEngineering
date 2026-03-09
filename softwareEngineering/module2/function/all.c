#include <stdio.h>
#include <string.h>

#define MAX 100

// Function declarations
void takeInput(int n, char names[][50], float marks[][3]);
void calculateResults(int n, float marks[][3], float total[], float average[]);
void displayResults(int n, char names[][50], float marks[][3], float total[], float average[]);
void findStatistics(int n, char names[][50], float average[]);

int main()
{
    int n;
    char names[MAX][50];
    float marks[MAX][3];
    float total[MAX];
    float average[MAX];

    printf("Enter number of students (max 100): ");
    scanf("%d", &n);

    if (n > MAX || n <= 0)
    {
        printf("Invalid number of students!\n");
        return 0;
    }

    takeInput(n, names, marks);
    calculateResults(n, marks, total, average);
    displayResults(n, names, marks, total, average);
    findStatistics(n, names, average);

    return 0;
}

// Function to take input
void takeInput(int n, char names[][50], float marks[][3])
{
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter name of student %d: ", i + 1);
        scanf("%s", names[i]);

        printf("Enter marks of 3 subjects: ");
        for (int j = 0; j < 3; j++)
        {
            scanf("%f", &marks[i][j]);
        }
    }
}

// Function to calculate total and average
void calculateResults(int n, float marks[][3], float total[], float average[])
{
    for (int i = 0; i < n; i++)
    {
        total[i] = 0;
        for (int j = 0; j < 3; j++)
        {
            total[i] += marks[i][j];
        }
        average[i] = total[i] / 3;
    }
}

// Function to display results
void displayResults(int n, char names[][50], float marks[][3], float total[], float average[])
{
    printf("\n\n--- Student Report ---\n");
    printf("-----------------------------------------------------------------\n");
    printf("Name\tSub1\tSub2\tSub3\tTotal\tAverage\tResult\n");
    printf("-----------------------------------------------------------------\n");

    for (int i = 0; i < n; i++)
    {
        printf("%s\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t",
               names[i], marks[i][0], marks[i][1], marks[i][2],
               total[i], average[i]);

        if (average[i] >= 40)
            printf("Pass\n");
        else
            printf("Fail\n");
    }
}

// Function to find highest, lowest and pass/fail count
void findStatistics(int n, char names[][50], float average[])
{
    int highestIndex = 0, lowestIndex = 0;
    int passCount = 0, failCount = 0;

    for (int i = 0; i < n; i++)
    {
        if (average[i] > average[highestIndex])
            highestIndex = i;

        if (average[i] < average[lowestIndex])
            lowestIndex = i;

        if (average[i] >= 40)
            passCount++;
        else
            failCount++;
    }

    printf("\n--- Statistics ---\n");
    printf("Highest Average: %s (%.2f)\n", names[highestIndex], average[highestIndex]);
    printf("Lowest Average: %s (%.2f)\n", names[lowestIndex], average[lowestIndex]);
    printf("Number of Students Passed: %d\n", passCount);
    printf("Number of Students Failed: %d\n", failCount);
}