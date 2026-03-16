// Write a C program to find factorial of a number using function.

#include <stdio.h>

void fact(int);

int main()
{
    int n, s;
    printf("enter number:");
    scanf("%d", &n);
    fact(n);
    return 0;
}
void fact(int n)
{
    int i = 1, f = 1;
    while (i <= n)
    {
        f = f * i;
        i++;
    }
    printf("factorial is %d", f);
}