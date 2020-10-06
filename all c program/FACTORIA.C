#include<stdio.h>
#include<conio.h>
 main()
 { 	int n,f=1;

	printf("enter your number\n");
	scanf("%d",&n);
	while(n>=1)

	{ f=n*f;
	n--;
	x=f;
	}
	printf("the value of factorial %d\n",x );


	getch();
 }