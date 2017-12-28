package Education_Round_31;

import java.util.Scanner;

public class Problem_B {

	public static void main(String[] args) {
		Scanner src = new Scanner(System.in);
		int n, x, value, sum;
		sum = 0;
		n = src.nextInt();
		x = src.nextInt();
		for (int i = 0; i < n; i++) {
			value = src.nextInt();
			sum += value;
		}
		sum = sum + n - 1;
		if (sum == x) {
			System.out.println("YES");
		} else {
			System.out.println("NO");
		}
		src.close();
	}

}
