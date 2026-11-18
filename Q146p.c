// Write a C program to create a Student structure containing name, roll number, marks, and a nested Date structure for the student's date of birth. Take the details as input and display them.
#include <stdio.h>
struct Date
{
    int day, month, year;
};
struct Student
{
    char name[50];
    int roll_no;
    float marks;
    struct Date dob;
};
int main()
{
    struct Student s;
    printf("Enter student name: ");
    scanf("%49s", s.name);
    printf("Enter roll number: ");
    scanf("%d", &s.roll_no);
    printf("Enter marks: ");
    scanf("%f", &s.marks);
    printf("Enter date of birth (DD MM YYYY): ");
    scanf("%d %d %d", &s.dob.day,
          &s.dob.month, &s.dob.year);
    printf("\nStudent Details:\n");
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);
    printf("Date of Birth: %02d/%02d/%04d",
           s.dob.day, s.dob.month, s.dob.year);
    return 0;
}
