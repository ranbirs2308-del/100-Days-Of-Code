// Perform diagonal traversal of a matrix.
#include <stdio.h>

int main()
{
    int a[10][10], n, i, j, d;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (d = 0; d <= 2 * n - 2; d++)
    {
        for (i = 0; i < n; i++)
        {
            j = d - i;

            if (j >= 0 && j < n)
            {
                printf("%d ", a[i][j]);
            }
        }
    }

    return 0;
}
