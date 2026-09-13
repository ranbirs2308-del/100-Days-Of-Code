// Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>
int main()
{
    int length;
    int breadth;
    printf("The Length is: ");
    scanf("%d", &length);
    printf("The breadth is: ");
    scanf("%d", &breadth);
    int perimeter = 2 * (length + breadth);
    int area = length * breadth;
    printf("The perimeter of rectangle = %d\n", perimeter);
    printf("The area of the rectangle = %d\n", area);
    return 0;
}
