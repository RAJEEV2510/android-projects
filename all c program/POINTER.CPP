#include<stdio.h>
#include<conio.h>
int add(int,int)
{
	int x,y,z;
	z=x+y;
	return(z);
}
void main()
{
	int i,j,k,l;
	scanf("%d,%d",&i,&j);
	k=add(i,j);
	printf("Addition is %d",k);
	getch();
	}