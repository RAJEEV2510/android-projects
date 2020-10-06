#include<conio.h>
#include<stdio.h>
int x;//do no use extern keword here.//global variable.
void f1();//prototype of a function.
 main()
 {
	extern int x;//call a x from outside from a function.
	clrscr();
	printf("x=%d\t",x);
	f1();
	printf("\tx = %d",x);//variable did not destroy so that it takes from function.
	getch();
  }
  void f1()//define a f1 function
  {

	 x++;
	 printf("x=%d",x);
    }

