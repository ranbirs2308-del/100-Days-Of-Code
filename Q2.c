// Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>
int main()
{
    int a;
    int b;
    printf("Enter a number1: ");
    scanf("%d", &a);
    printf("Enter a number2: ");
    scanf("%d", &b);
    int c = a + b;
    int d = a - b;
    int e = a * b;
    int f = a / b;
    printf("Sum is %d\n", c);
    printf("Difference is %d\n", d);
    printf("Product is %d\n", e);
    printf("Quotient is %d\n", f);
    return 0;
}
