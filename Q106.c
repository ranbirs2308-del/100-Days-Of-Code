// Write a program to take an array arr[] of integers as input, the task is to find the next greater element for each element of the array in order of their appearance in the array. Next greater element of an element in the array is the nearest element on the right which is greater than the current element. If there does not exist next greater of current element, then next greater element for current element is -1.
#include <stdio.h>
int main()
{
    int a[100], n, i, j;
    int next;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        next = -1;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] > a[i])
            {
                next = a[j];
                break;
            }
        }
        if (i == n - 1)
        {
            printf("%d", next);
        }
        else
        {
            printf("%d, ", next);
        }
    }
    return 0;
}
