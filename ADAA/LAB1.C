/* Binary Search And Linear Search  */
#include<stdio.h>
#include<conio.h>
#include<time.h>

clock_t start,end;
int n,*a;

int binary(int *a,int l,int n,int key)
{
	int mid;
	mid=(l+n)/2;
	if(l>n)
	{
		return -1;
	}
	else
	{
		if(key==a[mid])
		{
			return mid;
		}
		else if(key < a[mid])
		{
			return binary(a,l,mid-1,key);
		}
		else if(key > a[mid])
		{
			return binary(a,mid+1,n,key);
		}
	}
}
int linear(int *a,int n,int l,int key)
{
	if(l>n){
		return -1;
	}
	else if(key==a[l]){
		return l;
	}
	else{
		return linear(a,n,l+1,key);
	}
}
void sort(int n)
{
	int i,j,t;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]<a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
}
void main(){
	int m,n,key,i,pos,ch;
	clrscr();
	printf("Enter The Number Of Element :");
	scanf("%d",&n);
	printf("\n Enter The Range :");
	scanf("%d",&m);
	a=(int *)malloc(sizeof(int)*n);
	if(a==NULL)
	{
		printf("insufficient memory");
	}
	else
	{
		for(i=0;i<n;i++)
		{
			a[i]=rand()%m;
			printf("a[%d]=%d\t",i,a[i]);
		}
		sort(n);
		printf("\nAfter Sorting ...");
		while(1)
		{
			printf("\n1.Binary");
			printf("\n2.Linear");
			printf("\n3.Exit");
			printf("\nEnter Your Choice :");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1:
					start=clock();
					printf("\n Enter The Key Element ");
					scanf("%d",&key);
					pos=binary(a,0,n-1,key);
					if(pos>0)
					{
						printf("\n Search Successfyll at %d",pos+1);
					}
					else
					{
						printf("Unsuccessfull");
					}
					end=clock();
					printf("\n Time Spent %f \n",(end-start)/(CLK_TCK));
					getch();
					break;
				case 2:
					start=clock();
					printf("'\n Enter The Key Element ");
					scanf("%d",&key);
					pos=linear(a,n-1,0,key);
					if(pos>0)
					{
						printf("\n Search Successfyll at %d",pos+1);
					}
					else
					{
						printf("Unsuccessfull");
					}
					end=clock();
					printf("\n Time Spent %f \n",(end-start)/(CLK_TCK));
					getch();
					break;
				case 3:
					exit(0);
				default:
					printf("input correct choice");
					break;

			}
		}
	}
	free(a);
}
