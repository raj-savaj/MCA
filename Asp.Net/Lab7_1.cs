using System;

class Program
{
	public delegate int BinaryOp(int x, int y);
	public static int Add(int x, int y)
	{
		return (x+y);
	}
	static void Main(string[] args)
	{
		BinaryOp b = new BinaryOp(Add);
		Console.Write("Addition is: " + b(4, 6));
		Console.ReadLine();
	}
}