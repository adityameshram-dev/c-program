// Count even number of element and sum of it in 5 number of array

#include <stdio.h>

int main()
{
    int arr[5], i, count = 0,sum = 0;

    printf("Enter 5 no.\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("total even elements in this arrya with addition:");
    for (i = 0; i < 5; i++)
    {
        if (arr[i] % 2 == 0)
        {
            sum += arr[i];
            count++;
        }
    }
    printf("\n Count: %d\n Additin: %d", count,sum);
}