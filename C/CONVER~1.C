#include<stdio.h>
#include<conio.h>
void main()
{
	float fh,cl;
	int choice;
	clrscr();
	printf("1 :- Fahrenheit To Celsius ");
	printf("\n2 :- Celsius To Fahrenheit");
	printf("\nEnter Choice  :- ");
	scanf("%d",&choice);
	if(choice==1)
	{
		printf("Enter temperature value in Fahrenheit :- ");
		scanf("%f",&fh);
		cl=(fh-32)/1.8;
		printf("Celsius Value Is =%f",cl);
	}
	else
	{
			printf("Enter Fahrenheit value In temperature :- ");
			scanf("%f",&cl);
			fh=(cl*1.8)+32;
			printf(" Fahrenheit Value Is =%f",fh);
	}
	getch();
}
