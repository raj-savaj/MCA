/*   ARRAY DEVIATION BY PASSING TO FUNCTION    */
#include<stdio.h>	
#include<conio.h>
void avg(int [],int);
void main()
{
	int a[100],i,n;
	clrscr();
	printf("\n Enter the number of element");
	scanf("%d",&n);
	printf("\n Enter the numbers");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	avg(a,n);
	getch();
}
void avg(int a[],int n)
{
	int sum=0,i;
	float avg,dev[100];
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	avg=sum/n;
	printf("\n Sum=%d \n Average=%f\n",sum,avg);
	for(i=0;i<n;i++)
	{
		dev[i]=a[i]-avg;
		printf("\n %d deviates is %5.2f",a[i],dev[i]);
	}
}
