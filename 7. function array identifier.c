#include<stdio.h>
#include<string.h>
main()
{
 char s[15],k[32][15]={"auto","break","case","char","const","continue","default","do","double","else","extern","float","for","enum","goto","if","int","long","register","return","short","signed","sizeof","static","struct","switch","typedef","union","unsign","void","volatile","while"};
 int i=0,fun=0,arr=0,f=1,j;
 printf("Enter string:");
 scanf("%s",&s);
 while(1)
 {
  if(s[i]=='('&&s[i+1]==')'&&s[i+2]=='\0')
  {
   fun=1;
   break;
  }
  if(s[i]=='['&&s[i+1]==']'&&s[i+2]=='\0')
  {
   arr=1;
   break;
  }
  if(s[i]=='\0')
   break;
  i++;
 }
 if(!((s[0]>='a'&&s[0]<='z')||(s[0]>='A'&&s[0]<='Z')||(s[0]=='_')))
  f=0;
 for(j=0;j<32;j++)
  if(!strcmp(s,k[j]))
  {
   f=0;
   break;
  }
 for(j=0;j<i;j++)
  if(!((s[j]>='a'&&s[j]<='z')||(s[j]>='A'&&s[j]<='Z')||(s[j]>='0'&&s[j]<='9')||(s[j]=='_')))
  {
   f=0;
   break;
  }
 if(f==1)
  if(fun==1)
   printf("%s is a function\n",s);
  else if(arr==1)
   printf("%s is an array\n",s);
  else
   printf("%s is an identifier\n",s);
 else
  printf("%s is not a valid identifier or function or an array\n",s);
}