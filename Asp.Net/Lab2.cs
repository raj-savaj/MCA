using System;

class Program
{
	 static void Main(string[] args)
	 {
		 int a = 10;
		 object x ;
		 Console.WriteLine("value of a={0}", a);
		 x = a;
		 Console.WriteLine("value of object x={0}", x);
		 x = 100;
		 a =(int) x;
		 Console.WriteLine("value of object x={0}", x);
		 Console.WriteLine("value of a={0}", a);
		 Console.Read();
	 }
}