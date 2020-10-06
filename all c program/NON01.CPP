#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
	 char str1[10],str2[10];
	 int i,l,diff,r;
	 gets(str1);
	 gets(str2);
	 for(i=0;str1[i]!='\0' && str2[i]!='\0';i++)
	 {
	  diff=str1[i]-str2[i];
	  if(diff==0)
	  break;

	   }
	   if(diff==0)
	   printf("equal");
	   else
	   printf("not");
	   getch();
	   }


