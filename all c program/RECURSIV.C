#include<conio.h>
#include<stdio.h>
int fact(int);
int main()
{ int n,factorial; clrscr();
  scanf("%d",&n);
  factorial = fact(n);
  printf("%d",factorial);
  getch();
 }
  int fact(int n)
  {  int k;
     if(n==1)
     return (n);
     k=n*fact(n-1);
     return (k);
  }



