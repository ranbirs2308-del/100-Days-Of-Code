// Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.
#include <stdio.h>
int main()
{
    FILE *fp;
    int ch;
    int vowels = 0, consonants = 0;
    fp = fopen("input.txt", "r");
    if (fp == NULL)
    {
        printf("Error opening file");
        return 1;
    }
    while ((ch = fgetc(fp)) != EOF)
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u' || ch == 'A' ||
            ch == 'E' || ch == 'I' || ch == 'O' ||
            ch == 'U')
        {
            vowels++;
        }
        else if ((ch >= 'a' && ch <= 'z') ||
                 (ch >= 'A' && ch <= 'Z'))
        {
            consonants++;
        }
    }
    printf("Total Vowels = %d\n", vowels);
    printf("Total Consonants = %d", consonants);
    fclose(fp);
    return 0;
}
