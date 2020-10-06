#include<conio.h>
#include<stdio.h>
#include<string.h>
main()
{
	FILE *fp;//file type pointer in program
	char c;
	clrscr();
	fp=fopen("kumar.txt","w");
	c=getchar();//using getchar function which read character by character from keyboard
	putc(c,fp);//write the character in file
	fclose(fp);
	fp=fopen("kumar.txt","r");
	getc(fp);
	printf("%c",c);
	fclose(fp);
	getch();
   }



