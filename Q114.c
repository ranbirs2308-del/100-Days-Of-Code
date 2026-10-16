// Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
#include <stdio.h>
int main()
{
    char s[100];
    int i, j, k, length = 0;
    int count, maxLength = 0, repeat;
    scanf("%99s", s);
    while (s[length] != '\0')
    {
        length++;
    }
    for (i = 0; i < length; i++)
    {
        count = 0;
        for (j = i; j < length; j++)
        {
            repeat = 0;
            for (k = i; k < j; k++)
            {
                if (s[k] == s[j])
                {
                    repeat = 1;
                    break;
                }
            }
            if (repeat == 1)
            {
                break;
            }
            count++;
            if (count > maxLength)
            {
                maxLength = count;
            }
        }
    }
    printf("%d", maxLength);
    return 0;
}
