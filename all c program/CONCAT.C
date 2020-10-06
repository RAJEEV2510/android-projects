#include<conio.h>
#include<stdio.h>
#include<string.h>
void conct(char a[],char b[]);
   main()
{
       char a[20],b[10];
	gets(a);
	gets(b);
	conct(a,b);
	getch();
}

void  conct(char a[],char b[])
{	int i,increase=0;
	for(i=0;a[i]!='\0';i++)
	{increase++;
	}
	for(i=0;b[i]!='\0';i++)
       { a[i+increase]=b[i];

       }
       a[i+increase]='\0';
       puts(a);


}


