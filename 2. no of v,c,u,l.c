#include<stdio.h>

main()
{
 void count(char*);
 char s[20];
 printf("Enter string :");
 scanf("%s",&s);
 count(s);
}

void count(char *s)
{
 int i=0,v=0,c=0,l=0,u=0;
 while(s[i]!='\0')
 {
  if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
   v++;
  else
   c++;
  if(s[i]>='a'&&s[i]<='z')
   l++;
  else
   u++;
  i++;
 }
 printf("No. of vowels=%d\nNo. of consonents=%d\nNo. of lower case=%d\nNo. of upper case=%d\n",v,c,l,u);
}