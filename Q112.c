// Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.
#include <stdio.h>
int main()
{
    int arr[100], n, i;
    int sum, maxSum;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    sum = arr[0];
    maxSum = arr[0];
    for(i = 1; i < n; i++)
    {
        if(sum + arr[i] > arr[i])
        {
            sum = sum + arr[i];
        }
        else
        {
            sum = arr[i];
        }
        if(sum > maxSum)
        {
            maxSum = sum;
        }
    }
    printf("%d", maxSum);
    return 0;
}
