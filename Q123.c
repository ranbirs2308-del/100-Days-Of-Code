// Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.
#include <stdio.h>
int main()
{
    FILE *fp;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0, hasContent = 0, lastChar = '\n';
    int c;
    fp = fopen("info.txt", "r");
    if (fp == NULL)
    {
        printf("Error opening file");
        return 1;
    }
    while ((c = fgetc(fp)) != EOF)
    {
        ch = c;
        characters++;
        hasContent = 1;
        lastChar = ch;
        if (ch == '\n')
        {
            lines++;
        }
        if (ch == ' ' || ch == '\n')
        {
            inWord = 0;
        }
        else if (inWord == 0)
        {
            words++;
            inWord = 1;
        }
    }
    if (hasContent == 1 && lastChar != '\n')
    {
        lines++;
    }
    printf("Total Characters = %d\n", characters);
    printf("Total Words = %d\n", words);
    printf("Total Lines = %d\n", lines);
    fclose(fp);
    return 0;
}