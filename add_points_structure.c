//adding two points
#include<stdio.h>
#include<math.h>
struct point
{
    float x;
    float y;
}p1,p2,p3;
void main()
{
    printf("enter co-ordinates of first point: \n");
    scanf("%f %f",&p1.x,&p1.y);
    printf("enter co-ordinates of second point: \n");
    scanf("%f %f",&p2.x,&p2.y);
    p3.x=p1.x+p2.x;
    p3.y=p1.y+p2.y;
    printf("co-ordinates of sum is: %f %f",p3.x,p3.y);
}

