#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int *ptr,*p,i,n,sum=0;
	clrscr();
	printf("Calloc funtion\n\n");
	printf("Enter the  size of array\n");
	scanf("%d",&n);
	printf("enter the array elements\n");
	ptr=(int *)calloc(n,sizeof(int));
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

