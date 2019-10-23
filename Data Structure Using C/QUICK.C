//Quick Sort
#include<stdio.h>
#include<conio.h>

int a[10];		//Elements to be sorted and the sorted vector
int low;			//Points to the first element
int high;			//Points to the last element
int n;			//Number of elements to sort

int part(int low,int high)
{
	int i,j,temp,key;
	key=a[low];             //First element in the table is the pivot element
	i=low;
	j=high+1;              	//Partition the array into two parts
	while(i<=j)
	{
		do    i++ ;
		while (key>=a[i]);
		
		do j--    ;
		while (key<a[j]); 
		//Partition not completed .Exchange a[i],a[j] and repeat the process
		if(i<j)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	//Partition completed and return the position of pivot element
	temp=a[low];
	a[low]=a[j];
	a[j]=temp;
	return j;
}

void quick_sort(int low,int high)
{
	int pos;
	if(low<high)
	{
		pos=part(low,high);	//Partition the array into parts
		quick_sort(low,pos-1);   //Sort the left part of array
		quick_sort(pos+1,high);   //Sort the right part of array
	}
}
void main()
{
	int i;
	clrscr();
	printf("\n**Quick Sort ********\n");
	printf("Enter Array size: ");
	scanf("%d",&n);
	printf("Enter Array elements: \n");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	quick_sort(1,n);
	printf("The sorted array is:\n");
	for(i=1;i<=n;i++)
	{
		printf("%d   ",a[i]);
	}
	getch();
}
