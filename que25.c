// Write a C program to declare array of 10 elements and find out largest element from array. 

#include <stdio.h>

int main()
{
    int arr[10], largest,i;

    printf("Enter 5 element of array: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    largest = arr[0];
    for(i=1;i<=10;i++)
    {
        if(arr[i]>largest) {
            int temp = largest;
            largest = arr[i];
            arr[i] = largest;
        }
    }

    printf("largest element from array is  %d", largest);

    return 0;
}
