// Delete an element from an array.
#include <stdio.h>

int main()
{
    int a[100], n, i, position;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &position);

    for (i = position - 1; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }

    n--;

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
