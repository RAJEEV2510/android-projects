#include<conio.h>
#include<stdio.h>
void sorting(int [],int,int,int);//prototypes of function
int main()
{
	int r=4,l=0,p=0,i,j,a[5];
	clrscr();
	printf("quick sorting program\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	 }
	printf("before sorted\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	 }
	sorting(a,r,l,p);//call a function
	printf("after sorted\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	 }
	getch();
}
 void sorting(int a[],int r,int l,int p) //define a user defined function
 {       int temp1,temp2;
	 if(a[p]>a[r])
	{       p=r
		temp1=a[p];
		a[p]=a[r];
		a[r]=temp1;
	  }
	  sorting( a, r, l+1, p);
	  else
	  {
		p=l
		sorting(a,r-1,l,p);
	  }
 }