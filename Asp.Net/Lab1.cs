using System;

class Program
{
	static void Main(string[] args)
	{
		if (args.Length > 0)
			foreach (string var in args)
				Console.Write("\t " + var);
		else
			Console.WriteLine("argument is not passed !");
		Console.Read();
	}
}