/* To count total number of substrings in a string */

#include < stdio.h>
#include <conio.h>

int count_str(char str[100],char sub_str[30])   //count-total-string

{

    int i=0, j=0, c=0;
    clrscr();


	for (i=0; str[i]!=0; i++)
	{
	    if(sub_str[j]==str[i])
	    j++ ;
	    else
	    j=0;
	    if (sub_str[j]==0)
	    {
	    c++;
	    j=0;
	    }


	}
	return c;
}
void main()
{
    int count=0;
    char st[100], s_st[30];
    clrscr();
    printf("Enter a string");
    gets(st);
    printf("Enter a substring");
    gets(s_st);

    count=count_str(st,s_st);
    printf("%d",count);
    getch();
}