#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()

{
	float a,b,c,d,e,f,g,h,i;
	clrscr();
	printf("\t\tQuadratic Equations\n\n");
	printf("\tenter the value of a,b,c\n");
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	printf("the equations is %.1fx^2+%.1fx+%.1f=0",a,b,c);
	d=b*b-4*a*c;
	printf("\nthe value of discriminant %.1f",d);
	if(d<0)
	{
		printf("\n\timaginary roots");
	  }

	else
	{       i=pow(d,0.5);

		e=(-b+i)/2*a;

		f=(-b-i)/2*a;
		printf("\nroots of equations are %f,%f",e,f);
	   }
	getch();
 }


