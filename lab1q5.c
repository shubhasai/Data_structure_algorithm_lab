#include <stdio.h>
int main()
{
    int a[10][10], b[10][10], mul[10][10], row, col, i, j, k;
    printf("enter the number of row=");
    scanf("%d", &row);
    printf("enter the number of column=");
    scanf("%d", &col);
    printf("enter the first matrix element=\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("enter the second matrix element=\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("multiply of the matrix=\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            mul[i][j] = 0;
            for (k = 0; k < col; k++)
            {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    //for printing result
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}