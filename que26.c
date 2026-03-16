// Write a C program to declare array of 10 elements and find out smallest element from array. 

#include <stdio.h>

int main()
{
    int arr[10], smallest,i;

    printf("Enter 5 element of array: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    smallest = arr[0];
    for(i=1;i<=10;i++)
    {
        if(arr[i]<smallest) {
            int temp = smallest;
            smallest = arr[i];
            arr[i] = smallest;
        }
    }

    printf("smallest element from array is  %d", smallest);

    return 0;
}
