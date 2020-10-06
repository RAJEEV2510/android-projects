
#include<conio.h>
#include<stdio.h>
 main()
 { int i,j,a[3][3],b[3][3],s=0,v=0,t=0;
 clrscr();
  printf("     TRANSPOSE OF A MATRIX\n ");

  for(i=0;i<3;i++)
 { {for(j=0;j<3;j++)
  scanf("%d",&a[i][j]);
  }
  }  printf("Actual Matrix:\n");
  for(i=0;i<3;i++)
   { for(j=0;j<3;j++)
   { printf("%d\t",a[i][j]);
    }printf("\n");
    }

  for(i=0;i<3;i++)
 { {for(j=0;j<3;j++)
   b[i][j]=a[j][i];

   }
  }  printf("Transpose of matrix:\n");
   for(i=0;i<3;i++)
   { for(j=0;j<3;j++)
   { printf("%d\t",b[i][j]);
    }printf("\n");
    }
    for(i=0;i<=2;i++)
   { for(j=0;j<=2;j++)
   { if(i==j)

    s=s+a[i][j];
    }} printf("\t\nvalue of the sum of the  diagonal element is %d",s);
    for(i=0;i<=2;i++)
    {for(j=0;j<=2;j++)
    { if(a[i][j]%2==0)
     { v = v+a[i][j];
     } else
       t=t+a[i][j];

     }} printf("\n\nsum of even numbers element in matrix is %d\n\nvalue of odd number element is %d",v,t);


  getch();
  }

