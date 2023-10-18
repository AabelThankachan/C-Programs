//printing data of employees using structures
#include<stdio.h>
struct details
{
    char name[100];
    int emp_id;
    int salary;
}s[50];
void main()
{
    int i,j,n;
    printf("Enter the no.of employees:");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("enter employee name:");
        scanf("%s",s[i].name);
        printf("enter employee id:");
        scanf("%d",&s[i].emp_id);
        printf("enter employee salary:");
        scanf("%d",&s[i].salary);
    }
    for (j=0;j<n;j++)
    {
        printf("employee name is %s \n",s[j].name);
        printf("employee id is %d \n",s[j].emp_id);
        printf("employee salary is %d \n",s[j].salary);
    }
}