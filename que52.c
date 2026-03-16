/* Write a program to accept two numbers from user and perform addition, 
subtraction, multiplication and division operations using pointer. [6M]  */

#include <stdio.h>

int main()
{
    int a, b, *ptr1, *ptr2;
    float c, d, *pt1, *pt2;

    ptr1 = &a;
    ptr2 = &b;
    pt1 = &c;
    pt2 = &d;

    printf("enter 2 number:");
    scanf("%d%d", ptr1, ptr2);

    printf("enter 2 number for division:");
    scanf("%f%f", pt1, pt2);

    printf("\nAddition is: %d \n", (*ptr1 + *ptr2));

    printf("\nSubtraction is: %d\n", (*ptr1 - *ptr2));

    printf("\nMultiplication is: %d\n", (*ptr1 * *ptr2));

    if (*pt2 == 0)
        printf("\ndivision is: error");
    else
        printf("\nDivision is: %0.2f", (*pt1 / *pt2));

    return 0;
}