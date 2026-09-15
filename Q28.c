// Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>
int main()
{
    int n, i;
    unsigned long long product = 1;
    int evenFound = 0;
    printf("Enter the value of n: ");
    if (scanf("%d", &n) != 1)
    {
        printf("Error: Please enter a valid integer.\n");
        return 1;
    }
    if (n < 1)
    {
        printf("Error: Please enter a positive integer greater than or equal to 1.\n");
        return 1;
    }
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            product *= i;
            evenFound = 1;
        }
    }
    if (evenFound)
    {
        printf("The product of even numbers from 1 to %d is: %llu\n", n, product);
    }
    else
    {
        printf("There are no even numbers in the range 1 to %d.\n", n);
    }
    return 0;
}
