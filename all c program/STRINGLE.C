#include<conio.h>
#include<stdio.h>
#include<string.h>
main()
{ 	int i,count=0,l;
	char arr[10],brr[11];  clrscr();
	gets(arr);
	puts(arr);
	for(i=0;arr[i]!='\0';i++)
	{count++;
	}
	  printf("%d",count);
	 l=strlen(arr);
	 printf("\n%d",l);
	 getch();
	}