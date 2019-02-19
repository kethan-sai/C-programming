#include<stdio.h>
main()
{
 int n,f=1,c=1,i,j;
 printf("Enter no. of productions:");
 scanf("%d",&n);
 char a[n][10];
 printf("Enter productions:\n");
 for(i=0;i<n;i++)
  scanf("%s",&a[i]);
 for(i=0;i<n;i++)
 {
  if(!(a[i][0]>='A'&&a[i][0]<='Z'))
  {
   f=0;
   break;
  }
  c=1;
  if(a[i][1]=='`')
   c=2;
  if(!(a[i][c]=='-'&&a[i][c+1]=='>'))
  {
   f=0;
   break;
  }
 }
 if(f==1)
  printf("Given grammar is a Context Free Grammar\n");
 else
  printf("Given grammar is not a Context Free Grammar\n");
}