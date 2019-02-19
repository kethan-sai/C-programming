#include<stdio.h>
#include<string.h>
main()
{
 char a[1000];
 int l=0,i=0,lb=0,f=0,j,fl=1,sp=1;
 FILE *fp = fopen("5.c","r");
 printf("Tokens are:");
 while(!feof(fp))
 {
  a[i]=fgetc(fp);
  i++;
 }
 a[i]='\0';
 l=strlen(a);
 for(i=0;i<l;i++)
 {
  if(a[i]=='='||a[i]=='+'||a[i]=='-'||a[i]=='/'||a[i]=='*'||a[i]==';'||a[i]=='('||a[i]==')'||a[i]=='<'||a[i]=='>'||a[i]=='['||a[i]==']'||a[i]=='|'||a[i]=='&'||a[i]==' '||a[i]==','||a[i]==':'||a[i]=='^'||a[i]=='#'||a[i]=='"'||a[i]=='\''||a[i]=='!'||a[i]=='%'||a[i]=='{'||a[i]=='}'||a[i]=='\\')
  {
   if(fl==1&&sp==1)
   {
    for(j=lb;j<f;j++)
     printf("%c",a[j]);
    printf("\n");
   }
   fl=0;
   if(a[i]==' ')
    sp=0;
   else
    printf("%c\n",a[i]);
   if((a[i+1]>='a'&&a[i+1]<='z')||(a[i+1]>='A'&&a[i+1]<='Z')||(a[i+1]>='0'&&a[i+1]<='9')||(a[i+1]=='.')||(a[i+1]=='_'))
   {
    f=i+1;
    lb=f;
   }
  }
  else if(a[i]=='\n')
  {
   f=i+1;
   lb=f;
  }
  else
  {
   fl=1;
   sp=1;
   f++;
  }
 }
}