
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int key,n,a[10],i,ch,pos=-1;
	clrscr();

	printf("Enter the array size:");
	scanf("%d",&n);

	printf("\nEnter the element...\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("Enter the key to search...");
	scanf("%d",&key);
	while(ch!=3)
	{
		printf("\n1.Linear");
		printf("\n2.Binary");
		printf("\n3.Exit");
		printf("\nEnter the choice...");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			{
				pos=l(a,n,key);
				if(pos!=-1)
				{
					printf("Found at %d",key);
				}
				else
				{
					printf("Not Found");
				}
				break;
			}
			case 2:
			{
				pos=b(a,n,key);
				if(pos==-1)
				{
					printf("Not Found");
				}
				else
				{
					printf("Element found at pos %d",pos);
				}
				break;
			}
			case 3:
			{
				exit(0);
			}
			default: 
				printf("Invalid choice...");
		}
		getch();
	}
}

int l(int a[],int n,int key)
{
	int i,pos=-1;
	for(i=0;i<n;i++)
	{
		if(key==a[i])
		{
			pos=i;
		}
	}
	return pos;
}

int b(int a[],int n,int key)
{
	int high,mid,low,pos;
	low=0;
	high=n-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(key==a[mid])
			return (mid);
		else if(key<a[mid])
			high=mid-1;
		else if(key>a[mid])
			low=mid+1;
	}
	return(-1);
}
