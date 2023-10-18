//number of vowels, consonants and spaces in a string
#include<stdio.h>
#include<string.h>
void main()
{
    char word[50];
    int len=0,i;
    char ch;
    printf("enter the string:");
    gets(word);
    for (i=0; word[i]!='\0'; i++)
    {
      len++;
    }
    int vowel=0,con=0,space=0;
    for (i=0; word[i]!='\0'; i++)
    {
      ch=word[i];
      if (ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'|| ch=='A'|| ch=='E'|| ch=='I'||ch=='O'|| ch=='U')
      {
        vowel++;
      }
      else if (ch==' ')
      {
        space++;
      } 
      else
      {
        con++;
      }
    }
    printf("number of vowels is %d, consonants is %d and spaces is %d",vowel,con,space);
}