// Write a program to find largest number from an array using pointer

#include <stdio.h>

int main()
{
    int a[5], i, min;
    int *ptr;
    ptr = &a;
    printf("enter array element");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", ptr + i);
    }
    
    min = *ptr;
    for (i = 1; i < 5; i++)
    {
        if (*(ptr + i) < min)
        {
            min = *(ptr + i);
        }
    }
    printf("min is: %d", min);
    return 0;
}