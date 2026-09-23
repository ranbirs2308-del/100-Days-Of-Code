// Rotate an array to the right by k positions.
#include <stdio.h>

int main()
{
    int a[100], n, i, j, k, last;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &k);

    for (i = 1; i <= k; i++)
    {
        last = a[n - 1];

        for (j = n - 1; j > 0; j--)
        {
            a[j] = a[j - 1];
        }

        a[0] = last;
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
