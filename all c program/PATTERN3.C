#include<stdio.h>
#include<conio.h>

void main()

{	int i,j,k=0,n,m,c;
	clrscr();
	printf("\t\tpattern program\n");
	printf("Enter number of rows and columns(both should be same)");
	scanf("%d%d",&m,&n);
	if(m%2==0)
	c=m/2;
	else
	c=((m+1)/2);
	for(i=1;i<=m;i++)
       {    i<=c?k++:k--;
	for(j=1;j<=n;j++)
	{
		if(j>=(c+1)-k && j<=k+(c-1))
		printf("*");
		else
		printf(" ");
	} printf("\n");
	}
getch();
}