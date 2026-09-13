// Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
int main()
{
    float r;
    printf("Enter the radius: ");
    scanf("%f", &r);
    float circumference = 2 * 3.14 * r;
    float area = 3.14 * r * r;
    printf("Area = %f, Circumference = %f", area, circumference);
    return 0;
}
