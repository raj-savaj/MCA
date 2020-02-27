#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
clock_t start,end;
void quicksort(int,int);
int partition(int,int);
int n,*a,i;
void main(){
	int m;
	printf("Enter the number of elements :");
	scanf("%d",&n);
	printf("\nEnter The Range :");
	scanf("%d",&m);
	a=(int *)malloc(sizeof(int)*n);
	if(a==NULL){
		printf("\nInsufficient memory");
	}
	else{
		for(i=0;i<n;i++)
		{
			a[i]=rand()%m;
			printf("a[%d]=%d\n",i,a[i]);
		}
		getch();
		start=clock();
		quicksort(0,n-1);
		end=clock();
		printf("\n The Sorted Elements are :");
		for(i=0;i<n;i++)
		{
			printf("%d\t",a[i]);
		}
		printf("\nThe Time efficiency is:%2.5f",(end-start)/(CLK_TCK));
		free(a);
		getch();
	}
}
void quicksort(int low,int high)
{
	int mid;
	if(low<high)
	{
		mid=partition(low,high);
		quicksort(low,mid-1);
		quicksort(mid+1,high);
	}
}
int partition(int low,int high)
{
	int up,down,pivot,temp;
	up=low;
	down=high;
	pivot=low;
	while(up<down)
	{
		while(a[pivot]>=a[up] && up<=high)
		{
			up++;
		}
		while(a[pivot]<a[down] && down>=low)
		{
			down--;
		}
		if(up<down)
		{
			temp=a[up];
			a[up]=a[down];
			a[down]=temp;
		}
	}
	if(pivot!=down){
		temp=a[pivot];
		a[pivot]=a[down];
		a[down]=temp;
	}
	return down;
}