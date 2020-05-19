#include<stdio.h>
#include<conio.h>
int max(int a,int b){
	return(a>b ?a:b);
}
void dknap();
void opt_sol();
int n,m,i,w[20],p[20],v[20][20],j,x[20];
void main(){
	clrscr();
	printf("enter the number of items:");
	scanf("%d",&n);
	printf("enter the capacity of knapsack m:");
	scanf("%d",&m);
	printf("enter the weights and values of each items:\n");
	for(i=1;i<=n;i++)
	{
		printf("\n w[%d]=",i);
		scanf("%d",&w[i]);
		printf("p[%d]=",i);
		scanf("%d",&p[i]);
	}
	for(i=0;i<=n;i++)
	{
		for(j=0;j<m;j++)
		{
			v[i][j]=0;
		}
	}
	dknap();
	getch();

}
void dknap()
{
	int i,j,sol;
	for(i=1;i<=n;i++)
	{
		for(j=0;j<=m;j++)
		{
			if(j-w[i]>=0){
				v[i][j]=max((v[i-1][j]),(p[i]+v[i-1][j-w[i]]));
			}
			else{
				v[i][j]=v[i-1][j];
			}
		}
	}
	printf("\n the values are:\n");
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=m;j++)
		{
			printf("%d\t",v[i][j]);
			sol=v[i][j];
		}
		printf("\n");
	}
	printf("\n the optimal solution is %d",sol);
	opt_sol();
}
void opt_sol()
{
	int i,j,temp1,temp2;
	temp1=n;
	temp2=m;
	for(i=n;i>=1;i--){
		if(v[temp1][temp2]==v[temp1-1][temp2]){
			x[temp1]=0;
		}
		else
		{
			x[temp1]=1;
			temp2=temp2-w[temp1];
		}
		temp1--;
	}
	printf("\n the items included are:");
	for(i=1;i<=n;i++){
		if(x[i]==1){
			printf("item %d \t",i);
		}
	}
}





