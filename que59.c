// Write a program to convert decimal value to hexadecimal value

#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Decimal: %d in Hexadecimal: %X ", num, num);

    return 0;
}