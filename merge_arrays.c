// merging two sorted arrays without sorting
#include <stdio.h>
void main()
{
    int i, j, k, m, n;
    printf("enter size of first array:");
    scanf("%d", &m);
    int A[m];
    printf("enter first array in sorted order: \n");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("first array:");
    for (i = 0; i < m; i++)
    {
        printf("%d,", A[i]);
    }
    printf("\n");

    printf("enter size of second array:");
    scanf("%d", &n);
    int B[n];
    printf("enter second array in sorted order: \n");
    for (j = 0; j < n; j++)
    {
        scanf("%d", &B[j]);
    }
    printf("second array:");
    for (j = 0; j < n; j++)
    {
        printf("%d,", B[j]);
    }
    printf("\n");

    int C[20];
    for (i = 0, j = 0, k = 0; i < m && j < n; k++)
    {
        if (A[i] < B[j])
            C[k] = A[i++];
        else
            C[k] = B[j++];
    }
    while (i < m)
        C[k++] = A[i++];
    while (j < n)
        C[k++] = B[j++];
    printf("The merged array is: \n");
    for (k = 0; k < m + n; k++)
        printf("%d,", C[k]);
}