#include<stdio.h>
#include<conio.h>
void main()//define main
{
	int  i,x,l=0,u=4,mid,a[5];//declare instruction
	clrscr();
	printf("enter the array im shorted form");
	for(i=0;i<=4;i++)
	scanf("%d",&a[i]);
	printf("enter the searching element\n");
	scanf("%d",&x);
	mid=(l+u)/2;
	while(l<=u)
	{ 	mid=(l+u)/2;
		if(a[mid]==x)
	       {	printf("found at position %d",mid+1);
			break;
		}
		else if(a[mid]>x)


		u=mid-1;

		else
		l=mid+1;
	  }
	 if(a[mid]!=x)
	 printf("not found");
	 getch();
	 }





