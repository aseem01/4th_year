package Chapter_5_Sun_Java;

public class Example_5_7 {

	public static void main(String[] args) {
		int row, coloum, y;
		System.out.println("\n Multiplication table \n\n");
		row = 1;
		do {
			coloum = 1;
			do {
				y = row * coloum;
				System.out.println("  " + y);
				coloum++;

			} while (coloum <= 3);
			System.out.println("");
			row++;
		} while (row <= 3);

	}

}
