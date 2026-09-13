// Write a program to swap two numbers using a third variable.
#include <stdio.h>
int main()
{
    int a;
    printf("Enter num1: ");
    scanf("%d", &a);
    int b;
    printf("Enter num2: ");
    scanf("%d", &b);
    int c;
    c = a;
    a = b;
    b = c;
    printf("num1 is %d num 2 is %d", a, b);
    return 0;
}
