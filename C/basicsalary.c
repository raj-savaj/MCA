#include<stdio.h>
int main()
{
    float cal,hra,ta,it,sal;
    printf("Enter The Basic Salary :- ");
    scanf("%f",&sal);
    hra=(sal*10)/100;
    ta=(sal*5)/100;
    it=(sal*2.5)/100;
    cal=sal+hra+ta-it;
    printf("HRA Is = %2.2f\n",hra);
    printf("TA Is = %2.2f\n",ta);
    printf("IT Is = %2.2f\n",it);
    printf("Salary Is = %2.2f\n",cal);
    return 0;
}
