#include<stdio.h>
#include<string.h>

main()
{
 char* reverse(char*);
 char s[20];
 printf("Enter string :");
 scanf("%s",&s);
 printf("Reverse of given string is: %s\n",reverse(s));
}

char* reverse(char* s)
{
 void* malloc(long unsigned int);
 int l=0,i=0;
 l=strlen(s);
 //char r[l];
 char *r=(char*)malloc(sizeof(char)*l);
 l--;
 while(l>=0)
  r[i++]=s[l--];
 return r;
}
