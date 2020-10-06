#include<conio.h>
#include<stdio.h>
 main()
 { int a[5],*i,j;
   i=&a[0];
   for(j=0;j<=4;j++)
   scanf("%d",i+j);
   for(j=0;j<=4;j++)
   printf("%d",*(i+j));
   getch();
 }

