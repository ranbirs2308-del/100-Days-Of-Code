// Write a program to calculate the factorial of a number.
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("Enter a number greater than 0");
        return 0;
    }
    int i = 1;
    int fact = num;
    while (i <= num)
    {
        i = i + 1;
        fact = fact * i;
    }
    printf("Factorial of the number is %d", fact);
    return 0;
}
