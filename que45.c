// Find factorial of a given number using recursive function.

#include <stdio.h>

int fact(int);

int main()
{
    int n;
    printf("enter number:");
    scanf("%d", &n);
    printf("fact is: %d", fact(n));
    return 0;
}

int fact(int a)
{
    if (a == 0)
    {
        return 1;
    }
    else
    {
        return (a * fact(a - 1));
    }
}