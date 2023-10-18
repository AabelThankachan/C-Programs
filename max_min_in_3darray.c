#include <stdio.h>
int main()
{
    int len,n,i,j,k,max,min;
    printf("enter size of array:");
    scanf("%d",&len);
    int arr[len][len][len];
    for(i=0;i<len;i++)
      for(j=0;j<len;j++)
      for(k=0;k<len;k++)
    {     
        printf("enter array element:");
        scanf("%d",&arr[i][j][k]);
    }
    max=arr[0][0][0];
    min=arr[0][0][0];
    for(i=0;i<len;i++)
    for(j=0;j<len;j++)
    for(k=0;k<len;k++)
    {
        if(arr[i][j][k]>max)
          max=arr[i][j][k];
        if(arr[i][j][k]<min)
          min=arr[i][j][k];  
    }
    printf("The maximum and minimum values are %d and %d",max,min);
    return 0;
}