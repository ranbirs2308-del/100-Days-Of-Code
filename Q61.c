// Search for an element in an array using linear search.
#include <stdio.h>

int main()
{
    int a[100], n, i, search, found = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &search);

    for (i = 0; i < n; i++)
    {
        if (a[i] == search)
        {
            found = 1;
            break;
        }
    }

    if (found == 1)
    {
        printf("Element found");
    }
    else
    {
        printf("Element not found");
    }

    return 0;
}
