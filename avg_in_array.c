// average of numbers in array
#include <stdio.h>
void main()
{
    int i, len, sum = 0;
    printf("enter how many numbers are there:");
    scanf("%d", &len);
    int arr[len];
    printf("enter the numbers: \n");
    for (i = 0; i < len; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    float avg;
    avg = (float)sum / (float)len;
    printf("average of numbers is %f", avg);
}