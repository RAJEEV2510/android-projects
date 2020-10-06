#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<alloc.h>
void main()
{
	int *ptr,*p,i,n,sum=0;//declare variables
	clrscr();
	printf("============================================================\n");
	printf("Malloc function Program\n");
	printf("============================================================\n");
	printf("\n\nEnter the size the of array\n");
	scanf("%d",&n);
	printf("Enter the array Elements\n");
	ptr=(int *)malloc(n*sizeof(int));//using malloc function
	p=ptr;
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr);

		sum=sum+ *ptr;
		ptr++;
	  }
	printf("Array elements Entered by you\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",*p);
		p++;
	 }
	 printf("sum of all elements= %d",sum);
	 getch();
}