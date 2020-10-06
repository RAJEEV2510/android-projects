#include<stdio.h>
#include<conio.h>
 int add(int,int);
 main()
 {   int c,d;
     clrscr();
     printf("\t\t\tcalling a value ofin a function\n Enter c and d\n");
     scanf("%d",&c);
     scanf("%d",&d);
     add(c,d);
     getch();

 }
  int add(int a,int b)
  { int y;
    y=a+b;
    printf("\t\tsum=%d",y);
   }


