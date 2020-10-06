#include<conio.h>
#include<stdio.h>

	main()
{
	int t,r,s,g=10;    clrscr();
	printf("Enter ist mass\n");
	scanf("%d",&r);
	printf("Enter 2nd mass\n");
	scanf("%d",&s);
	t=(2*r*s*g)/s+r;
	printf("\t\tvalue of torque=%d",t);
	getch();
	}
