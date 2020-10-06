#include<conio.h>
#include<stdio.h>
struct book {
	int price;
	char name[20];
	int pages;
	};
void bk(struct book s2 []);
void main()
{
	struct book s1 [3];
	int i;
	clrscr();

	printf("enter the details of three books\n");
	printf("price,name,pages\n");
	for(i=0;i<=2;i++)
       {	scanf("%d",&s1[i].price);
		scanf("%s",&s1[i].name);
		scanf("%d",&s1[i].pages);
	 }
	bk(s1);
	getch();
  }
  void bk(struct book s2 [])
  {     int i;
		printf("details of book\n");
	for(i=0;i<=2;i++)
	{
		printf("price= %d\n",s2[i].price);
		printf("name of book%s\n",s2[i].name);
		printf("total pages %d\n",s2[i].pages);
	 }
   }
