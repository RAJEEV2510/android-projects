#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{ char str1[20],str2[20];
  int i;
 gets(str1);
 gets(str2);
 i=0;
 while(str1[i]==str2[i] && str1[i]!='\0' && str2[i]!='\0')
 {i++;
 }
 if(str1[i]== str2[i])
 printf("string are equal \n");
 else
 printf("string are not equal");
 getch();
 }
