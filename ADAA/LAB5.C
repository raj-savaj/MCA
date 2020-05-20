#include<stdio.h>
void main()
{
	int s,sv,i,j,front=0,rear=0,k=1,u,v,n;
	int a[10][10],visited[10],queue[20],t[10][2];
	clrscr();
	printf("Enter number of nodes :\n");
	scanf("%d",&n)	;
	printf("Enter Adjacency matrix :\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter Source vertex :\n");
	scanf("%d",&sv);
	for(i=1;i<=n;i++)
	{
		visited[i]=0;
	}
	queue[++rear]=sv;
	++front;
	visited[sv]=1;
	while(front<=rear)
	{
		u=queue[front++];
		for(v=1;v<=n;v++)
		{
			if(a[u][v]==1 && visited[v]==0)
			{
				visited[v]=1;
				queue[++rear]=v;
				t[k][1]=u;
				t[k][2]=v;
				k++;
			}
		}
	}
	printf("The Reachable Nodes from starting nodes are :\n");
	for(i=1;i<k;i++)
	{
		printf("(%d%d)\n",t[i][1],t[i][2]);
	}
	getch();
}

/*** Output ***/
/*
Enter number of nodes : 4
Enter Adjacency matrix :
0 1 1 0
1 0 0 1
1 0 0 1
0 1 1 0
Enter Source vertex :
1
The Reachable Nodes from starting nodes are :
(1,2)
(1,3)
(2,4)
*/
