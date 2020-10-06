#include<stdio.h>
#include<conio.h>
#include<string.h>
void copy(char str1[],char str2[]);
main()
{ 	char str1[20],str2[20];
	gets(str2);
	copy(str1,str2);
	getch();
}
void copy(char str1[],char str2[])
{	int i=0;
	for(i=0;str2[i]!='\0';i++)
       {	str1[i]=str2[i];
	}
	str1[i]='\0';

	puts(str1);

}

