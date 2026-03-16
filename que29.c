// Write C program to calculate Addition of two 3X3 matrices.

#include <stdio.h>

int main()
{
    int r, c, i, j;
    printf("Enter row and column of matrix:");
    scanf("%d%d", &r, &c);

    int a[r][c],b[r][c], sum[r][c];

    printf("Enter element of matrix 1:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter element of matrix 2:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Addition of two matrix:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}