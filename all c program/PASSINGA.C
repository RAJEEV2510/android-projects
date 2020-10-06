#include<stdio.h>
#include<conio.h>
#include<math.h>
int per(int []);
main()
{ int a[5];
 double s; clrscr();
 s= per(a);
 printf("your percentage is\n %lf",s);
 getch();
}
int per(int b[])
{
  int j,c=0;
  double avg;
  for(j=0;j<=4;j++)
  scanf("%d",&b[j]);
  for(j=0;j<=4;j++)
  c=c+b[j];
  avg=c*pow(5,-1);
    return (avg);
 }