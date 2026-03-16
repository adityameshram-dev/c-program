// Write a program to find area of circle with PI as #define directives.

#include <stdio.h>
#define PI 3.14

int main()
{
    float rad;

    printf("Enter radius of Circle: ");
    scanf("%f", &rad);
    printf("Area of Circle = %.2f",PI * rad * rad);
    return 0;
}