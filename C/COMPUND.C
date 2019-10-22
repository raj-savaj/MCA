#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	float p,q,r,ci,si;
	int n;
	clrscr();
	printf("Enter Amount Rate And Year :-");
	scanf("%f %f %d",&p,&r,&n);
	si=(p*r*n)/100;
	printf("SI=%f",si);
	q=1+(r/100);
	ci=p*pow(q,n)-p;
	printf("\n%f",ci);
	getch();
}