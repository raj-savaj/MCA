using System;
public interface IPointy
{
 byte GetNumberOfPoints(); // Implicitly public and abstract.
 void Draw();
}
public class Hexagon : IPointy
{
	public Hexagon() { }
	public Hexagon(string name) { }
	public void Draw()
	{
		Console.WriteLine("-------------------------------");
		Console.WriteLine("Drawing the Hexagon");
	}
	public byte GetNumberOfPoints() { return 6; }
}
public class Triangle : IPointy
{
	public Triangle() { }
	public Triangle(string name) { }
	public void Draw()
	{
		Console.WriteLine("-------------------------------");
		Console.WriteLine("Drawing the Triangle");
	}
	public byte GetNumberOfPoints()
	{
		return 3;
	}
}
class ArrayExample
{
	static void Main(string[] args)
	{
		Console.WriteLine("Demonstrating arrays of interfaces");
		IPointy[] obj = { new Triangle("Triangle"), new Hexagon("Hexagon"), new Triangle() };
		int i=0;
		foreach (IPointy I in obj)
		{
			I.Draw();
			Console.WriteLine("Number of Points are {0}\n",I.GetNumberOfPoints());
		}
		Console.ReadLine();
	}
}
