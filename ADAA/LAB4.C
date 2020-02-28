#include<stdio.h>
#include<conio.h>
void top_srt();
int g[10][10],sv,n,visited[10],count=0;
void main()
{
	int i,j;
	clrscr();
	printf("Enter the number of nodes for the graph:");
	scanf("%d",&n);
	printf("Enter the adjacency matrix for the digraph\n");
	for(i=1;i<=n; i++)
	{
		for(j=1; j<=n; j++)
		{
			scanf("%d",&g[i][j]);
		}
	}
	for(i=1; i<=n; i++)
	{
		visited[i]=0;
	}
	printf("The solution for the graph is:");
	for(i=1; i<=n; i++)
	{
		top_srt();
	}
	if(count!=n)
	{
		printf("\n Graph indicates a cyclic digraph");
	}
	getch();
}
void top_srt()
{
   int i,j,indeg[10];
   for(i=1; i<=n; i++)
   {
     indeg[i]=0;
   }
   for(i=1; i<=n; i++)
   {
	if(visited[i]==0)
	{
		for(j=1; j<=n; j++)
		{
			if(g[j][i]==1)
			{
				indeg[i]++;
			}
		}
	}
   }
   for(i=1; i<=n; i++)
   {
     if(visited[i]==0 && indeg[i]==0)
     {
	sv=i;
	break;
     }
   }
   if(visited[sv]==0)
   {

       for(i=1; i<=n; i++)
       {
	 if(g[sv][i]==1)
	 {
		g[sv][i]=0;
	 }
       }
       visited[sv]=1;
       count=count+1;
       printf("\t%d",sv);
   }
}

