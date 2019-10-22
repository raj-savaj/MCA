#include <stdio.h>
int main()
{
    int r;
    long n = 0, i, sum = 0, temp;
    printf("Enter an integer upto which you want to find armstrong numbers :- ");
    scanf("%ld",&n);
    printf("Following armstrong numbers are found from 1 to %ld\n",n);
    for( i = 1 ; i <= n ; i++ )
    {
        temp = i;
        while( temp != 0 )
        {
            r=temp%10;
            sum=sum+r*r*r;
            temp=temp/10;
        }
        if (i==sum)
        printf("%ld\n", i);
        sum = 0;
    }
    return 0;
}
