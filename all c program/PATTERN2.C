#include<conio.h>
#include<stdio.h>
main()
{	 int i ,j,k,l;
	 clrscr();
	printf("second pattern program\n\n");
	printf("enter the rows and columns of a pattern\n");
	scanf("%d",&k);
	scanf("%d",&l);
	for(i=1;i<=k;i++)
       { for(j=1;j<=l;j++)
	{if(j>=6-i && j<=4+i)
	{printf("*");
	}else
       {printf(" ");
	}}printf("\n");
	}
	getch();
}

