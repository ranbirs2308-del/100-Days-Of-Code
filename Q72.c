//  Find the sum of all elements in a matrix.
#include <stdio.h>

int main()
{
    int a[10][10], rows, columns, i, j;
    int sum = 0;

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
        for (j = 0; j < columns; j++)
        {
            sum = sum + a[i][j];
        }
    }

    printf("%d", sum);

    return 0;
}
