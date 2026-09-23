// Find the second largest element in an array.
#include <stdio.h>

int main()
{
    int a[100], n, i;
    int largest, second;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    largest = a[0];

    for (i = 1; i < n; i++)
    {
        if (a[i] > largest)
        {
            largest = a[i];
        }
    }

    for (i = 0; i < n; i++)
    {
        if (a[i] != largest)
        {
            second = a[i];
            break;
        }
    }

    for (i = 0; i < n; i++)
    {
        if (a[i] > second && a[i] < largest)
        {
            second = a[i];
        }
    }

    printf("%d", second);

    return 0;
}
