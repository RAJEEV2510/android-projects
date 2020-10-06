#include<conio.h>
#include<stdio.h>
int add(int *,int *);
 main()
 { int a,b,s; clrscr();
   printf("\tEnter First Number:\n");
   scanf("%d",&a);
   printf("\tEnter Second Number:\n");
   scanf("%d",&b);
   s=add(&a,&b);
   printf(" sum = %d\n\n",s);
   getch();
 }
  int add(int *x,int *y)
 { int z;
   z=*x+*y;
   return z;
 }
