// Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".
#include <stdio.h>
int main()
{
    char s[100], t[100];
    int count1[26] = {0}, count2[26] = {0};
    int i, anagram = 1;
    scanf("%99s", s);
    scanf("%99s", t);
    for (i = 0; s[i] != '\0'; i++)
    {
        count1[s[i] - 'a']++;
    }
    for (i = 0; t[i] != '\0'; i++)
    {
        count2[t[i] - 'a']++;
    }
    for (i = 0; i < 26; i++)
    {
        if (count1[i] != count2[i])
        {
            anagram = 0;
            break;
        }
    }
    if (anagram == 1)
    {
        printf("Anagram");
    }
    else
    {
        printf("Not Anagram");
    }
    return 0;
}
