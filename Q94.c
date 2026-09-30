// Find the longest word in a sentence.
#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;
    int count = 0, max = 0;
    int start = 0, maxStart = 0;
    int j;

    fgets(str, 100, stdin);

    while (1)
    {
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\0')
        {
            if (count == 0)
            {
                start = i;
            }

            count++;
        }
        else
        {
            if (count > max)
            {
                max = count;
                maxStart = start;
            }

            count = 0;

            if (str[i] == '\0')
            {
                break;
            }
        }

        i++;
    }

    for (j = maxStart; j < maxStart + max; j++)
    {
        printf("%c", str[j]);
    }

    return 0;
}
