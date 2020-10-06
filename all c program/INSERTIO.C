#include<conio.h>
#include<stdio.h>
void insertion(long int [],int);//protype
void main()
{
      long int a[20]; int i,j,n;
	clrscr();
	printf("Program of insertion\n");
	printf("enter the size of array\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%ld",&a[i]);
	 }
	 printf("before sorted\n\n");
	for(i=0;i<n;i++)
	printf("%ld\t",a[i]);
	insertion(a,n);//calling of insertion function
	printf("\nsorted array by insertion method\n");
	for(i=0;i<n;i++)
	{
		printf("%ld\t",a[i]);
	  }
	getch();

  }
void insertion(long int a[], int n)
{
      long int temp,i,j;
	for(i=1;i<n;i++)
	{       temp=a[i];//make a temperoray variable.
		for(j=i-1;j>=0 && temp<a[j];j--)
	       {	a[j+1]=a[j];

		}
		  a[j+1]=temp;
	  }


  }
