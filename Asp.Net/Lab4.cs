using System;
class Program
{
	static void Main(string[] args)
	{
		int[][] a=new int[3][];
		int p, q, r, sum = 0;
		Console.WriteLine("enter the first array size \n");
		p = int.Parse(Console.ReadLine());
		Console.WriteLine("enter the second inner array size \n");
		q = int.Parse(Console.ReadLine());
		Console.WriteLine("enter the third inner array size \n");
		r = int.Parse(Console.ReadLine());
		a[0] = new int[p];
		a[1] = new int[q];
		a[2] = new int[r];
		for (int i = 0; i<a.Length; i++)
		{
			Console.WriteLine("enter the array items of" + (i + 1) + "array \n");
			for (int j = 0; j < a[i].Length; j++)
			{
				a[i][j] = int.Parse(Console.ReadLine());
				sum = sum + a[i][j];
			}
		}
		Console.WriteLine("sum is" + sum);
		Console.ReadLine();
	}
 }