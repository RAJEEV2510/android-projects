#include<conio.h>
#include<stdio.h>
#include<math.h>
main()
{

	long double da ,hra,pf,basic,netpay,pay; /*da = draft allowances ta = transport allowances pf= provinent fun */
	clrscr();
	printf("\t\tsalary calculator\n\nenter the basic\n");
	scanf("%Lf",&basic);
	hra=basic*(0.10);
	da=basic*(0.05);
	pf=basic*(0.12);
	pay=hra+da+basic;
	netpay=pay-pf;
	printf("net salary is =%.1Lf",netpay);
	getch();
 }
