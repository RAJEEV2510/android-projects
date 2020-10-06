#include<stdio.h>
#include<conio.h>
main()
{ char name[10],subject[10],rollno[10],a[10],b[10],c[10],d[10],e[10],f[10];
  int x,y,z; clrscr();
  printf("enter NAME SUBJECT CLASS\n");
  gets(name);
  gets(subject);
  scanf("%s",&rollno);
  scanf("%s",&a);
  scanf("%s",&b);
  scanf("%d",&x);
  scanf("%s",&c);
  scanf("%s",&d);
  scanf("%d",&y);
  scanf("%s",&e);
  scanf("%s",&f);
  scanf("%d",&z);
  printf("-------------------------------------------\n");
  printf("|%s           %s            %s          \n",name,subject,rollno);
  printf("-------------------------------------------\n");
  printf("|%s           %s            %d          \n",a,b,x);
  printf("-------------------------------------------\n");
  printf("|%s           %s            %d          \n",c,d,y);
  printf("-------------------------------------------\n");
  printf("|%s           %s            %d          \n",e,f,z);


  getch();
  }