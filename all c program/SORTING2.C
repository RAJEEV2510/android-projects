#include<conio.h>
#include<stdio.h>
void main()
{
	int i,j,a[5],temp;
	clrscr();
	printf("----------------------------------------------------------------------------\n");
	printf("\t\t\tsorting program\n");
	printf("enter  the element in array\n");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	  }
	printf("Before sorting the element is\n");
	for(i=0;i<=4;i++)
	{
		printf("%d\n",a[i]);
	  }
	for(i=0;i<=4;i++)
	{
		for(j=i+1;j<=4;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		       }}
	printf("sorting elements are:\n");
	for(i=0;i<=4;i++)
	{
		printf("%d\n",a[i]);
	  }


	getch();
	}