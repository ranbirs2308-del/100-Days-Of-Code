// Print initials of a name with the surname displayed in full.
#include <stdio.h>
int main()
{
    char str[100];
    int i = 0, lastSpace = -1;
    fgets(str, 100, stdin);
    while (str[i] != '\0' && str[i] != '\n')
    {
        if (str[i] == ' ')
        {
            lastSpace = i;
        }
        i++;
    }
    if (lastSpace == -1)
    {
        printf("%s", str);
    }
    else
    {
        printf("%c ", str[0]);
        for (i = 0; i < lastSpace; i++)
        {
            if (str[i] == ' ' && i + 1 < lastSpace)
            {
                printf("%c ", str[i + 1]);
            }
        }
        for (i = lastSpace + 1;
             str[i] != '\0' && str[i] != '\n';
             i++)
        {
            printf("%c", str[i]);
        }
    }
    return 0;
}
