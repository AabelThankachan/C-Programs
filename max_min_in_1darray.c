//max and min values in array
#include <stdio.h>
void main()
{
    int len,n,i,max,min;
    printf("enter size of array:");
    scanf("%d",&len);
    int arr[len];
    for(i=0;i<len;i++)
    {
        printf("enter array element:");
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    min=arr[0];
    for(i=0;i<len;i++)
    {
        if(arr[i]>max)
          max=arr[i];
        if(arr[i]<min)
          min=arr[i];  
    }
    printf("The maximum and minimum values are %d and %d",max,min);
}