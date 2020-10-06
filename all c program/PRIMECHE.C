#include<stdio.h>
#include<conio.h>
main()
{ int i,N,j,count=0;
  printf("Prime Numbers\n");
  printf("Enter upto which You find prime numbers\n");
  scanf("%d",&N);
  for(i=1;i<=N;i++)
 {
  if(N%i==0)
  count++;
  } if(count==2)
    printf("the number is prime number\n");

   else
    printf("Not prime number\n%d",i);

   getch();
   }