#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float marks1, marks2, marks3;
    float total, percentage;
};

int main() {
    struct Student s;

    printf("Enter Roll Number: ");
    scanf("%d", &s.rollNo);

    printf("Enter Student Name: ");
    scanf("%s", s.name);

    printf("Enter marks in 3 subjects:\n");
    scanf("%f %f %f", &s.marks1, &s.marks2, &s.marks3);

    s.total = s.marks1 + s.marks2 + s.marks3;
    s.percentage = s.total / 3;

    printf("\n--- Student Details ---\n");
    printf("Roll Number: %d\n", s.rollNo);
    printf("Name: %s\n", s.name);
    printf("Total Marks: %.2f\n", s.total);
    printf("Percentage: %.2f%%\n", s.percentage);

    if (s.percentage >= 40)
        printf("Result: Pass\n");
    else
        printf("Result: Fail\n");

    return 0;
}
