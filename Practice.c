// Write a C program to take an integer array arr[] as input and find the previous smaller element for each element.
#include <stdio.h>
int main()
{
    int arr[100], n, i, j, previous;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        previous = -1;
        for (j = i - 1; j >= 0; j--)
        {
            if (arr[j] < arr[i])
            {
                previous = arr[j];
                break;
            }
        }
        if (i == n - 1)
        {
            printf("%d", previous);
        }
        else
        {
            printf("%d, ", previous);
        }
    }
    return 0;
}
