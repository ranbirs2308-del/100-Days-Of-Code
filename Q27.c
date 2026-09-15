// Write a program to print the sum of the first n odd numbers.
#include <stdio.h>
int main()
{
    int n, i;
    long long sum = 0;
    int currentOdd = 1;
    printf("Enter the value of n (how many odd numbers to sum): ");
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
        sum += currentOdd;
        currentOdd += 2;
    }
    printf("The sum of the first %d odd numbers is: %lld\n", n, sum);
    return 0;
}
