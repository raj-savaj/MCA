#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,det,r1,r2,real,imag;
    clrscr();
    printf("Enter coefficients a, b and c: ");
    scanf("%f%f%f",&a,&b,&c);
    det=b*b-4*a*c;
    if(a==0 || b==0)
    {
	printf("Invalid Input :- ");
    }
    else
    {
	if (det>0)
	{
		//a=1,b=-5,c=6 x1=3 x2=2
		r1= (-b+sqrt(det))/(2*a);
		r2= (-b-sqrt(det))/(2*a);
		printf("Roots are Real And Distinct : %2.2f and %2.2f",r1 , r2);
	}
	else if (det==0)
	{
		//a=1,b=-4,c=4 x1=2 x2=2
		r1 = r2 = -b/(2*a);
		printf("Roots are Equal = %2.2f and %2.2f", r1, r2);
	}
	else
	{
		//a=1,b=2,c=3
		real= -b/(2*a);
		imag = sqrt(-det)/(2*a);
		printf("Roots are Imaginary And complex : %.2f + %.2fi and %.2f - %.2fi", real, imag, real, imag);
	}
    }
    getch();
}
