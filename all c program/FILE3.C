#include<conio.h>
#include<stdio.h>
main()
{      int a,b,c,d;
	char name[100];


       FILE *fp;
       clrscr();
       fp=fopen("RAJEEV.txt","r");//with the help of pointer open the file
       fscanf(fp,"%d,%d,%d",&a,&b,&c);//read integer from file.
       printf("a=%d\nb=%d\nc=%d",a,b,c);//print read values.
       d=a+b+c;
       printf("\nthe value of sum is = %d",d);
       fclose(fp);



	getch();
	}