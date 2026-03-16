// Write C program to input 5 numbers using array and sort the element in descending order. 

#include <stdio.h>

int main()
{
    int arr[5],i,j,k;

    printf("Enter 5 element of array: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 5 - 1; i++)
    {
        k = i;
        for (j = i + 1; j < 5; j++)
        {
            if (arr[j] > arr[k])
            {
                k = j;
            }
        }
        if (k != i)
        {
            int temp = arr[i];
            arr[i] = arr[k];
            arr[k] = temp;
        }
    }    
    printf("\nArray: \n");
    for (k = 0; k < 5; k++)
    {
        printf("%d ", arr[k]);
    }

    return 0;
}