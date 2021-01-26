using System;

abstract class Shape
{
	string petName;
	public Shape()
	{
		petName = "NoName";
	}
	public Shape(string n)
	{
		petName = n;
	}
	abstract public void show();
	public void Display()
	{
		Console.WriteLine("Drawing Shape: {0}\n", petName);
	}
}
class Circle : Shape
{
	public Circle() { }
	public override void show()
	{
		Console.WriteLine("We are in Circle");
	}
}
class Triangle : Shape
{
	public Triangle(string n) : base(n){ }
	public override void show()
	{
		Console.WriteLine("We are in Triangle");
	}
}
class Abstractclassmethod
{
	static void Main(string[] args)
	{
		Circle c = new Circle();
		Triangle t = new Triangle("Triangle");
		c.show();
		c.Display();
		t.show();
		t.Display();
		Console.ReadLine();
	}
}