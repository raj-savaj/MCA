#include<stdio.h>
int main()
{
    int n, count, sum=0;
    printf("Enter an integer: ");
    scanf("%d",&n);
    count=1;
    while(count<=n)
    {
        sum+=count;
        ++count;
    }
    printf("Sum = %d",sum);
    return 0;
}
