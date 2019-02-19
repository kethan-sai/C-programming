#include<stdio.h>
#include<string.h>

main()
{
 int f  =  1,i =  0;
 char s[20];
 printf("Enter string :");
 scanf("%s",&s);
 while(s[i]!='\0')
 {
  if(!(s[i]>='0'&&s[i]<='9'))
  {
   f=0;
   break;
  }
  i++;
 }
 if(f==1)
  printf("%s is an integer constant\n",s);
 else
  printf("%s is not an integer constant\n",s);
}