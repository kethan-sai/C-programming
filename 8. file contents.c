#include<stdio.h>
int main()
{
 FILE *fp = fopen("8.c","r");
 if(fp == NULL)
 {
  printf("Cannot open file\n");
  exit(1);
 }
 printf("Contents are:\n");
 while(!feof(fp))
  printf("%c",fgetc(fp));
 printf("\n");
}