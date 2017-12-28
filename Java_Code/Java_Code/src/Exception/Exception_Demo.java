package Exception;

public class Exception_Demo {

	public static void main(String[] args) {
		try {
			int x = 0;
			int y = 10;
			int result = y / x;
			System.out.println(result);
		} catch (ArithmeticException e) {
			System.out.println(e);

		}
		finally
		{
		System.out.println("Next to the integer");
		}

	}

}
