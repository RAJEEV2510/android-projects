#include<stdio.h>
#include<conio.h>

struct student{
char  name[100];
int rollno;
char clas[100];
}
main()
{ struct student st1,st2,st3,st4; clrscr();
 scanf("%s",&st1.name);
 scanf("%d",&st1.rollno);
 fflush(stdin);
 gets(st1.clas);


  scanf("%s",&st2.name);
 scanf("%d",&st2.rollno);
 fflush(stdin);
 gets(st2.clas);
 scanf("%s",&st3.name);
 scanf("%d",&st3.rollno);
 fflush(stdin);
 gets(st3.clas);

 printf("%s\t",st1.name);
 printf("%d\t",st1.rollno);
 printf("%s\n",st1.clas);


 printf("%s\t",st2.name);
 printf("%d\t",st2.rollno);
 printf("%s\n",st2.clas);
 printf("%s\t",st3.name);
 printf("%d\t",st3.rollno);
 printf("%s",st3.clas);

 getch();
 }