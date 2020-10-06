#include<stdio.h>
#include<conio.h>
 main()
 { int a[3][3],b[3][3],c[3][3],i,j; clrscr();
   printf("Matrix Program\n");
   for(i=0;i<=2;i++)
   {for(j=0;j<=2;j++)
    scanf("%d",&a[i][j]);
    }
    printf("First matrix\n");
    for(i=0;i<=2;i++)
  { {for(j=0;j<=2;j++)
    printf("\t%d",a[i][j]);
    }printf("\n");
    }
    for(i=0;i<=2;i++)
   {for(j=0;j<=2;j++)
    scanf("%d",&b[i][j]);
    }
    printf("\tSecond matrix\n\n\n");
    for(i=0;i<=2;i++)
  { {for(j=0;j<=2;j++)
    printf("\t%d",b[i][j]);
    }printf("\n");
    }
     for(i=0;i<=2;i++)
   { for(j=0;j<=2;j++)
    c[i][j]=a[i][j]+b[i][j];
    }  printf("\tSum of matrix\n\n\n\n");
      for(i=0;i<=2;i++)
   { for(j=0;j<=2;j++)
   { printf("\t%d",c[i][j]);}
     printf("\n");
 }
  printf("\tMultiplication\n\n");

 c[0][0]=a[0][0]*b[0][0]+a[0][1]*b[1][0]+a[0][2]*b[2][0];
 printf("\t%d   ",c[0][0]);
  c[0][1]=a[0][0]*b[0][1]+a[0][1]*b[1][1]+a[0][2]*b[2][1];
 printf("\t%d   ",c[0][1]);
 c[0][2]=a[0][0]*b[0][2]+a[0][1]*b[1][2]+a[0][2]*b[2][2];
 printf("\t%d   ",c[0][2]);
 printf("\n");
 c[1][0]=a[1][0]*b[0][0]+a[1][1]*b[1][0]+a[1][2]*b[2][0];
 printf("\t%d   ",c[1][0]);
 c[1][1]=a[1][0]*b[0][1]+a[1][1]*b[1][1]+a[1][2]*b[2][1];
 printf("\t%d   ",c[1][1]);
 c[1][2]=a[1][0]*b[0][2]+a[1][1]*b[1][2]+a[1][2]*b[2][2];
 printf("\t%d   ",c[1][2]);
 printf("\n");
 c[2][0]=a[2][0]*b[0][0]+a[2][1]*b[1][0]+a[2][2]*b[2][0];
 printf("\t%d   ",c[2][0]);
 c[2][1]=a[2][0]*b[0][1]+a[2][1]*b[1][1]+a[2][2]*b[2][1];
 printf("\t%d   ",c[2][1]);
 c[2][2]=a[2][0]*b[0][2]+a[2][1]*b[1][2]+a[2][2]*b[2][2];
 printf("\t%d   ",c[2][2]);


   getch();
    }