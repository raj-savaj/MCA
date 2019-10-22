#include <stdio.h>
#include<string.h>
int main()
{
	char name[100],i;
	printf("Enter String: ");
	scanf("%s",name);
	for(i=0;i<strlen(name);i++)
	{
		name[i]=name[i]+5;
	}
	printf("String after encoding(ASCII+5) :- ");
	for(i=0;i<strlen(name);i++)
	{
		printf("%d",name[i]);
	}
	for(i=0;i<strlen(name);i++)
	{
		name[i]=name[i]-5;
	}
    printf("\nString after Decoding :- ");
    printf("%s\n",name);
    return 0;
}
