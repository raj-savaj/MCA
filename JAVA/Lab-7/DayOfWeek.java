public class DayOfWeek {
	enum Day {
		SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY
	};

	public Boolean workDay(String name) {
		Day ob = Day.valueOf(name);
		switch (ob) {
		case MONDAY:
		case TUESDAY:
		case WEDNESDAY:
		case THURSDAY:
		case FRIDAY:
			return true;
		default:
			return false;
		}
	}
}
