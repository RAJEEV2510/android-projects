#include<conio.h>
#include<stdio.h>
#include"ADD.H"
void main()
{
	int b,c,a;
	clrscr();
	printf("enter the value of a,b\n");
	scanf("%d %d",&a,&c);
	b=add(a,c);
	printf("add %d",b);
	getch();
	}