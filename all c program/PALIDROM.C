#include<stdio.h>
#include<conio.h>
void main()//prototype
{
	int i,j,n,k=0,c,a[20],count=0,l;
	clrscr();
	printf("enter number of digit\n");
	scanf("%d",&n);
	printf("enter n digit number\n");

	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	 }
	 c=n/2;
	for(i=0;i<c;i++)
	{
		if(a[i]==a[n-i-1])
		 k++;
		else
		 l=0;
	  }

	 if(k==c)
	 printf("number is palidrome\n");
	 else
	 printf("number is not palidrome");
	 getch();
    }


