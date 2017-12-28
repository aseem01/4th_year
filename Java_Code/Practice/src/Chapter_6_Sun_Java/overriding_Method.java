package Chapter_6_Sun_Java;

class Supperclass {
	int n;

	Supperclass() {
		n++;
	}

	public void getvalue() {
		System.out.println("Calling Supperclass : ");
		System.out.println("value : " + n);
	}
}

class Subclass extends Supperclass {
	int n;

	Subclass() {
		n++;
	}

	public void getvalue() {
		System.out.println("Calling Subclass :");
		System.out.println("Value : " + n);
	}
}

public class overriding_Method {

	public static void main(String[] args) {
		Supperclass ex1=new Supperclass();
		Subclass ex2=new Subclass();
		System.out.println("I'm here boss");
		ex1.getvalue();
		System.out.println("I'm here now : ");
		ex2.getvalue();

	}

}
