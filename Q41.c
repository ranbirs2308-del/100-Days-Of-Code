// Write a program to swap the first and last digit of a number.
#include <stdio.h>

int main()
{
    int n, first, last, temp, place = 1, result;

    scanf("%d", &n);

    last = n % 10;

    temp = n;

    while (temp >= 10)
    {
        temp = temp / 10;
        place = place * 10;
    }

    first = temp;

    result = n - first * place - last;
    result = result + last * place + first;

    printf("%d", result);

    return 0;
}
