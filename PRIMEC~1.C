/* menu program  prime check, prime series, factorial and fabonacii */ 

#include <conio.h>
#include <stdio.h>
void main()
{
void factorial();
void fabonacii();
void primeseries();
void primecheck();
    int ch, m,i;
    while(1)
    {
    clrscr();

      printf("\nMenu\n\n1: prime check \n2: prime series \n3: factorial no \n4: fabonacii series\n0: exit");



	    printf("\n choice [0-4]:\t\t");
	    scanf("%d",&ch);
	    if(ch>4||ch<0)
	    printf("try again");
	    else
	    switch(ch)
	    {
		case 1: primecheck();
		break;
		case 2: primeseries();
		break;
		case 3: factorial();
		break;
		case 4: fabonacii();
		break;
		case 0: exit(0);
		default: printf("wrong choice");

	    }

	getch();
      }
}

void primeseries()         //prime series upto n numbers
{

    int n, l=1, j=0;
    printf("\n enter limit");
    scanf("%d", &n);
    if(n>1)
    {
	printf("1 ");

	for (l=1; l<=n; l++)
	    {
		for (j=2;j<=l;j++)
		    {
			if ((l%j)==0)
			break;
		    }
		if(l==j)
		printf("%d ",l);
	    }
    }
    else
    printf("number is less than 1");
    getch();
}

void fabonacii()                    //fabonacii series of n numbers
{
  int a=0, b=1, c=1, p=0;
    printf("enter the limit");
    scanf("%d",&p);
    if (p>=1)
    {
	printf("%d",a);

	while(c<=p)
	{
	    printf("\t %d",c);
	    c=a+b;
	    a=b;
	    b=c;
	}
    }
    else
    printf("number less than 1");
    getch();
    }

    void primecheck()          //to check a number is prime or not
    {
	int j=2, flag=1,l;
	printf("\n enter a number");
	scanf("%d",&l);
	if(l>=1)
	{
	while (l>j)
	{
	    if(l%j==0)
	    {
	    flag=0;break;
	    }
	    j++;
	}
		(flag==1)?printf("\n prime number"):printf("\n not prime number");
	}
	else
	printf("Wrong input");
	getch();
    }

void factorial()                   //find factorial of a number n
{
	long int fact=1;
	int n;
	printf("enter the number whose factorial to be found");
	scanf("%d",&n);
	while(n>0)
	{
	    fact=fact*n;
	    n--;
	}
	printf("factorial is : %d",fact);
	getch();
}