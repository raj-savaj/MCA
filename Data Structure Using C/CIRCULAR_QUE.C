#include <stdio.h>
#include<conio.h>
#define MAX 5
int cq[MAX],rear= -1,front=0,count=0;
void cqins()
{
	int elt;
	if((front==0 && rear==MAX-1) || (front>0&&front==rear+1))
	{
		printf("\nCQ is full");
	}
	else
	{
		printf("\nEnter the element of insert");
		scanf("%d",&elt);
		rear=(rear+1)%MAX;
		cq[rear]=elt;
		printf("\nElement insert at location %d",rear);
		count++;
	}
}
void cqdel()
{
	if((front==0) && (rear==-1))
	{
		printf("\nCQ is empty");
	}
	else if(front==rear)
	{
		printf("\nDelete item is %d",cq[front]);
		printf("\nCQ is empty and reInitialized Front and Rear pointers");
		front=0;
		rear=-1;
	}
	else
	{
		printf("\nDelete item is %d",cq[front]);
		front=(front+1)%MAX;
		count--;
	}
}

void cqdis()
{
int i,j;
i=front;
if(count==0)
{
	printf("\nempty");
}
else
{
	printf("\nthe elements are:");
	for(j=1;j<=count;j++)
	{
		printf("%d",cq[i]);
		i=(i+1)%MAX;
	}
	printf("\nFront of the CQ:%d",cq[front]);
	printf("\nRear of the CQ:%d",cq[rear]);
	}
}

void main()
{
	int ch;
	clrscr();
	for(;;)
	{
		printf("\nCQ Operation");
		printf("\n1.Insert");
		printf("\n2.Delete");
		printf("\n3.Display");
		printf("\n4.Exit");
		printf("\nEnter your choice...");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: cqins();
			break;
			case 2: cqdel();
			break;
			case 3: cqdis();
			break;
			case 4:exit(0);
			default: printf("\nInvalid");
		}
	}
	getch();
}