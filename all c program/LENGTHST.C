#include<stdio.h>
#include<conio.h>
#include<string.h>
int call(char a[]);
main()
{ char a[20];
  int length;  clrscr();
  gets(a);
  length=call(a);
  printf("length of string %d",length);
  getch();
}
int call(char a[])
{ int i,count=0,k;
  for(i=0;a[i]!='\0';i++)
  {count++;
  }
  k=count;
  return k;
  }
