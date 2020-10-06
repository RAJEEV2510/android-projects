#include<stdio.h>
#include<conio.h>
struct book {
char name[45];
float price;
char author[45];
};
main()
{ void func(struct book *);
struct book st1,*st2; clrscr();
scanf("%s",&st1.name);
   scanf("%f",&st1.price);
   scanf("%s",&st1.author);

 st2=&st1;
 func(st2);
 getch();
 }
 void func(struct book *st3)
 { printf("%s\t",st3->name);
   printf("%f\t",st3->price);
   printf("%s",st3->author);
 }