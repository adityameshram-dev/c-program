// Write a program where two numbers are input through the keyboard and interchange the two numbers.

#include <stdio.h>

int main()
{
    int a, b, temp;

    printf("enter the two: ");
    scanf("%d%d", &a, &b);
    
    printf("\nbefore swapping:\n");
    printf("a=%d and b=%d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nafter swapping:\n");
    printf("a=%d and a=%d\n", a, b);

    return 0;
}
