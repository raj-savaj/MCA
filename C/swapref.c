#include<stdio.h>
void swap(int *p, int *q);
int main()
{
		int x=23,y=53;
		printf("\nValue of x and y before swapping are x=%d and y=%d",x,y);
		swap(&x,&y);
		printf("\nValue of x and y after swapping are x=%d and y=%d",x,y);
		return 0;
}
void swap(int *p,int *q)
{
		int r;
		r=*p;
		*p=*q;
		*q=r;
}
