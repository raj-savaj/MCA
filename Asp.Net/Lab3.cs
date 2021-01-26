using System;

class abc
{ 
	int a, b;
	public abc(int x,int y)
	{ 
		a = x;
		b = y;
	}
	public static abc operator +(abc x, abc y)
	{ 
		return new abc(x.a + y.a, x.b + y.b);
	}
	public void print()
	{
		Console.WriteLine("value of a={0},and values of b={1}", a, b);
	}
}
class Program
{
	static void Main(string[] args)
	{
		abc y = new abc(4, 9);
		y.print();
		abc yy = new abc(64, 16);
		yy.print();
		abc z = y + yy;
		z.print();
		Console.ReadLine();
	}
 }