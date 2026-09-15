// Write a program to calculate electricity bill based on units consumed with these rates:
// First 100 units at ₹5/unit
// Next 100 units at ₹7/unit
// Next 100 units at ₹10/unit
// Above at ₹12/unit
#include <stdio.h>
int main()
{
    double units, totalBill = 0.0;
    printf("Enter total electricity units consumed: ");
    if (scanf("%lf", &units) != 1)
    {
        printf("Error: Please enter a valid numeric value.\n");
        return 1;
    }
    if (units < 0)
    {
        printf("Error: Units consumed cannot be negative.\n");
        return 1;
    }
    if (units <= 100)
    {
        totalBill = units * 5.0;
    }
    else if (units <= 200)
    {
        totalBill = (100 * 5.0) + ((units - 100) * 7.0);
    }
    else if (units <= 300)
    {
        totalBill = (100 * 5.0) + (100 * 7.0) + ((units - 200) * 10.0);
    }
    else
    {
        totalBill = (100 * 5.0) + (100 * 7.0) + (100 * 10.0) + ((units - 300) * 12.0);
    }
    printf("Total Electricity Bill: ₹%.2lf\n", totalBill);
    return 0;
}
