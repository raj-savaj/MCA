#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
int isdigit (char );
float compute (char ,float ,float );
void main()
{
	int i,top;
	char symbol,postfix[20];
	float s[20],op1,op2,res;
	clrscr();
	printf("\n\t***EVALUATION OF POSTFIX EXPRESSION***");
	printf("\nEnter the postfix expression:");
	gets(postfix);
	top=-1;
	for(i=0;i<strlen(postfix);i++)
	{
		symbol=postfix[i];
		if(isdigit(symbol))
		{
			top=top+1;
			s[top]=symbol-'0';
		}
		else
		{
			op2=s[top--];
			op1=s[top--];
			res=compute(symbol,op1,op2);
			s[++top]=res;
		}
	}
	res=s[top--];
	printf("\n\n\tResult of the given postfix Expression:%f",res);
	getch();
}

int isdigit(char symbol)
{
    if(symbol>='0' && symbol<='9')
		return 1;
	else
		return 0;
}

float compute(char symbol,float op1,float op2)
{
	switch(symbol)
	{
		case '+':return op1+op2;
		case '-':return op1-op2;
		case '*':return op1*op2;
		case '/':return op1/op2;
		case '$':
		case '^':return pow(op1,op2);
		default: printf("\nInvalid...");
		exit(0);
	}
	return ;
}
