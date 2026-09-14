// Write a program to input a year and check whether it is a leap year or not using conditional statements.
#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    if (year < 1000)
    {
        printf("Year should be above 1000 please!");
        return 0;
    }
    float a = year % 4;
    if (a == 0)
    {
        printf("The year is a leap year");
    }
    else
    {
        printf("The number is not a leap year");
    }
    return 0;
}
