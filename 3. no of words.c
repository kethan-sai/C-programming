#include<stdio.h>
#include<string.h>

main()
{
 int words(char*);
 char s[50];
 printf("Enter sentence :");
 gets(s);
 printf("No. of words=%d\n",words(s));
}

int words(char* s)
{
 int i=0,w=0,f=1;
 while(s[i]!='\0')
 {
  if(s[i]==' ')
  {
   if(f==1)
   {
    w++;
    f=0;
   }
  }
  else
   f=1;
  i++;
 }
 return w+1;
}