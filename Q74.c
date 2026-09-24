// Find the transpose of a matrix.
#include <stdio.h>

int main()
{
    int a[10][10], rows, columns, i, j;

    scanf("%d %d", &rows, &columns);

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < columns; i++)
    {
        for (j = 0; j < rows; j++)
        {
            printf("%d ", a[j][i]);
        }

        printf("\n");
    }

    return 0;
}