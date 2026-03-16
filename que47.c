// Write a program to print values of variables and their addresses using pointer.

#include<stdio.h>

int main()
{
    int a = 5;
    int *ptr;
    ptr = &a;
    printf("%d\n",*ptr);
    printf("%p",ptr);
    return 0;
}

