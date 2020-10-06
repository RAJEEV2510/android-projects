#include<conio.h>
#include<stdio.h>
 main()
 { int i,j,p,q,m,n,k,a[10][10],b[10][10],c[10][10];
   clrscr();
   printf("\tMatrix Program\t\n");
   printf("Enter the order of Matrix A\n");
   printf("FIRSt\n");
   scanf("%d,%d",&m,&n);
   for(i=0;i<m;i++)
  { for(j=0;j<n;j++)
   scanf("%d",&a[i][j]);

   }  printf("SECOND\n");
    for(i=0;i<m;i++)
  {{ for(j=0;j<n;j++)
   printf("\t%d\t",a[i][j]);
   }printf("\n");
   }  printf("Enter the order of Matrix A\n");
   scanf("%d,%d",&p,&q);
   for(i=0;i<p;i++)
  { for(j=0;j<q;j++)
   scanf("%d",&b[i][j]);


   }

    for(i=0;i<p;i++)
  {{ for(j=0;j<q;j++)
   printf("\t%d\t",b[i][j]);
   } printf("\n");
    }
    for(i=0;i<m;i++)
    {	for(j=0;j<q;j++)
	{ c[i][j]=0;
		{ for(k=0;k<n;k++)
			c[i][j]=c[i][j]+a[i][k]*b[k][j];
			}}}
			for(i=0;i<m;i++)
			{{for(j=0;j<q;j++)
				 printf("%d\t",c[i][j]);
				   }
				   printf("\n");}

    getch();
   }