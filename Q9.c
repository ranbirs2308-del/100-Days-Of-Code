// Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include <math.h>
int main()
{
    int principal, rate, time, n;
    printf("Enter the principal: ");
    scanf("%d", &principal);
    printf("Enter the rate: ");
    scanf("%d", &rate);
    printf("Enter the time: ");
    scanf("%d", &time);
    printf("Enter n: ");
    scanf("%d", &n);
    int SI = (principal + rate + time) / 100;
    float CI = principal * pow((1 + ((float)rate / 100) / n), (n * time));
    printf("Simple interest = %d, Compound Interest = %f", SI, CI);
    return 0;
}
