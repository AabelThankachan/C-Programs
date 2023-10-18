// sum of rows and columns
#include <stdio.h>
int sum_row(int m, int n, int A[m][n])
{
    int i, j;
    for (i = 0; i < m; i++)
    {
        int srow = 0;
        for (j = 0; j < n; j++)
        {
            srow += A[i][j];
        }
        printf("sum of row %d is %d \n", i + 1, srow);
    }
}

int sum_col(int m, int n, int A[m][n])
{
    int i, j;
    for (i = 0; i < m; i++)
    {
        int scol = 0;
        for (j = 0; j < n; j++)
        {
            scol += A[j][i];
        }
        printf("sum of column %d is %d \n", i + 1, scol);
    }
}

void main()
{
    int m, n, i, j;
    printf("enter number of rows and columns: \n");
    scanf("%d %d", &m, &n);
    int A[m][n];
    printf("enter matrix elements: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    sum_row(m, n, A);
    sum_col(m, n, A);
}