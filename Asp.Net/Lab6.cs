using System;
class Shape
{
	protected string petName;
	public Shape()
	{
		petName = "NoName";
	}
	public Shape(string n)
	{
		petName = n;
	}
	public virtual void show()
	{
		Console.WriteLine("Drawing Shape in base class");
	}
	public virtual void Display()
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
	public override void Display()
	{
		base.Display();
		Console.WriteLine("Call of Overridding Method from Circle class\n");
	}
}
class Triangle : Shape
{
	public Triangle(string n) : base(n){ }
	public override void show()
	{
		Console.WriteLine("\n\nWe are in Triangle, the derived class");
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