
#include<conio.h>
#include<stdio.h>
main()
{
	int n;
	int i;
	clrscr();
	printf("Table program\n");
	printf("enter the number of which do you want print the table\n");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
	  printf("%d*%d = %d\n",n,i,n*i);

	 }

	getch();

    }
