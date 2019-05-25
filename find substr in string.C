//program to find a substring in a string

#include<iostream.h>
#include <conio.h>
#include <stdio.h>
void main()
{

    char str[100], sub_str[25];
    int i , j=0, flag=0;
    clrscr();
    printf("Enter a string:\n");
    cin.getline(str,100);
    fflush(stdin);
    printf("Enter a substring to find:\n");
    gets(sub_str);
    fflush(stdin);
    for (i=0; str[i]!=0; i++)
{
    if (sub_str[j]==str[i])
    j++;
    else
    j=0;
    if(sub_str[j]==0)
    flag=1;
}
flag==1?printf("\nfound"):printf("\nnot found");
getch();
}
