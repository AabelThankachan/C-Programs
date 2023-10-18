//AB=BA matrix
#include<stdio.h>
void main()
{
    int i,j,k,m,n,p,q;
    int total,check=0;
    printf("enter sizes: \n");
    scanf("%d %d %d %d",&m,&n,&p,&q);
    int A[m][n],B[p][q];
    if((n!=p)||(m!=q))
       printf("cannot multiply matrices");
    else
    {
        printf("enter elements of first matrix:\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&A[i][j]);
            }
        }
        printf("enter elements of second matrix:\n");
        for (i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
            {
                scanf("%d",&B[i][j]);
            }    
        }     
    }
//checking AB and BA now
int AB[m][q],BA[p][n];
for (i=0;i<m;i++)
{
    for(j=0;j<q;j++)
    {
        total=0;
        for (k=0;k<p;k++)
        {
            total+=A[i][k]*B[k][j];
        }
        AB[i][j]=total;
    }
}
for (i=0;i<p;i++)
{
    for(j=0;j<n;j++)
    {
        total=0;
        for (k=0;k<q;k++)
        {
            total+=B[i][k]*A[k][j];
        }
        BA[i][j]=total;
    }
}
for (i=0;i<m;i++)
{
    for(j=0;j<m;j++)
    {
        if (AB[i][j]!=BA[i][j])
        {
            check=1;
            break;
        }
    }
}
if (check==0)
    printf("AB is equal to BA");
else
    printf("AB not equal to BA");    
}