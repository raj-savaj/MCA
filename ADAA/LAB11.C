#include <stdio.h>
#include <conio.h>

void SSSP();
int cost[10][10], vis[10], dist[10];
int sv, n;
void main()
{
	int i, j;
	clrscr();
	printf("Enter the no of vertices\n");
	scanf("%d", &n);
	printf("Enter the cost adjacency matrix, if there is no egde enter the cost as 999\n");
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++) scanf("%d", &cost[i][j]);
	printf("Enter the source vertex\n");
	scanf("%d", &sv);
	SSSP();
	printf("The shortest distance from %d is \n", sv);
	for (i = 1; i <= n; i++)
	{
		if (i == sv) continue;
		printf("%d--->%d=%d\n", sv, i, dist[i]);
	}

	getch();
}

void SSSP()
{
	int i, j, k, min, nv;
	//MARK ALL VERTICES AS UNVISITED    
	//INITIALIZATION OF SOURCE VERTEX TO DESTINATION   
	for (i = 1; i <= n; i++)
	{
		vis[i] = 0;
		dist[i] = cost[sv][i];
	}

	dist[sv] = 0;
	vis[sv] = 1;
	
	//DETERMINE N-1 PATHS FROM THE SOURCE     
	for (k = 2; k <= n; k++)
	{
		min = 999;
		// CHOOSE A MINIMUM DISTANCE VERTEX WHICH IS UNVISITED  
		for (i = 1; i <= n; i++)
			if (vis[i] == 0 && dist[i] < min)
			{
				min = dist[i];
				nv = i;
			}

		// MARK THE NEXT ADJACENT VERTEX AS VISITED 
		vis[nv] = 1;
		for (i = 1; i <= n; i++)
			if (vis[i] == 0)
			{
				if (dist[i] > (dist[nv] + cost[nv][i])) dist[i] = dist[nv] + cost[nv][i];
			}
	}
}