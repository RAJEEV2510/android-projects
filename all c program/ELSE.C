#include<stdio.h>
#include<conio.h>
 main()
 {
	 int percentage;
	 clrscr();
	 printf("enter your GRADE\n\n");
	 scanf("%d",&percentage);
	 if(percentage>=95)
	 {
		printf("outstanding\n\n");
	 }
	 else if(percentage>=80)
	 {	printf("excellent\n\n");
	 }
	 else if(percentage>=60)
	 {	printf("good\n\n");
	 }
	 else if(percentage>=33)
	 {	printf("pass\n\n");
	 }
	 else
	 {	printf("fail\n\n\n\n");
	 }  printf("good luck for next time");
	 getch();
	 }