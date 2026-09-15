// Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include <stdio.h>
int main()
{
    double side1, side2, side3;
    printf("Enter the lengths of the three sides of the triangle:\n");
    if (scanf("%lf %lf %lf", &side1, &side2, &side3) != 3)
    {
        printf("Error: Invalid numeric input.\n");
        return 1;
    }
    if (side1 <= 0 || side2 <= 0 || side3 <= 0)
    {
        printf("Error: Side lengths must be greater than zero.\n");
    }
    else if ((side1 + side2 <= side3) || (side1 + side3 <= side2) || (side2 + side3 <= side1))
    {
        printf("The given sides do not form a valid triangle.\n");
    }
    else
    {
        if (side1 == side2 && side2 == side3)
        {
            printf("The triangle is Equilateral.\n");
        }
        else if (side1 == side2 || side1 == side3 || side2 == side3)
        {
            printf("The triangle is Isosceles.\n");
        }
        else
        {
            printf("The triangle is Scalene.\n");
        }
    }
    return 0;
}
