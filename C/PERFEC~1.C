#include <stdio.h>
#include<conio.h>
void main()
{
    int i, num, sum = 0;
    clrscr();
    printf("Enter any number to check perfect number :- ");
    scanf("%d", &num);
    for(i=1; i<num; i++)
    {
	if(num%i == 0)
	{
	    sum += i;
	}
    }
    if(sum == num)
    {
	printf("%d is PERFECT NUMBER", num);
    }
    else
    {
	printf("%d is NOT PERFECT NUMBER", num);
    }
    getch();
}
