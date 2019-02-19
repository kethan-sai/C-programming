#include<stdio.h>
main()
{
 int n,i,j,k,tp=0,ntp=0,m=0,gt=0,f=1;
 printf("Enter no. of productions:");
 scanf("%d",&n);
 char a[n][10],t[20],nt[20],te[5];
 printf("Enter productions (don't use non terminals like E` instead, replace them with other capital leters):\n");
 for(i=0;i<n;i++)
  scanf("%s",&a[i]);
 for(i=0;i<n;i++)
 {
  j=0;m=0;gt=0;
  while(a[i][j]!='\0')
  {
   f=1;
   if(a[i][j]>='A'&&a[i][j]<='Z')
   {
    for(k=0;k<ntp;k++)
     if(nt[k]==a[i][j])
     {
      f=0;
      break;
     }
    if(f==1)
     nt[ntp++]=a[i][j];
   }
   else if(a[i][j]=='-'&&m==0)
    m=1;
   else if(a[i][j]=='>'&&gt==0)
    gt=1;
   else if(a[i][j]=='-'&&m==1)
    t[tp++]='-';
   else if(a[i][j]=='>'&&gt==1)
    t[tp++]='>';
   else
    if(!(a[i][j]=='-'||a[i][j]=='>'))
    {
     for(k=0;k<tp;k++)
      if(t[k]==a[i][j])
      {
       f=0;
       break;
      }
     if(f==1)
      t[tp++]=a[i][j];
    }
   j++;
  }
 }
 printf("Non terminals are:\n");
 for(k=0;k<ntp;k++)
  printf("%c\t",nt[k]);
 printf("\n");
 printf("Terminals are:\n");
 for(k=0;k<tp;k++)
 {
  if(t[k]>='a'&&t[k]<='z')
  {
   while(t[k]>='a'&&t[k]<='z')
    printf("%c",t[k++]);
   printf("\t");
  }
  else
   printf("%c\t",t[k]);
 }
 printf("\n");
}