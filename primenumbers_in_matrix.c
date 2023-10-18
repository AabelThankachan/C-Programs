//prime numbers in matrix
#include<stdio.h>
void main()
{
    int i,j,k,m,n,check;
    printf("enter number of rows and columns in matrix: \n");
    scanf("%d %d",&m,&n);
    int A[m][n];
    printf("enter elements in matrix: \n");
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("prime numbers in matrix are: \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            check=0;
            for(k=2;k<=A[i][j];k++)
            {
                if (A[i][j]%k==0)
                {
                    check++;
                }
            }
            if(check==1)
                printf("%d \t",A[i][j]);                         
        }
    }
}