#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
	int no,ono,num,result,armno,data,i;
	clrscr();
	printf("Enter Your Armstrong Number :- ");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
		num=0,result=0,armno=0,data=0;
		ono=i;
		while(ono!=0)
		{
			ono/=10;
			++num;
		}
		ono=i;
		while(ono!=0)
		{
			result=ono%10;
			armno=pow(result,num);
			data+=armno;
			ono=ono/10;
		}
		if(data==i)
		{
			printf("\nNumber %d Is Armstrong ",i);
		}
	}
	getch();
}
