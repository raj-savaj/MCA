#include<iostream.h>
#include<conio.h>
void main()
{
	int a[10],sum=0,i;
	cout<<"Enter 10 Element"<<endl;
	for(i=0i<10;i++)
	{
		cin>>a[i];
		sum=sum+a[i];
	}
	cout<<"Sum = "<<sum;
	getch();
}