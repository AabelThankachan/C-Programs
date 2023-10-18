//adding and swapping using pointers
#include<stdio.h>
int add(int *x,int *y)
{
    return(*x +*y);
}
int swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    printf("x=%d,y=%d \n",*x,*y);
}
void main()
{
    int x,y,sum;
    int swapping;
    printf("enter 2 numbers: \n");
    scanf("%d %d",&x,&y);
    sum=add(&x,&y);
    printf("the sum is: %d \n",sum);
    swap(&x,&y);
}