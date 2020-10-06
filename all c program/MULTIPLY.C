#include<stdio.h>
#include<conio.h>
main()
{ int a[10][10],b[10][10],c[10][10],m,n,p,q,k,i,j;
  clrscr();
   printf("enter first order of matrix A\n");
   scanf("%d,%d",&m,&n);
   for(i=0;i<m;i++)
 {  for(j=0;j<n;j++)
   scanf("%d",&a[i][j]);
  }
   for(i=0;i<m;i++)
 {  for(j=0;j<n;j++)
  { printf("%d\t",a[i][j]);
  } printf("\n");}
  printf("enter second matrix order b\n");
  scanf("%d,%d",&p,&q);
  for(i=0;i<p;i++)
 {  for(j=0;j<q;j++)
   scanf("%d",&b[i][j]);
  }
  for(i=0;i<p;i++)
 {  for(j=0;j<q;j++)
  { printf("%d\t",b[i][j]);
  } printf("\n");}
  for(i=0;i<m;i++)
  { for(j=0;j<q;j++)
  { c[i][j]=0;
   for(k=0;k<n;k++)
   {c[i][j]=c[i][j]+a[i][k]*b[k][j];
   }}}
   printf("Multiply Of Two Matrices =\n\n");
   for(i=0;i<m;i++)
 {  for(j=0;j<q;j++)
  { printf("%d\t",c[i][j]);
   }printf("\n");
   }

  getch();
  }