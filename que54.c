// Write a program to show the use of double pointer

#include <stdio.h>

int main()
{
    int a = 5;
    int *ptr = &a;
    int **dptr = &ptr;

    printf("%d\n", a);
    printf("%d\n", *ptr); 

    printf("%p\n", ptr);   // This line print address of a
    printf("%pn", dptr);   // This line print address of ptr pointer
    printf("%p\n", &dptr); // This line print address of dptr pointer

    return 0;
}

// Pointer is variable that store the address of another normal variable
// Double pointer is variable that store address of only pointer variable