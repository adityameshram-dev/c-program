// Find Fibonacci series of a given number using function.

#include <stdio.h>
void fibo(int n)
{
    int i = 1, f3, f1 = 0, f2 = 1;
    while (i <= n)
    {
        printf("%d ", f1);
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
        i++;
    }
}
int main()
{
    int i, n, a, b;
    printf("enter term for fibonacci: ");
    scanf("%d", &n);
    fibo(n);

    return 0;
}
