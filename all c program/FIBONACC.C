#include<stdio.h>
#include<conio.h>
 main()
{ int s=0,f=1,n;
  printf("fibonacci series");
  scanf("%d",&n);
  while(n>=s)
  {
   f=f+s;
   s++;
   }
   printf("%d",f);
   getch();
   }
