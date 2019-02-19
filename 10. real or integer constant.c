#include<stdio.h>
main()
{
 char s[10];
 int i=0,f=1,d=0;
 printf("Enter string:");
 scanf("%s",&s);
 while(s[i]!='\0')
 {
  if(!((s[i]>='0'&&s[i]<='9')||(s[i]=='.')))
  {
   f=0;
   break;
  }
  if(s[i]=='.'&&d==1)
  {
   f=0;
   break;
  }
  if(s[i]=='.')
   d=1;
  i++;
 }
 if(f==1)
  if(d==1)
   printf("%s is a real constant\n",s);
  else
   printf("%s is a integer constant\n",s);
 else
  printf("%s is not a recognized constant\n",s);
}