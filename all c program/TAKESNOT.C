#include<stdio.h>
#include<conio.h>
 int add(void);
 main()
 {   int s;
	clrscr();
      s=add();
      printf("%d",s);
      getch();
 }
  int add()
  { int a,b,c;
   printf("Enter two number\n Enter a and b:\n");
   scanf("%d",&a);
   scanf("%d",&b);
   c=a+b;
   return(c);
   }


