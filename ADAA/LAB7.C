#include<stdio.h>

#include<conio.h>

int min(int a, int b) {
  return (a < b ? a : b);
}
void floyd();
int n, cost[10][10], dist[10][10];

void main() 
{
  int i, j, k;
  clrscr();
  printf("Enter number of nodes of the graph:");
  scanf("%d", & n);
  printf("\nEnter the adjacency matrix for the graph:\n");
  for (i = 1; i <= n; i++){
  	for (j = 1; j <= n; j++)
  	{
      scanf("%d", & cost[i][j]);
  	}
  }
  printf("\n The adjacency matrix is:\n");
  for (i = 1; i <= n; i++) 
  {
    for (j = 1; j <= n; j++) 
    {
      printf("%5d", cost[i][j]);
      dist[i][j] = cost[i][j];
    }
    printf("\n");
  }
  floyd();
  getch();
}
void floyd() {
  int i, j, k;
  for (k = 1; k <= n; k++){
  	for (i = 1; i <= n; i++){
  		for (j = 1; j <= n; j++){
  			dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
  		}
   	}
  }
    
  printf("\n The Distance matrix is:\n");
  for (i = 1; i <= n; i++) {
    for (j = 1; j <= n; j++){
      printf("%5d", dist[i][j]);
    }
    printf("\n");
  }
}
/*** Output ***/
/*
Enter number of nodes of the graph: 4
Enter the adjacency matrix for the graph:
0 999 3 999
2 0 999 999
999 7 0 1
6 999 999 0

The adjacency matrix is:
The Distance Matrix is :
0 10 3 4
2 0  5 6
7 7  0 1
6 16 9 0
*/
