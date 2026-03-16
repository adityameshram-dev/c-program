// Write C Program to print following or similar pattern 
/*
    4 
    4 3 
    4 3 2 
    4 3 2 1 
*/

#include <stdio.h>

int main()
{
    for (int i = 4; i >= 1; i--)
    {
        for (int j = 4; j >= i; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
