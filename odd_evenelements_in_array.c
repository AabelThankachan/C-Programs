//printing odd and even elements in array
#include <stdio.h>
void main()
{
    int arr1[100], arr2[100], arr3[100];
    int i,j=0,k=0,n;
    printf("Input the number of elements to be stored in the array :");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("enter the number:");
        scanf("%d",&arr1[i]);
    }
    for(i=0;i<n;i++)
    {
	if (arr1[i]%2 == 0)
	{
	   arr2[j] = arr1[i];
	   j++;
	}
	else
	{
	   arr3[k] = arr1[i];
	   k++;
	}
    }
    printf("\nThe Even elements are : \n");
    for(i=0;i<j;i++)
    {
	printf("%d ",arr2[i]);
    }
    printf("\nThe Odd elements are :\n");
    for(i=0;i<k;i++)
    {
	printf("%d ", arr3[i]);
    }
 }