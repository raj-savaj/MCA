using System;
class MultiCastDelegate
{
	public delegate void PrintData(string s);
	public static void WriteConsole(string s)
	{
		Console.WriteLine(s + " to Console!!!!");
	}
	public static void WriteFile(string s)
	{
		Console.WriteLine(s + " to file!!!!");
	}
	static void Main(string[] args)
	{
		PrintData p = new PrintData(WriteConsole);
		p+= new PrintData(WriteFile); // p=p + new PrintData(WriteFile);
		p("This should go");
		p("This should go");
	}
} 