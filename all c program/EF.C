#include<stdio.h>
#include<conio.h>
 main()
 {
	 int percentage;
	 clrscr();
	 printf("enter your GRADE\n");
	 scanf("%d",&percentage);
	 if(percentage>=95)
	 {
		printf("outstanding");
	 }
	 else if(percentage>=80)
	 {	printf("excellent");
	 }
	 else if(percentage>=60)
	 {	printf("good");
	 }
	 else if(percentage>=33)
	 {	printf("pass");
	 }
	 else
	 {	printf("fail");
	 }
	 getch();
	 }