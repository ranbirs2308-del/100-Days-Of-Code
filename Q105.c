// Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists
#include <stdio.h>
int main()
{
    int a[100], n, i, j;
    int count;
    int majority = -1;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        count = 0;
        for (j = 0; j < n; j++)
        {
            if (a[i] == a[j])
            {
                count++;
            }
        }
        if (count > n / 2)
        {
            majority = a[i];
            break;
        }
    }
    printf("%d", majority);
    return 0;
}
