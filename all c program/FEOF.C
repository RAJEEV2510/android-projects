#include<conio.h>
#include<stdio.h>
void main()
{
	FILE *fp;
	char ch;
	clrscr();
	fp=fopen("RAJEEV.txt","r");
	while(!feof(fp))
	{
		ch=getc(fp);
		printf("%c",ch);
	  }
	fclose(fp);
	getch();
 }