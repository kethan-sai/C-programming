#include<stdio.h>
#include<string.h>
main()
{
 int n,i,j,k,l;
 printf("Enter no. of productions:");
 scanf("%d",&n);
 char a[n][50];
 printf("Enter productions (don't use non terminals like E` instead, replace them with other capital leters):\n");
 for(i=0;i<n;i++)
  scanf("%s",&a[i]);
 for(i=0;i<n;i++)
  for(j=i+1;j<n;j++)
   if(a[i][0]==a[j][0])
   {
    k=0;
    while(a[i][k]!='\0')
     k++;
    a[i][k++]='/';
    l=3;
    while(a[j][l]!='\0')
     a[i][k++]=a[j][l++];
    for(l=j;l<n;l++)
     strcpy(a[l],a[l+1]);
    n--;
    a[i][k]='\0';
   }
 
 struct prod //storing answer in structure
 {
  char p[50];
  } ip[n]; //aaray of structures
  for(i=0;i<n;i++)
   strcpy(ip[i].p,a[i]);
 
 printf("Productions after reducing:\n");
 for(i=0;i<n;i++)
  printf("%s\n",ip[i].p);
}
