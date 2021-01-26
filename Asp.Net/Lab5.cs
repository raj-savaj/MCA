using System;
class Program
{
	static void Main(string[] args)
	{
		int a = 10, b = 5, c = 5;
		int res;
		try
		{
			res = a / (b - c);
			Console.WriteLine("Result" + res);
		}
		catch(DivideByZeroException e)
		{
			Console.WriteLine("divide by zero");
		}
		finally
		{
			Console.WriteLine("End of the program");
			Console.Read();
		}
	}
}