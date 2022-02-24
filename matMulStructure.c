#include <stdio.h>
#include <stdlib.h>
typedef struct matrix
{
    int row, col;
    int **ptr;
} matrix;
int main()
{
    matrix mat_1, mat_2, mat_3;
    int i, j, k;
    printf("Enter the row size of 1st matrix\n");
    scanf("%d", &mat_1.row);
    printf("Enter the column size of 1st matrix\n");
    scanf("%d", &mat_1.col);
    printf("Enter the row size of 2nd matrix\n");
    scanf("%d", &mat_2.row);
    printf("Enter the column size of 2nd matrix\n");
    scanf("%d", &mat_2.col);
    if (mat_1.col != mat_2.row)
    {
        printf("Invalid size");
        return (0);
    }
    mat_3.row = mat_1.row;
    mat_3.col = mat_2.col;
    mat_1.ptr = (int **)malloc(sizeof(int *) * mat_1.row);
    for (i = 0; i < mat_1.row; i++)
    {
        *(mat_1.ptr + i) = (int *)malloc(sizeof(int) * mat_1.col);
    }
    mat_2.ptr = (int **)malloc(sizeof(int *) * mat_2.row);
    for (i = 0; i < mat_2.row; i++)
    {
        *(mat_2.ptr + i) = (int *)malloc(sizeof(int) * mat_2.col);
    }
    mat_3.ptr = (int **)malloc(sizeof(int *) * mat_3.row);
    for (i = 0; i < mat_3.col; i++)
    {
        *(mat_3.ptr + i) = (int *)malloc(sizeof(int) * mat_3.col);
    }
    printf("Enter the elements of 1st matrix\n");
    for (i = 0; i < mat_1.row; i++)
    {
        for (j = 0; j < mat_1.col; j++)
        {
            scanf("%d", &mat_1.ptr[i][j]);
        }
    }
    printf("Enter the elements of 2nd matrix\n");
    for (i = 0; i < mat_2.row; i++)
    {
        for (j = 0; j < mat_2.col; j++)
        {
            scanf("%d", &mat_2.ptr[i][j]);
        }
    }
    for (i = 0; i < mat_1.row; i++)
    {
        for (j = 0; j < mat_1.col; j++)
        {
            mat_3.ptr[i][j] = 0;
            for (k = 0; k < mat_2.row; k++)
            {
                mat_3.ptr[i][j] += mat_1.ptr[i][k] * mat_2.ptr[k][j];
            }
        }
    }
    printf("multiplied matrix..\n");
    for (i = 0; i < mat_3.row; i++)
    {
        for (j = 0; j < mat_3.col; j++)
        {
            printf("%d ", mat_3.ptr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
