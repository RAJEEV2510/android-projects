#include<conio.h>
#include<stdio.h>
void main()

{
	int i,j,a[5],temp;
	clrscr();
	printf("enter the elements of array");
	for(i=0;i<=4;i++)
       {
		scanf("%d",&a[i]);
	 }
	for(i=0;i<=4;i++)
	{
		for(j=1;j<=4;j++)
		if(a[i]>a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		   }}

	for(i=0;i<=4;i++)
	{
		printf("%d\n",a[i]);
	  }


	 getch();
    }


