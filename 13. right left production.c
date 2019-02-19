#include<stdio.h>
#include<string.h>
main()
{
 int i=0,l=0,e=0,g=0;
 char a[20];
 printf("Enter any production (epsilon=$ and dash=`):");
 scanf("%s",&a);
 printf("Left production is :");
 while(a[i]!='\0')
 {
  if(a[i]=='-'&&e==0)
  {
   e=1;
   i++;
   printf("\nRight production is :");
  }
  if(a[i]=='>'&&g==0)
  {
   g=1;
   i++;
  }
  if(a[i]!=' ')
   printf("%c",a[i]);
  i++;
 }
 printf("\n");
}
