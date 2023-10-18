//reading and printing data in structures using functions
#include<stdio.h>
struct product{
    char name[20];
    int price;
    int quantity;   
}p[50];

void read(struct product s[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("enter item name:");
        scanf("%s",s[i].name);
        printf("enter price:");
        scanf("%d",&s[i].price);
        printf("enter quantity:");
        scanf("%d",&s[i].quantity);     
    }
}

void display(struct product s[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Item %d \n",i+1);
        printf("Item name: %s \n",s[i].name);
        printf("Price: %d \n",s[i].price);
        printf("Quantity: %d \n",s[i].quantity);
        printf("Amount: %d \n",s[i].quantity*s[i].price);
        printf("\n");
    }
}

void main()
{
    int n;
    printf("enter how many items:");
    scanf("%d",&n);
    read(p,n);
    display(p,n);
}