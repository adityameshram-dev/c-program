// Write an C program to determine whether a given number is prime.

#include <stdio.h>

int main()
{

    int n1, i = 1, count = 0;
    printf("Enter Number: ");
    scanf("%d", &n1);

    while (i <= n1) 
    {
        if (n1 % i == 0)
        {
            count++;
        }
        if (count > 2)
        {
            break;
        }
        i++;
    }

    if (count == 2)
    {
        printf("%d is a Prime number ", n1);
    }
    else
    {
        printf("%d is not a Prime number ", n1);
    }
    return 0;
}
