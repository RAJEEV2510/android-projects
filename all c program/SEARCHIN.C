#include<conio.h>
#include<stdio.h>
main()
{
	int i,j,n,a[5]; //declare variables
	clrscr();
	printf("programm\nsearch a position in a array\n");
	printf("enter the  element of an array\n");
	for(i=0;i<=4;i++)
       {
		scanf("%d",&a[i]); //take inputs of array
	}
	printf("enter the number which you want to search in this array\n");
	scanf("%d",&n);//taking a number
	for(i=0;i<=4;i++)
	{
		if(a[i]==n) //if nesting
		{    printf("search element position is = %d",i+1);
			break;//using break statment
		 }
	 }





   getch();//holding screen
}