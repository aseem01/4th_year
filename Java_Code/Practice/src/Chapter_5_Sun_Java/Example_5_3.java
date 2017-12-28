package Chapter_5_Sun_Java;

public class Example_5_3 {

	public static void main(String[] args) {
		int number[] = { 55, 66, 77, 88, 22, 11, 44 };
		int even, odd;
		even = 0;
		odd = 0;
		for (int i = 0; i < number.length; i++) {
			if (number[i] % 2 == 0) {
				even++;
			} else

			{
				odd++;
			}
		}
		System.out.println("Even number : " + even + " odd Number : " + odd);

	}

}
