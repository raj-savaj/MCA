#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int gcd(int,int);
int lcm(int,int,int);
void toh(int,char,char,char);
int sum(int);
int count=0;
void main()
{
	int g,l,m,x,y,z,n,ch,disk,move,i,j,ele,s,range;
	char source='s',temp='t',dest='d';
	clrscr();

	printf("\n1.GCD & LCM");
	printf("\n2.Tower of Hanoi");
	printf("\n3.Sum of no. from 1 to n");
	printf("\n4.Exit");
	printf("\nEnter your choice...");
	scanf("%d",&ch);

	switch(ch)
	{
		case 1:	{
				printf("Enter the Three integer");
				scanf("%d%d%d",&x,&y,&z);
				n=1;
				g=gcd(gcd(x,y),z);
				l=lcm(lcm(x,y,n),z,n);
				printf("GCD is %d LCM is %d",g,l);
				break;
			}
		case 2:	{
				printf("Enter the no of disk");
				scanf("%d",&disk);
				printf("sequence is ");
				toh(disk,source,temp,dest);
				printf("\n the no of moves are %d",count);
				break;
			}

		case 3:{
				printf("Enter the range of the sum:");
				scanf("%d",&range);
				s=sum(range);
				printf("Sum of element 1 to n:%d",s);
				break;
			}
		case 4:{
				exit(0);
				break;
			}
		default: printf("\nInvalid choice...");
	}
	getch();
}
int gcd(int m,int n)
{
	int r;
	if(m<n)
		return gcd(n,m);
	r=m%n;
	if(r==0)
		return n;
	else
		return(gcd(n,r));
}
int lcm(int a,int b,int n)
{
	if(n%a==0 && n%b==0)
		return n;
	else
		return (lcm(a,b,n+1));
}
void toh(int d,char source,char temp,char dest)
{

	if(d>0)
	{
		toh(d-1,source,dest,temp);
		printf("\n Move disk %d from %c to %c",d,source,dest);
		count++;
		toh(d-1,source,dest,temp);
	}
}
int sum(int n)
{
	if(n==0) return 0;
	if(n==-1) return 1;
	return(n+sum(n-1));
}
