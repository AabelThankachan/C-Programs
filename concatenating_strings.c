//concatenating two strings
#include<stdio.h>
#include<string.h>
void main()
{
    char word1[50],word2[50],word3[50]={"\0"};
    int len1=0,len2=0,i,j;
    printf("enter first word ending with dollar sign: ");
    gets(word1);
    printf("enter second word ending with dollar sign: ");
    gets(word2);
    for (i=0; word1[i]!='\0'; i++)
    {
        len1++;
    }
    for (i=0; word2[i]!='\0'; i++)
    {
        len2++;
    }
    for (j=0; j<len1; j++)
    {
        word3[j]=word1[j];
    }
    for (j=0; j<len2; j++)
    {
        word3[j+len1]=word2[j];
    }
    printf("the concatenated string is %s ",word3);
}