#include<stdio.h>
#include<conio.h>
 main()
 { int r;
 printf("enter percentage\n");
 scanf("%d",&r);
 if(r>95)
{ printf("outstanding\n"); }
 else if(r>80)
{ printf("excellent\n"); }
 else if(r>60)
{ printf("1st division\n"); }
 else
{ printf("others are qualified\n");  }
 getch();
 }