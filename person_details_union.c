//details of a person using union
#include<stdio.h>
#define c 50
union details
{
    char name[c];
    char house_name[c];
    char city_name[c];
    char state_name[c];
    char pincode[c];
}s;
void main()
{
    printf("enter person name:");
    scanf("%s",s.name);
    printf("enter house name:");
    scanf("%s",s.house_name);
    printf("enter city name:");
    scanf("%s",s.city_name);
    printf("enter state name:");
    scanf("%s",s.state_name);
    printf("enter pincode:");
    scanf("%s",s.pincode);
    printf("person name: %s \n",s.name);
    printf("house name: %s \n",s.house_name);
    printf("city name: %s \n",s.city_name);
    printf("state name: %s \n",s.state_name);
    printf("pincode: %s \n",s.pincode);
}