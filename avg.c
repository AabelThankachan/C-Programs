//average of numbers
#include<stdio.h>
int main()
{
    int count=0,sum=0,con=0,no;
    float avg;
    do
    {
        printf("enter a number:");
        scanf("%d",&no);
        con=0;
        sum=sum+no;
        printf("Do you want to add more values?(yes[1],no[0])");
        scanf("%d",&con);
        count++;
    }
    while(con==1);
    avg=(float) sum/ (float) count;
    printf("The average of %d nos is %f",count,avg);
    return 0;
}