// Insert an element in an array at a given position.
#include <stdio.h>

int main()
{
    int a[100], n, i, element, position;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &element);
    scanf("%d", &position);

    for (i = n; i >= position; i--)
    {
        a[i] = a[i - 1];
    }

    a[position - 1] = element;

    n++;

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
