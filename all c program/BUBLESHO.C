#include<conio.h>
#include<stdio.h>
void swap(int *,int *);
void main()
{
	int i,n,j,a[30];
	clrscr();
	printf("enter the size of array\n");
	scanf("%d",&n);
	printf("enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	 }
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	 }

	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{	if(a[j]>a[j+1])
			{ 	swap(&a[j],&a[j+1]);
			}
		 }
	  }
	printf("\nsorted array\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	 }
	 getch();
	 }
void swap(int *p,int *q)
{
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
  }


