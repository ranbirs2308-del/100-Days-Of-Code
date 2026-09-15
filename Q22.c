// Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>
int main()
{
    double costPrice, sellingPrice;
    double amount, percentage;
    printf("Enter the Cost Price (CP): ");
    if (scanf("%lf", &costPrice) != 1 || costPrice <= 0)
    {
        printf("Error: Invalid Cost Price. It must be a positive number.\n");
        return 1;
    }
    printf("Enter the Selling Price (SP): ");
    if (scanf("%lf", &sellingPrice) != 1 || sellingPrice < 0)
    {
        printf("Error: Invalid Selling Price. It cannot be negative.\n");
        return 1;
    }
    if (sellingPrice > costPrice)
    {
        amount = sellingPrice - costPrice;
        percentage = (amount / costPrice) * 100;
        printf("Profit: %.2lf\n", amount);
        printf("Profit Percentage: %.2lf%%\n", percentage);
    }
    else if (costPrice > sellingPrice)
    {
        amount = costPrice - sellingPrice;
        percentage = (amount / costPrice) * 100;
        printf("Loss: %.2lf\n", amount);
        printf("Loss Percentage: %.2lf%%\n", percentage);
    }
    else
    {
        printf("No Profit, No Loss (Break-even).\n");
    }
    return 0;
}
