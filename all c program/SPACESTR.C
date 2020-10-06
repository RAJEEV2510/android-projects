#include<stdio.h>
#include<conio.h>
main()
{
	char first_name[20];
	char middle_name[20];
	char last_name[20];
	char full_name[50];
	int i,j,k;
	clrscr();
	gets(first_name);
	gets(middle_name);
	gets(last_name);
	for(i=0;first_name[i]!=0;i++)
	{ full_name[i]=first_name[i];
	}
	full_name[i]=' ';
	 for(j=0;middle_name[j]!=0;j++)
	{ full_name[i+j+1]=middle_name[j];
	}
	full_name[i+j+1]=' ';
	for(k=0;last_name[k]!=0;k++)
	{ full_name[i+j+k+2]=last_name[k];
	}
	full_name[i+j+k+2]='\0';
	puts(full_name);
	getch();
	}



