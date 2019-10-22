#include <stdio.h>
int main()
{
    int i,N,oddSum = 0,evenSum = 0;
    printf("Enter the value of N\n");
    scanf ("%d", &N);
    for (i=1; i<=N; i++)
    {
        if (i % 2 == 0)
            evenSum = evenSum + i;
        else
            oddSum = oddSum + i;
    }
    printf ("Sum of all odd numbers = %d\n", oddSum);
    printf ("Sum of all even numbers = %d\n", evenSum);
    return 0;
}
