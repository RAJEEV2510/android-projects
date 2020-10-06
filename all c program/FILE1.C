#include<stdio.h>
#include<conio.h>
#include<string.h>



main()
{
	int a,b,c;
	clrscr();
	FILE  *fp;
	fp=fopen("Rajeev.txt","w");
	fprintf(fp,"a=9 b=9\n");
	fclose(fp);
	fscanf(fp,"%d %d",a,b);
	c=a+b;
	printf("sum is %d",c);
	fclose(fp);

 getch();
 }