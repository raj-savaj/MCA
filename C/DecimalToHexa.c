#include<stdio.h>
int main()
{
    int no,digit,remind,count=0,i,a[20];
    printf("Enter Decimal Value :- ");
    scanf("%d",&no);
    while(no!=0)
    {
        remind=no%16;
        if(remind<10)
        {
            a[count]=48+remind;
        }
        else
        {
            a[count]=55+remind;
        }
        count++;
        no=no/16;
    }
    printf("Hexadecimal value is = ");
    for(i=count-1;i>=0;i--)
    {
        printf("%c",a[i]);
    }
    return 0;
}
