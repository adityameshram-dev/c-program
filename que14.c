// Write a program to display table of given number (Accept number from user)

#include <stdio.h>

int main()
{
    int j = 1, num;
    printf("Enter number:");
    scanf("%d", &num);
    printf("Table of %d\n", num);
    while (j <= 10)
    {
        printf("%d * %d = %d\n", num, j, num * j);
        j++;
    }
    return 0;
}