//program to print the reverse of a string

#include <conio.h>
#include <stdio.h>
void main()
{

    char str[30], temp;
    int i,j;
    clrscr();

    printf("Enter the string: ");
    gets(str);
    fflush(stdin);
    for (j=0; str[j+1]!=0; j++);
    for (i=0; j>=i;i++, j--)
	{

	    temp=str[i];
	    str[i]=str[j];
	    str[j]=temp;
	}
	printf("\nThe reverse is: %s" , str);
	getch();
}