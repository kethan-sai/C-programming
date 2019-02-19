#include<stdio.h>
int main()
{
 char c;
 int l=0,w=0,p=0;
 FILE *fp = fopen("test.txt","r");
 if(fp==NULL)
 {
  printf("Cannot open file\n");
  exit(1);
 }
 while(!feof(fp))
 {
  c=fgetc(fp);
  if(c==' ')
   w++;
  if(c=='\n')
  {
   w++;
   l++;
  }
  if(c=='"'||c==';'||c==','||c=='.'||c=='!'||c=='?'||c=='\'')
   p++;
 }
 printf("No. of lines=%d\nNo. of words=%d\nNo. of puntuations=%d\n",l,w,p);
 fclose(fp);
}
