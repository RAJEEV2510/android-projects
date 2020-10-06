#include<conio.h>
#include<stdio.h>
#include"HCF.C"
#include"LCM.C"
#include<string.h>
void main()
{
	int a,b,c,d,e,f;
	char g[5];
	clrscr();
	printf("lcm and hcf program\n");


	printf("enter for lcm is lcm and for hcf is hcf or any character\n");
	scanf("%s",&g);
	 if(strcmp(g,"lcm")==0)
       //	if(g[0]=='l' && g[1]=='c' && g[2]=='m' )
	{       e=lcm(c,f);
		printf("lcm of numbers is %d",e);
		}
	else if(strcmp(g,"hcf")==0)
       {	d=hcf(a,b);
		printf("hcf of numbers if %d",d);

		}
	else
	printf("you have entered wrong choice");
		getch();
    }