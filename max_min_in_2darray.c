#include <stdio.h>
int main()
{
    int len,n,i,j,max,min;
    printf("enter size of array:");
    scanf("%d",&len);
    int arr[len][len];
    for(i=0;i<len;i++)
      for(j=0;j<len;j++)
    {     
        printf("enter array element:");
        scanf("%d",&arr[i][j]);
    }
    max=arr[0][0];
    min=arr[0][0];
    for(i=0;i<len;i++)
    for(j=0;j<len;j++)
    {
        if(arr[i][j]>max)
          max=arr[i][j];
        if(arr[i][j]<min)
          min=arr[i][j];  
    }
    printf("The maximum and minimum values are %d and %d",max,min);
    return 0;
}