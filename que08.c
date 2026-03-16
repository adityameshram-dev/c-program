// Write a program to check whether given number is Positive even, Positive odd, Negative even or Negative odd.

#include <stdio.h>

int main()
{

    int n1;
    printf("Enter Number: ");
    scanf("%d", &n1);

    if (n1 >= 0)
    {
        if (n1 % 2 == 0)
        {
            printf("%d is a Positive even ", n1);
        }
        else
        {
            printf("%d is a Positive odd ", n1);
        }
    }
    else
    {
        if (n1 % 2 == 0)
        {
            printf("%d is a Negative even ", n1);
        }
        else
        {
            printf("%d is a Negative odd ", n1);
        }
    }
    return 0;
}
