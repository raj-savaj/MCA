import java.util.Scanner;

public class EnumMain {

	public static void main(String[] args) {
		Scanner input=new Scanner(System.in);
		System.out.println("Enter today’s day: ");
		String today=input.nextLine();
		DayOfWeek Weekday=new DayOfWeek();
		System.out.println(Weekday.workDay(today));

	}

}
