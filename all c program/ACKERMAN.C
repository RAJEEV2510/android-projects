#include<conio.h>
#include<stdio.h>
int a(int m,int n);//prototype of function
int main()
{
	int m,n,result;
	clrscr();
	printf("ackermann function\n");
	printf("\nenter the value of m and n\n");
	scanf("%d %d",&m,&n);
	{
	      result=a(m,n);//calling offunction
	      printf("value of function is %d");
	      getch();
	   return 0;
	  }
  int a(int m,int n)
{
       int s,r,t,l;
	if(m==0)
	{

		s=n+1;
		return s;
	  }
	else if(m!=0 && n==0)
	{
	      r=a(m-1,1);
		return  r;
	  }
	  else
	  {

		l= a(m-1,a(m,n-1));
		return l;
	  }
	  }