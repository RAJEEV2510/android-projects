#include<stdio.h>
#include<conio.h>
int fib(int n);
void main()
{
	int n,i;
	clrscr();
	printf("enter the no. of terms in fibonaci series\n");
	scanf("%d",&n);
	printf("fibonci series upto %d terms is\n",n);
	for(i=0;i<n;i++)
	printf("  %d ",fib(i));
	getch();
}
  int fib(int n)
  {
	if(n==0)
	return 0;
	else if(n==1)
	return 1;
	else
	return fib(n-2)+fib(n-1);
  }
