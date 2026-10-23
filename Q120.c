// Write a program to take a string input. Change it to sentence case.
#include <stdio.h>
int main()
{
    char str[1000];
    int i = 0, start = 1;
    fgets(str, 1000, stdin);
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        if (start == 1 && str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
            start = 0;
        }
        if (str[i] == '.' || str[i] == '!' || str[i] == '?')
        {
            start = 1;
        }
        i++;
    }
    printf("%s", str);
    return 0;
}
