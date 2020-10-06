#include<conio.h>
#include<stdio.h>
#include<string.h>
main()
{   char a[30];

    char name[20];
    FILE *fp,*fp1;
    clrscr();
    printf("file handling program\n\n");
    fp=fopen("Rajeev.txt","r");
    fgets(a,13,fp);
    printf(" %s\n",a);
    fclose(fp);
    fp1=fopen("rw.txt","w");
    strcpy(name,"hello friends");
    fputs(name,fp1);
    fclose(fp1);









	getch();
	}