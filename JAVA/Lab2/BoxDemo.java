class Box {
	double width;
	double height;
	double depth;

	Box(double w, double h, double d) {
		width = w;
		height = h;
		depth = d;
	}

	double volume() {
		return width * height * depth;
	}
}

public class BoxDemo {
	public static void main(String[] args) {
		Box mybox1 = new Box(10, 20, 15);
		Box mybox2 = new Box(3, 6, 9);

		System.out.println("Volume is " + mybox1.volume());
		System.out.println("Volume is " + mybox2.volume());
	}
}
