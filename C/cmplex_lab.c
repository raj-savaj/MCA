#include<stdio.h>
struct complex
{
	float real;
	float imag;
}temp;
struct complex add(struct complex n1, struct complex n2);
struct complex sub(struct complex n1, struct complex n2);
int main()
{
	struct complex n1, n2;
	printf("First complex number:\n");
	printf("Enter real and imaginary number:\n");
	scanf("%f%f",&n1.real,&n1.imag);
	printf("Second complex number:\n");
	printf("Enter real and imaginary number:\n");
	scanf("%f%f",&n2.real,&n2.imag);
	temp=add(n1,n2);
	printf("Sum = (%.1f) + (%.1f)i\n",temp.real,temp.imag) ;
	temp=sub(n1,n2);
	printf("Sub = (%.1f) - (%.1f)i",temp.real,temp.imag);
	return 0;
}
struct complex add(struct complex n1, struct complex n2)
{
	struct complex temp;
	temp.real=n1.real+n2.real;
	temp.imag=n1.imag+n2.imag;
	return(temp);
}
struct complex sub(struct complex n1, struct complex n2)
{
	struct complex temp;
	temp.real=n1.real-n2.real;
	temp.imag=n1.imag-n2.imag;
	return(temp);
}
