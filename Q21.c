// Write a program to display the month name and number of days using switch-case for a given month number.
#include <stdio.h>
int main()
{
    int monthNumber;
    printf("Enter a month number (1-12): ");
    if (scanf("%d", &monthNumber) != 1)
    {
        printf("Error: Please enter a valid integer.\n");
        return 1;
    }
    switch (monthNumber)
    {
    case 1:
        printf("Month: January\nDays: 31 days\n");
        break;
    case 2:
        printf("Month: February\nDays: 28 or 29 days (depending on leap year)\n");
        break;
    case 3:
        printf("Month: March\nDays: 31 days\n");
        break;
    case 4:
        printf("Month: April\nDays: 30 days\n");
        break;
    case 5:
        printf("Month: May\nDays: 31 days\n");
        break;
    case 6:
        printf("Month: June\nDays: 30 days\n");
        break;
    case 7:
        printf("Month: July\nDays: 31 days\n");
        break;
    case 8:
        printf("Month: August\nDays: 31 days\n");
        break;
    case 9:
        printf("Month: September\nDays: 30 days\n");
        break;
    case 10:
        printf("Month: October\nDays: 31 days\n");
        break;
    case 11:
        printf("Month: November\nDays: 30 days\n");
        break;
    case 12:
        printf("Month: December\nDays: 31 days\n");
        break;
    default:
        printf("Invalid input! Please enter a number between 1 and 12.\n");
        break;
    }
    return 0;
}
