// Write a program to swap two number using call by reference.

#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = a;
    a = b;
    b = temp;
    return
}
int main()
{
    int n1, n2;
    printf("enter two number:");
    scanf("%d%d", &n1, &n2);

    printf("\nbefore swapping:\n");
    printf("a=%d and b=%d\n", n1, n2);
    swap(&a,&b);
    printf("\nafter swapping:\n");
    printf("a=%d and a=%d\n", n1, n2);

    return 0;
}