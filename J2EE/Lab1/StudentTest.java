package Lab1;

import java.util.Scanner;
public class StudentTest {
	public static void main(String[] args) {
		
		Student s1=new Student();
		int choice=0;
		Scanner sc=new Scanner(System.in);
		while(true)
		{
			System.out.println("Enter your choice ");
			choice=sc.nextInt();
			switch(choice)
			{
			case 1: s1.insert();
					break;
			case 2: s1.deleteById();
					break;
			case 3: s1.updateById();
					break;
			case 4: s1.displayAll();
					break;
			case 5: s1.displayByResult();
					break;
			case 6: System.exit(0);
					break;
			default: System.out.println("Invalid choice");
			}
		}
	}
}
