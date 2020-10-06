#include<conio.h>
#include<stdio.h>
main()
{ int i,n;clrscr();
  printf("\t\t\tA.P Series\n\n\n Enter a number upto which you want print of a.p. series\n\n");
  scanf("%d",&n);

   for(i=1;i<n-1;i++)
  { i=2+i;

  printf("%d",i);
  printf("\n");
  }
  getch();
  }