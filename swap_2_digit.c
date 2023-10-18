//swapping two digit number
#include <stdio.h>
void main()
{
    int a,b,c,d;
    printf("Enter two digit number to swap:");
    scanf("%d", &a);
    b=a%10;
    c=(a-b)/10;
    d=10*b +c;
    printf("swapped number is: %d", d);
}    

