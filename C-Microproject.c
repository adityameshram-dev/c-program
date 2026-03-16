#include <stdio.h>

void matrixAddition();
void matrixMultiplication();
void matrixTranspose();
void matrixDeterminant();

int main()
{

    int choice;
    while (1)
    {
        printf("\n    ==== Matrix Operations Menu ====\n");
        printf("\n\n");
        printf("      1. Matrix Addition\n");
        printf("      2. Matrix Multiplication\n");
        printf("      3. Transpose of Matrix\n");
        printf("      4. Determinant of Matrix (3,3)\n");
        printf("      5. Exit\n");
        printf("\n\n");
        printf("Now Enter your choice What Do You Want to Perform: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            matrixAddition();
            break;
        case 2:
            matrixMultiplication();
            break;
        case 3:
            matrixTranspose();
            break;
        case 4:
            matrixDeterminant();
            break;
        case 5:
            printf("Exiting Program. Thank You!\n");
            return 0;
        default:
            printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}

void matrixAddition()
{
    int A[10][10], B[10][10], C[10][10];
    int r, c, i, j;
    printf("Enter rows and columns of matrices: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of Matrix A:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of Matrix B:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    printf("Resultant Matrix (A + B):\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
}

void matrixMultiplication()
{
    int A[10][10], B[10][10], C[10][10];
    int r1, c1, r2, c2, i, j, k;
    printf("Enter rows and columns for Matrix A: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns for Matrix B: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2)
    {
        printf("Matrix multiplication not possible! Columns of A must equal rows of B.\n");
        return;
    }

    printf("Enter elements of Matrix A:\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of Matrix B:\n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            C[i][j] = 0;
        }
    }

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            for (k = 0; k < c1; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("Resultant Matrix (A x B):\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
}

void matrixTranspose()
{
    int A[10][10], T[10][10];
    int r, c, i, j;
    printf("Enter rows and columns of the matrix: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of the Matrix:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            T[j][i] = A[i][j];
        }
    }

    printf("Transpose of the Matrix:\n");
    for (i = 0; i < c; i++)
    {
        for (j = 0; j < r; j++)
        {
            printf("%d ", T[i][j]);
        }
        printf("\n");
    }
}

void matrixDeterminant()
{
    int A[3][3];
    int Determinant;
    printf("Enter elements of the Matrix:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    Determinant = a[0][0] * (a[1][1] * a[2][2] - a[1][2] * a[2][1]) - a[0][1] * (a[1][0] * a[2][2] - a[1][2] * a[2][0]) + a[0][2] * (a[1][0] * a[2][1] - a[1][1] * a[2][0]);

    printf("Determint = %d", Determinant);
}