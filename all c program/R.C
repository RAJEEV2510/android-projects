#include<stdio.h>
#include<conio.h>
int a(int ,int);//prototype of function
int main()
{
	int m,n,result;
	clrscr();
	printf("enter the value of m and n");
	scanf("%d %d",&m,&n);
	result=a(m,n); //calling a function
	printf("%d",result);
	getch();
	return 0;
    }
 int a(int m ,int n)
 {
	int s,r,l;
	if(m==0)
	{

		l=n+1;
		return l;
	 }
	else if(m!=0 && n==0)
	{
		a(m-1,1);
		r=a(m-1,1);
		return r;
	  }
	else
	{
		a(m-1,a(m,n-1));
		s=a(m-1,a(m,n-1));
		return s;
	  }








	}

