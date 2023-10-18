//swapping nearby elements in array
#include <stdio.h>
int main()
{
    int n,i,k,temp;
    printf("enter size of array(<100):");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("enter the array elements:");
        scanf("%d",&arr[i]);
    }
    printf("The array is: \n");
    for(i=0;i<n;i++)
    {
        printf(" %d \n",arr[i]);
    }   
    printf("enter position of element to be swapped with next element:");
    scanf("%d",&k);
    if(k>=1 && k<=n)
      {
         temp=arr[k-1];        
         arr[k-1]=arr[k];
         arr[k]=temp; 
         printf("The array after swapping is: \n");
         for(i=0;i < n;i++)
          {
            printf("%d \n",arr[i]);
          }
      }
    else 
      {
        printf("wrong index given");    
      } 
  return 0;    
}        

