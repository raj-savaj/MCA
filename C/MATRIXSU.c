#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10],i,j,col1,row1,col2,row2;
	printf("Enter First Matrix Row And Column :- ");
	scanf("%d %d",&row1,&col1);
	printf("Enter Secoend Matrix Row And Column :- ");
	scanf("%d %d",&row2,&col2);
	printf("--- First Matrix ---\n");
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col1;j++)
		{
			printf("%d %d = ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	printf("--- Secoedn Matric Data ---\n");
	for(i=0;i<row2;i++)
	{
		for(j=0;j<col2;j++)
		{
			printf("%d %d= ",i+1,j+1);
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n--- Calculation Of Matrix ---\n");
	if(row1==row2 && col1==col2)
	{
		for(i=0;i<row2;i++)
		{
			for(j=0;j<col2;j++)
			{
				printf("%d\t",a[i][j]+b[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("Matrix Row And Colum leangth Not Same");
	}
	return 0;
}
