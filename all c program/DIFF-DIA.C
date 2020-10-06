
#include<conio.h>
#include<stdio.h>
main()
{	int i,j,k,m,a[3][3];
	int sum1=0,sum2=0;


	unsigned int diff;clrscr();
	printf("Difference between two diagonal program \n");
	printf("enter 9 munbers for making matrix\n");
	for(i=0;i<=2;i++)
	{for(j=0;j<=2;j++)
	scanf("%d",&a[i][j]);
	}
	for(i=0;i<=2;i++)
	{for(j=0;j<=2;j++)
       { printf("%d\t",a[i][j]);
	} printf("\n");
	}

	for(i=0;i<=2;i++)
	{for(j=0;j<=2;j++)
       { if(i==j)
	{sum1=sum1+a[i][j];
	}}}
	printf("sum of diagonal is %d\n",sum1);
	for(i=0;i<=2;i++)
       {for(j=0;j<=2;j++)
	{ if(i+j==2)
	{sum2=sum2+a[i][j];
	}} }
	diff=sum1-sum2;
	printf("sum of the other diagonal is %d\n",sum2);
	printf("diffrence between them  = %d",diff);

	getch();
	}