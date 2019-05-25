/* program to replace a substring in a string with equal size */


# include <conio.h>
# include <stdio.h>

void main()
{
	char str[100], sub_str[30], r_str[30];
	int i=0,k, m=0, j=0, flag=0;
	clrscr();

	printf ("Enter a string:");
	gets(str);
	printf ("Enter a sub string to find:");
	gets(sub_str);
	printf("Enter the replaceable string:");
	gets(r_str);

	for(i=0; str[i]!=0; i++)
	{
		if(sub_str[j]==0)
			flag=1;
		if(sub_str[j]==str[i])
			j++;
		else
			j=0;

		if(flag==1)
		{
			flag=0;
			j=0;
			m=i-1;
			for(k=0; r_str[k]!=0; k++)
			{
			 str[m]=r_str[k];
			 m++;
			}

		}
	}
	printf("The new string is:%s",str);
	getch();
}