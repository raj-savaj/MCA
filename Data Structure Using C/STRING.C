/*STRING  OPERATIONS  */
#include<stdio.h>
#include<string.h>
/* To find length  */
void length()	
{
	char str[100];
	int l,i;
	printf(" Enter the string \n");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++);
	printf(" length of string is %d\n",i);
}
/* To concatinate   */
void concat()
{
	char s1[100],s2[100];
	int i,j;
	printf(" Enter the first string \n");
	scanf("%s",s1);
	printf(" Enter the second string \n");
	scanf("%s",&s2);
	i=strlen(s1);
	for(j=0;s2[j]!='\0';i++,j++)
	{
		s1[i]=s2[j];
	}
	s1[i]='\0';
	printf(" Concated string is %s\n",s1);
}
/*  To find substring   */
void substr()
{
	char s1[100],s2[100];
	int i,j,k,m;
	printf(" Enter the string ");
	scanf("%s",s1);
	printf(" Enter the position and length ");
	scanf("%d%d",&i,&j);
	for(k=i,m=0;m<j;s2[m++]=s1[k++]);
	s2[m]='\0';
	printf(" The substring is : %s\n",s2);
}
void main()
{
	int ch;
	char ans;
	clrscr();
	do
	{
		printf("Enter your choice");
		printf("\n1.Length \t2.Concat \t3.Extraction\t4.Exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
					length();
			    	break;
			case 2:
					concat();
			    	break;
			case 3
					:substr();
			     	break;
			case 4:
					exit(0);
		}
		printf("Do u want to continue \n");
		scanf("%s",&ans);
	}while(ans=='y');
	getch();
}
