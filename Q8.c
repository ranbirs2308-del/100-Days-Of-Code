// Write a program to find and display the sum of the first n natural numbers.
#include <stdio.h>
int main()
{
    int n, sum;
    printf("Enter the n numbers: ");
    scanf("%d", &n);
    sum = n * (n + 1) / 2;
    printf("So the sum of first n (%d) numbers is %d", n, sum);
    return 0;
}
