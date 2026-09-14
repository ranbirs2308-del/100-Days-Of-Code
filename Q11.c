// Write a program to input an integer and check whether it is even or odd using if–else.
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 0 || num == 0)
    {
        printf("Please enter a number greater than 0");
        return 0;
    }
    float a = num % 2;
    if (a == 0)
    {
        printf("The number is even");
    }
    else
    {
        printf("The number is odd");
    }
    return 0;
}
