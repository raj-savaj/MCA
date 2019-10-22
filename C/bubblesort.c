#include<stdio.h>
int main()
{
	int num,a[20],i,j,temp;
	printf("Enter Number Of Element :- ");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		printf("Enter A[%d] :- ",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<num-1;i++)
	{
		for(j=i+1;j<num;j++)
		{
			if(a[i] > a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("Asceding order");
	for(i=0;i<num;i++)
	{
		printf("\n%d",a[i]);
	}
	printf("\nDesceding order");
	for(i=num-1;i>=0;i--)
	{
		printf("\n%d",a[i]);
	}
	return 0;
}
