#include<stdio.h>
#include<conio.h>
#include<string.h>
char text[100],pat[50];
int m,n;
int d[256];
void shift_tab(char pat[])
{
	int i=0,j;
	for(i=0;i<256;i++)
	{
		d[i]=m;
	}
	for(j=0;j<m-1;j++)
	{
		d[pat[j]]=m-1-j;
	}
}
int search()
{
	int i,k;
	n=strlen(text);
	m=strlen(pat);
	shift_tab(pat);
	if(m>n)
	{
		printf("Pattern length is more then the text \n");
		getch();
		exit();
	}
	i=m-1;
	while(i<n)
	{
		k=0;
		while((k<m) && (pat[m-1-k])==text[i-k])
		{
			k++;
		}
		if(k==m)
		{
			return (i-m+1);
		}
		else
		{
			i=i+d[text[i]];
		}
	}
	return -1;
}
void main()
{
	int pos;
	clrscr();
	printf("\nEnter The Text :");
	gets(text);
	printf("\nEnter The Pattern ");
	gets(pat);
	pos=search();
	if(pos>=0)
	{
		printf("\n Pattern found at %d",pos+1);
	}
	else
	{
		printf("\n Pattern not  found");
	}
	getch();
}
/*** Output ***/
/*
Enter the text:
Raj Savaj
Enter The Pattern :
te
Pattern Found at: 
*/
