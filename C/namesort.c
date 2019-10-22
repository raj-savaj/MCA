#include<stdio.h>
#include<string.h>
int main()
{
	char name[10][8],tname[10][8],temp[8];
	int j,N,i;
	printf("Enter Num Of Name Store :- ");
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		printf("Enter Name %d :- ",i+1);
		scanf("%s",name[i]);
		strcpy(tname[i],name[i]);
	}
	for(i=0;i<N-1;i++)
	{
		for(j=i+1;j<N;j++)
		{
			if(strcasecmp(name[i],name[j]) > 0)//strcmpi
			{
				strcpy(temp,name[i]);
				strcpy(name[i],name[j]);
				strcpy(name[j],temp);
			}

		}
	}
	for(i=0;i<N;i++)
	{
		printf("\n%s",name[i]);
	}
	return 0;
}
