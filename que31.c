// Write C program to calculate multiplication of two 3X3 matrices.

#include <stdio.h>

int main()
{
    int a[50][50], b[50][50], mul[50][50];
    int r1, c1, r2, c2, i, j, k;

    printf("Enter row and column for matrix1:");
    scanf("%d%d", &r1, &c1);
    printf("Enter row and column for matrix2:");
    scanf("%d%d", &r2, &c2);

    if (c1 == r2)
    {
        printf("enter element of matrix 1:\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }

        printf("enter element of matrix 2:\n");
        for (i = 0; i < r2; i++)
        {
            for (j = 0; j < c2; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }

        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                mul[i][j] = 0;
                for (k = 0; k < r2; k++)
                {
                    mul[i][j] = mul[i][j] + a[i][k] * b[k][j];
                }
            }
        }

        printf("multiplication of matrix 1 and 2:\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                printf("%d \t", mul[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("row and column doesn't match");
    }
    return 0;
}