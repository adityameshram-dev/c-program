// Write C program to input 5 numbers using array and display sum of it.

#include <stdio.h>

int main()
{
    int arr[5], sum = 0;

    printf("Enter 5 element of array: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum of all array element is %d", sum);

    return 0;
}