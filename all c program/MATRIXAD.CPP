#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3],b[3][3],c[3][3],i,j;
	clrscr();
	for(i=0;i<=2;i++)
	{for(j=0;j<=2;j++)
	{scanf("%d",&a[i][j]);
	}
	}
	printf("First Matrix\n\n");
	for(i=0;i<=2;i++)
	{for(j=0;j<=2;j++)
	{
	printf("\t%d",a[i][j]);
	}
	printf("\n");
	}
	for(i=0;i<=2;i++)
	{for(j=0;j<=2;j++)
	{scanf("%d",&b[i][j]);
	}
	}
	printf("Second Matrix\n\n");
	for(i=0;i<=2;i++)
	{for(j=0;j<=2;j++)
	{
	printf("\t%d",b[i][j]);
	}
	printf("\n");
	}
	for(i=0;i<=2;i++)
	{for(j=0;j<=2;j++)
	{
	c[i][j]=a[i][j]+b[j][i];
	}}
	printf("Sum of Matrix is:\n\n");
	for(i=0;i<=2;i++)
	{for(j=0;j<=2;j++)
	{
	printf("\t%d",c[i][j]);
	}
	printf("\n");
	}

	getch();
}
