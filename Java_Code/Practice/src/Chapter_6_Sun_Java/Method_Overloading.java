package Chapter_6_Sun_Java;

class overloading {
	public int overloading(int a, int b) {
		return a + b;
	}

	public double overloading(double a, double b) {
		return a + b;
	}

	public String overloading(String a, String b) {
		return a + b;
	}

}

public class Method_Overloading {

	public static void main(String[] args) {
		
		overloading obj=new overloading();
		System.out.println("Integer value : "+obj.overloading(20, 80));
		System.out.println("Double value : "+obj.overloading(20.10, 30.45));
		System.out.println("String value : "+obj.overloading("Hellow ", " Aseem Chakrabarthy"));

	}

}
