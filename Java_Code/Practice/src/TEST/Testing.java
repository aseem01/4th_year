package TEST;

public class Testing {

	public static void main(String[] args) {
		int a = 40;
		int b = 20;
		int c = 30;
		int big = 0;
		String theBig = "";
		if (a > b)
			big = a;
		else
			big = b;
		if (c > big) {
			System.out.println("C = " + c);
		} else {
			if (big == b)
				theBig = "b";
			else
				theBig = "a";
			System.out.println(theBig + " = " + big);
		}
	}

}
