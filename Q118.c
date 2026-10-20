// Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number
#include <stdio.h>
int main()
{
    int arr[100], n, i;
    int sum = 0, total, missing;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    total = n * (n + 1) / 2;
    missing = total - sum;
    printf("%d", missing);
    return 0;
}