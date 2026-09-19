// Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>

int main()
{
    int n, i;
    float sum = 1, numerator = 3, denominator = 4;

    scanf("%d", &n);

    for (i = 2; i <= n; i++)
    {
        sum = sum + numerator / denominator;

        numerator = numerator + 2;
        denominator = denominator + 2;
    }

    printf("%f", sum);

    return 0;
}
