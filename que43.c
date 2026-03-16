// Write a program to find area of circle using user defined function

#include <stdio.h>
#define PI 3.14
int area(float rad)
{
    return PI * rad * rad;
}
int main()
{
    int r;
    printf("enter radius:");
    scanf("%d", &r);
    printf("Area of circle %f", area(rad));

    return 0;
}