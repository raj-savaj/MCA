#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#define maxi 10000
void merge(int a[],int low,int mid,int high);
void mergesort(int a[],int low,int high);
int n;
int a[maxi];
void main(){
	int i;
	clock_t start,end;
	clrscr();
	printf("Enter Elements :");
	scanf("%d",&n);
	printf("The Numbers are :\n");
	for(i=0;i<n;i++)
	{
		a[i]=(int)rand()%1000;
		printf("%d\t",a[i]);
	}
	start=clock();
	mergesort(a,0,n-1);
	end=clock();
	printf("\nSorted Elements are\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\nTime Take by merge sort is %f \n",(end-start)/(CLK_TCK));
	getch();
}
void merge(int a[],int low,int mid,int high)
{
	int i=low,j=mid+1,k=low,c[maxi];
	while(i<=mid && j<=high)
	{
		if(a[i]<a[j])
			c[k++]=a[i++];
		else
			c[k++]=a[j++];
	}
	while(i<=mid)
	{
		c[k++]=a[i++];
	}
	while(j<=high)
	{
		c[k++]=a[j++];
	}
	for(i=low;i<k;i++)
	{
		a[i]=c[i];
	}
}
void mergesort(int a[],int low,int high)
{
	int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		mergesort(a,low,mid);
		mergesort(a,mid+1,high);
		merge(a,low,mid,high);
	}
}