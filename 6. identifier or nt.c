#include<stdio.h>
#include<string.h>

main()
{
 int f=1,i=1,j;
 char s[20],k[32][15]={"auto","break","case","char","const","continue","default","do","double","extern","float","for","return","enum","goto","if","int","long","register","short","signed","sizeof","static","struct","switch","typedef","union","unsign","void","volatile","while"};
 printf("Enter string :");
 scanf("%s",&s);
 if(!((s[0]>='a'&&s[0]<='z')||(s[0]>='A'&&s[0]<='Z')||(s[0]=='_')))
  f=0;
 for(j=0;j<32;j++)
  if(!strcmp(s,k[j]))
  {
   f=0;
   break;
  }
 while(s[i]!='\0')
 {
  if(!((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||(s[i]=='_')||(s[i]>='0'&&s[i]<='9')))
  {
   f=0;
   break;
  }
  i++;
 }
 if(f==1)
  printf("%s is an identifier\n",s);
 else
  printf("%s is not an identifier\n",s);
}