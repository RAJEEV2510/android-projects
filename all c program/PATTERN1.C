#include<stdio.h>
#include<conio.h>
main()
{ 	int i,j,m,n,k,l;
	clrscr();
	printf("\tpattern program\n\n");
	printf("enter rows and column numbers:\n");
	scanf("%d",&m);
	scanf("%d",&n);
	for(i=1;i<=m;i++)
	{for(j=1;j<=n;j++)
	{if(i==j)

	printf("*");
	else if(j<=i)
	printf("*");
	else
	printf(" ");
	}printf("\n");
	}
	getch();
}