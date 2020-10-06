#include<stdio.h>
#include<conio.h>
int akr(int m,int n);//prototype of function
int main()
{
	int m,n,result;
	clrscr();
	printf("enter the value of m and n");
	scanf("%d %d",&m,&n);
	result=akr(m,n); //calling a function
	printf("%d",result);

	getch();
	return 0;
}
 int akr(int m ,int n)
 {
	int s,r,l;
	if(m==0)
	{

		l=n+1;
		return l;
	 }
	else if(m!=0 && n==0)
	{

		r=akr(m-1,1);
		return r;
	  }
	else
	{

		s=akr(m-1,a(m,n-1));
		return s;
	  }








	}

