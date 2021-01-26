using System;

class Student
{
	private string sname, sid;
	int sage;
	public Student(string sid)
	{
		this.sid = sid;
	}
	public string StudentName // read-write property
	{
	 	get
	 	{
	 		return sname;
	 	}
	 	set
	 	{
	 		sname = value;
	 	}
	}
	public string Studentsid // read only property
	{
	 	get
	 	{
	 		return sid;
	 	}
	}
	public int StudentAge // read-write property
	{
	 	get
	 	{
	 		return sage;
	 	}
	 	set
	 	{
	 		sage = value;
	 	}
	}
}
class Program
{
	static void Main(string[] args)
	{
		Student s = new Student("13MCA01");
		s.StudentAge = 21;
		s.StudentName = "Joe";
		Console.WriteLine("Stududent USN= {0} \nName = {1} \nAge ={2}", s.Studentsid,s.StudentName, s.StudentAge);
		Console.ReadKey();
	}
}