  #include<conio.h>
  #include<stdio.h>
  void swap(int,int);//decleration of swap function
  void sort(int a[]);//decleration of sort function
  main()
      {int i=7,j=8,a[10];
	clrscr();
	printf("\t\tswap and sorting use function calling program\n");
	printf("\nbefore i=7 j=8\n");
	swap(i,j); //swap function calling
	printf("\nsorting of numbers\nenter the elements in array\n");
	sort(a);   //sort function calling
	getch();
    }

   void swap(int i, int j) //define swap function
   {   int temp;

   temp=i;
   i=j;
   j=temp;
   printf("i=%d j=%d",i,j);
   }

     void sort(int a[]) //define sort  function
      {
	int i,j,k,temp;

	for(i=0;i<=4;i++)
	{scanf("%d",&a[i]);
	}
	for(i=0;i<=4;i++)
	{for(j=i+1;j<=4;j++)
	{ if(a[i]<a[j])
       {	temp=a[i];
	a[i]=a[j];
	a[j]=temp;
	}}}
	printf("sorting\n");
	for(i=0;i<=4;i++)
	printf(" %d",a[i]);
	}



