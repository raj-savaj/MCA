#include<stdio.h>
#include<string.h>
#include<conio.h>
#define N 50
int pos=0;
struct student
{
    int sid;
    char name[N];
    float avg;
    struct marks{
	float s1,s2,s3;
    }sub;
}s[N];
void entry();
void diaplay();
void deleterecord();
void bestmark();
void main()
{
    int ch;
    clrscr();
    while(1)
    {
	printf("\nStudent Programme");
	printf("\n1.Add New Student");
	printf("\n2.Display Student");
	printf("\n3.Delete Student");
	printf("\n4.Display Student With Best Mark");
	printf("\n5.To Exit The Programme");
	printf("\nEnter Your choice :- ");
	scanf("%d",&ch);
	switch(ch)
	{
	    case 1:
		entry();
		break;
	    case 2:
		diaplay();
		break;
	    case 3:
		deleterecord();
		break;
	    case 4:
		bestmark();
		break;
	    case 5:
		exit(0);
	    default:
		printf("\nInvalid Choice !");
	}
    }
    getch();
}
void entry()
{
	float a,b,c;
	printf("\nEnter student Id : ");
	scanf("%d",&s[pos].sid);
	printf("Enter student name:");
	scanf("%s",s[pos].name);
	printf("Enter marks of 3 subject :- ");
	scanf("%f %f %f",&a,&b,&c);
	s[pos].sub.s1=a;
	s[pos].sub.s2=b;
	s[pos].sub.s3=c;
	s[pos].avg=(s[pos].sub.s1+s[pos].sub.s2+s[pos].sub.s3)/3;
	pos++;
}
void diaplay()
{
    int i,j;
    if(pos==0)
    {
	printf("\n\t No Record Found \n");
    }
    else
    {
	printf("%-4s%-15s%7s%7s%7s%7s","Id","Name","SUB-1","SUB-2","SUB-3","AVG");
	for(i=0;i<pos;i++)
	{
	    printf("\n%-4d%-15s%7.2f%7.2f%7.2f%7.2f",s[i].sid,s[i].name,s[i].sub.s1,s[i].sub.s2,s[i].sub.s3,s[i].avg);
	}
	printf("\n\n");
    }
}
void deleterecord()
{
    int id,i,j;
    if(pos==0)
    {
	    printf("\n\t No Record Found \n");
    }
    else
    {
	printf("\nEnter the student id to delete :");
	scanf("%d",&id);
	for(i=0;i<pos;i++)
	{
	    if(s[i].sid==id)
	    {
		for(j=i;j<pos;j++)
		{
		    s[j]=s[j+1];
		}
		pos--;
	    }
	}
	printf("Record Successfuly ");
    }
}
void bestmark()
{
    int i,id,best=0;
    if(pos==0)
    {
	printf("\n\t No Record Found \n");
    }
    else
    {
	printf("\n\t Best Mark \n");
	for(i=0;i<pos;i++)
	{
	    if(best<s[i].avg)
	    {
		best=s[i].avg;
		id=i;
	    }
	}
	printf("\n%-4s%-15s%7s%7s%7s%7s","Id","Name","SUB-1","SUB-2","SUB-3","AVG");
	printf("\n%-4d%-15s%7.2f%7.2f%7.2f%7.2f\n\n",s[id].sid,s[id].name,s[id].sub.s1,s[id].sub.s2,s[id].sub.s3,s[id].avg);
    }
}