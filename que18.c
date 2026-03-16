// Write a program to sum all the even numbers between 1 to 100.

#include <stdio.h>

int main()
{
    int sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
    }
    printf("sum of all even number from 1 to 100 is %d ",sum);
    return 0;
}