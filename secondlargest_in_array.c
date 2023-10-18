//finding second largest element in array
#include<stdio.h>
void main()
{
    int i,n,large,slarge=-1;
    printf("enter size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter array elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    large=arr[0];
    for(i=1;i<n;i++)
    {
        if (arr[i]>large)
        {
            slarge=large;
            large=arr[i];
        }
        else if (arr[i]>slarge)
        {
            slarge=arr[i];
        }  
    }
    printf("Largest element is %d \n",large);
    if(slarge==-1)
        printf("No second largest \n");
    else
        printf("Second largest element is %d",slarge);    
}