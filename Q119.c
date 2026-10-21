// Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
#include <stdio.h>
int main()
{
    int arr[100], n, i;
    int count[1001] = {0};
    int repeated = -1;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        count[arr[i]]++;
        if (count[arr[i]] == 2)
        {
            repeated = arr[i];
            break;
        }
    }
    printf("%d", repeated);
    return 0;
}