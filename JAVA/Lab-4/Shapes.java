package Lab4;

public class Shapes implements Rectangle, Triangle {

	@Override
	public void area_triang(float l, float b) {
		float area=l*b;
	    System.out.println("Area of Rectangle :"+ area);

	}

	@Override
	public void area_rect(float l, float b) {
        float area=l*b/2;
        System.out.println("Area of Triangle :"+ area);
	}

}
