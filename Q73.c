// Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>

int main()
{
    int a[10][10], sum[10];
    int rows, columns, i, j;

    scanf("%d %d", &rows, &columns);

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < rows; i++)
    {
        sum[i] = 0;

        for (j = 0; j < columns; j++)
        {
            sum[i] = sum[i] + a[i][j];
        }
    }

    for (i = 0; i < rows; i++)
    {
        printf("%d ", sum[i]);
    }

    return 0;
}
