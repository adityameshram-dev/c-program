// Write a C Program to print odd numbers from 1 to 100 using for loop.

#include <stdio.h>

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 1)
        {
            printf("%d ",i);
        }
    }
    return 0;
}