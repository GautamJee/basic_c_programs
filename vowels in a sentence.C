/*program to accept a string from console and to display the number of vowels in the string */

# include <stdio.h>
# include <conio.h>

void main ()
{

		char str[50]; /* maximum 50 characters */
	int len;
	int i = 0, c
	 = 0;
	clrscr();

	printf ("Enter a string of less than 50 characters: \n");
	gets (str);

	for (i=0;str[i+1]!=0;i++);
	for( ;i>=0;i--)
	    {
		switch (str[i])
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
			c++;

		}
	}
	printf ("\n Numbers of vowels in the string are: %d",c);
	getch();
}