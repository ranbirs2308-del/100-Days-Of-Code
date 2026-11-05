// Create an enum for months and print how many days each month has.
#include <stdio.h>
enum Months
{
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};
int main()
{
    enum Months month;
    int choice;
    printf("Enter month number (1-12): ");
    scanf("%d", &choice);
    month = choice;
    switch (month)
    {
    case JANUARY:
    case MARCH:
    case MAY:
    case JULY:
    case AUGUST:
    case OCTOBER:
    case DECEMBER:
        printf("31 days");
        break;
    case APRIL:
    case JUNE:
    case SEPTEMBER:
    case NOVEMBER:
        printf("30 days");
        break;
    case FEBRUARY:
        printf("28 days (29 in leap year)");
        break;
    default:
        printf("Invalid month");
    }
    return 0;
}