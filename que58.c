// Write a program to reverse array element

#include <stdio.h>

int main()
{
    int i, n, a[50];
    printf("enter number of array:");
    scanf("%d", &n);
    printf("enter array element");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("reverse:");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }
}