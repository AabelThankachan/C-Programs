//structures for details of item purchased
#include<stdio.h>
struct items{
    char name[20];
    int quantity;
    int price;
}s[50];

void main()
{
    int i,n;
    printf("Enter how many items:");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
    printf("enter name of item: \n");
    scanf("%s",s[i].name);
    printf("enter quantity of item: \n");
    scanf("%d",&s[i].quantity);
    printf("enter price of item: \n");
    scanf("%d",&s[i].price);
    printf("\n");
    }
    for(i=0;i<n;i++)
    {
    printf("Item name: %s \n",s[i].name);
    printf("Quantity: %d \n",s[i].quantity);
    printf("Price: %d \n",s[i].price);
    printf("Amount: %d \n",s[i].quantity*s[i].price);
    printf("\n");
    }
}


