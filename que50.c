// Write a program to find largest number from an array using pointer.

#include <stdio.h>

int main()
{
    int a[5], i, max;
    int *ptr;
    ptr = a;
    printf("enter array element");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", ptr + i);
    }

    max = *ptr;
    
    for (i = 1; i < 5; i++)
    {
        if (*(ptr + i) > max)
        {
            max = *(ptr + i);
        }
    }
    printf("max is: %d", max);
    return 0;
}