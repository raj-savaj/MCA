
class MyException extends Exception
{
	public String toString()
	{
		return("MyException Object: The age entered is invalid, it must be in the range from 18 to 59");
	}

}

public class MyExceptionDemo {
	public static void main(String[] args) {
		try {
			String name = args[0];
			int age = Integer.parseInt(args[1]);
			if ((age < 18) || (age > 59))
			{
				throw new MyException();
			}
			System.out.println("Name: " + name);
			System.out.println("Age: " + age);
		} catch (MyException e) {
			System.out.println("Exception: " + e);
		} catch (ArrayIndexOutOfBoundsException e) {
			System.out.println("Exception: " + e);
		} catch (NumberFormatException e) {
			System.out.println("Exception: " + e);
		}
	}
}
