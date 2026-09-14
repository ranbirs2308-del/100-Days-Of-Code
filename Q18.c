// Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria:
// 90-100: Grade A
// 80-89: Grade B
// 70-79: Grade C
// 60-69: Grade D
// below 60: Grade F.
#include <stdio.h>
int main()
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);
    if (marks > 100)
    {
        printf("Your marks cant be greater than 100");
        return 0;
    }
    if (marks < 0)
    {
        printf("marks cant be lesser than one");
        return 0;
    }
    if (marks >= 90 && marks <= 100)
    {
        printf("You got an A grade!");
    }
    else if (marks >= 80 && marks <= 89)
    {
        printf("You got a B Grade!");
    }
    else if (marks >= 70 && marks <= 79)
    {
        printf("You got a C Grade!");
    }
    else if (marks >= 60 && marks <= 69)
    {
        printf("You got a D Grade!");
    }
    else
    {
        printf("You failed aka you got a F Grade!");
    }
}
