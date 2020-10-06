#include<conio.h>
#include<stdio.h>
main()
{ 	int i ,j,k=0,m,n,c;
	clrscr();
	printf("- - - - - - - - - - - -    PATTERN PROGRAM  - - - - - - - - - - - - - - - - - -");
	printf("                            ===============                                        \n");
	printf("Enter rows and columns enter number should be equal\n");
	scanf("%d%d",&m,&n);
	c=(m+1)/2;
	for(i=1;i<=m;i++)
       { i<=c?k++:k--;
	for(j=1;j<=n;j++)
       {  if(j>=c+1-k && j<=k+c-1)
		printf("*");
		else
		printf(" ");
       }
       printf("\n");
       }
	getch();
	}