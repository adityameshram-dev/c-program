// Write a program to generate multiplication table for numbers 1 to 5.

#include<stdio.h>

int main() {
    int i = 1,j = 1;
    while (i<=5)
    {
        printf("Table of %d\n",i);
        while (j<=10)
        {
            printf("%d * %d = %d\n", i,j,i*j);
            j++;
        }
        printf("\n");
        j = 1;
        i++;           
    }
    return 0;
}