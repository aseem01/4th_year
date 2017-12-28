package Chapter_6_Sun_Java;

class A {
	public int n = 0;

	A() {
		n++;
	}
}

class B extends A {
	B() {
		n++;
	}
}

class C extends B {
	C() {
		n++;
	}
}

class D extends C {
	D() {
		n++;
		System.out.println("Final result : " + n);
	}
}

public class Constructor {

	public static void main(String[] args) {
		D d = new D();

	}

}
