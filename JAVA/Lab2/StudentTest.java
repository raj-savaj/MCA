class StudentData
{
   private int S_Id;
   private String S_Name;
   private int S_Age;
   StudentData()
   {
	   S_Id = 100;
	   S_Name = "Tony";
	   S_Age = 18;
   }
   StudentData(int num1, String str, int num2)
   {
	   S_Id = num1;
	   S_Name = str;
	   S_Age = num2;
   }
   
   public void print() {
       System.out.println("Student Name is: "+S_Name);
       System.out.println("Student Age is: "+S_Age);
       System.out.println("Student ID is: "+S_Id);
   }
 }

public class StudentTest {
	public static void main(String[] args) {
		StudentData obj = new StudentData();
	    obj.print(); 
	    
	    StudentData pobj = new StudentData(111, "John", 6);
	    pobj.print();

	}
}
