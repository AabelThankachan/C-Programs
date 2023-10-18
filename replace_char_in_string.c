//replacing character in a string
#include<stdio.h>
#include<string.h>
void main()
{    
    char s[100], old, new;
    int i=0;
    printf("Enter a string:");
    scanf("%[^\n]", s);
    printf("Enter the character to be replaced:");
    scanf(" %c", &old);
    printf("Enter the new character:");
    scanf(" %c", &new);
    while (s[i] != '\0')
    {
        if (s[i]==old)
        {
            s[i]=new;
        }
        i++;
    }
    printf("The new string is:%s", s);
}