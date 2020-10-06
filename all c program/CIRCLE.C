#include<stdio.h>
#include<conio.h>
#include<math.h>
 int main()
 {
 float a,b;  clrscr();
 printf("enter a radius of a circle\n");
 scanf("%f",&a);
 b=3.14*pow(a,2);
 printf("area of circle %f",b);
 getch();
 return 0;


 }