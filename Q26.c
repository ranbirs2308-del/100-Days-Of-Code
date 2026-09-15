// Write a program to print numbers from 1 to n.
#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the value of n: ");
    if (scanf("%d", &n) != 1)
    {
        printf("Error: Please enter a valid integer.\n");
        return 1;
    }
    if (n < 1)
    {
        printf("Please enter a positive integer greater than or equal to 1.\n");
        return 1;
    }
    printf("Numbers from 1 to %d are:\n", n);
    for (i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
