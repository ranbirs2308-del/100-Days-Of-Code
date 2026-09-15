// Write a program to calculate library fine based on late days as follows:
// First 5 days late: ₹2/day
// Next 5 days late: ₹4/day
// Next 20 days days late: ₹6/day
// More than 30 days: Membership Cancelled.
#include <stdio.h>
int main()
{
    int daysLate;
    double fine = 0.0;
    printf("Enter the number of days late: ");
    if (scanf("%d", &daysLate) != 1)
    {
        printf("Error: Invalid numeric input.\n");
        return 1;
    }
    if (daysLate < 0)
    {
        printf("Error: Number of late days cannot be negative.\n");
    }
    else if (daysLate == 0)
    {
        printf("No delay. Fine amount: ₹0.00\n");
    }
    else if (daysLate > 30)
    {
        printf("Penalty: More than 30 days late. Membership Cancelled.\n");
    }
    else
    {
        if (daysLate <= 5)
        {
            fine = daysLate * 2.0;
        }
        else if (daysLate <= 10)
        {
            fine = (5 * 2.0) + ((daysLate - 5) * 4.0);
        }
        else
        {
            fine = (5 * 2.0) + (5 * 4.0) + ((daysLate - 10) * 6.0);
        }
        printf("Total Library Fine: ₹%.2lf\n", fine);
    }
    return 0;
}
