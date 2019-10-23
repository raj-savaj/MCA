import java.util.Scanner;

public class String_Buffer {

	public static void main(String[] args) {
		StringBuffer str=new StringBuffer();
		Scanner sc=new Scanner(System.in);
		System.out.println("The capacity of String:" + str.capacity());
		System.out.println("Enter the string: ");
		str.append(sc.nextLine());
		System.out.println("The capacity of String:" + str.capacity());
		str.reverse();
		System.out.println("The string after reverse is:" +str.toString().toUpperCase());
		System.out.println("Enter the string to append: ");
		StringBuffer str2=new StringBuffer(sc.nextLine());
		System.out.println("The string after appending:" + str.append(str2)); 
	}

}
