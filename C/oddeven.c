#include<stdio.h>
int sodd(int,int);
int seven(int,int);
int sall(int,int);
int main()
{
    int start,end,choice,sum=0;
    read:
        printf("Enter the values for start and end :- ");
        scanf("%d%d",&start,&end);
        if(start>end)
        {
            printf("Invalid input\n");
            goto read;
        }
        while(1)
        {
            printf("\n1.Sum of all numbers");
            printf("\n2.Sum of even numbers");
            printf("\n3.Sum of odd numbers");
            printf("\nEnter your choice :-");
            scanf("%d",&choice);
            switch(choice)
            {
                case 1:
                    sum=sall(start,end);
                    printf("\nSum of all numbers :- %d\n",sum);
                    break;

                case 2:
                    sum=seven(start,end);
                    printf("\nSum of even numbers :- %d\n",sum);
                    break;

                case 3:
                    sum=sodd(start,end);
                    printf("\n Sum of odd numbers :- %d \n",sum);
                    break;

                case 4:
                    exit(0);
                    break;

                default:
                    printf("Invalid choice!");
            }
        }
    return 0;
}

int sodd(int start,int end)
{
    int sum=0,i;
    for(i=start;i<end;i++)
    {
        if(i%2==1)
        {
            sum+=i;
        }
    }
    return sum;
}
int seven(int start,int end)
{
    int sum=0,i;
    for(i=start;i<end;i++)
    {
        if(i%2==0)
        {
            sum+=i;
        }
    }
    return sum;
}
int sall(int start,int end)
{
    int sum=0,i;
    for(i=start;i<end;i++)
    {
        sum+=i;
    }
    return sum;
}
