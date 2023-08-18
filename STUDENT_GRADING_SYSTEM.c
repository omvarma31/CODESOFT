#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100

struct Student {
    char name[50];
    int grade;
};

int main() {
    struct Student students[MAX_STUDENTS];
    int numStudents;

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    if (numStudents > MAX_STUDENTS) {
        printf("Maximum number of students exceeded.\n");
        return 1;
    }

    // Input student names and grades
    for (int i = 0; i < numStudents; i++) {
        printf("Enter name for student %d: ", i + 1);
        scanf("%s", students[i].name);

        printf("Enter grade for student %d: ", i + 1);
        scanf("%d", &students[i].grade);
    }

    // Calculate average grade, highest grade, and lowest grade
    int totalGrade = 0;
    int highestGrade = students[0].grade;
    int lowestGrade = students[0].grade;

    for (int i = 0; i < numStudents; i++) {
        totalGrade += students[i].grade;

        if (students[i].grade > highestGrade) {
            highestGrade = students[i].grade;
        }

        if (students[i].grade < lowestGrade) {
            lowestGrade = students[i].grade;
        }
    }

    double averageGrade = (double)totalGrade / numStudents;

    // Display results
    printf("\nAverage grade: %.2lf\n", averageGrade);
    printf("Highest grade: %d\n", highestGrade);
    printf("Lowest grade: %d\n", lowestGrade);

    return 0;
}
