package Educational_Round_34;
/******************************
"Belief yourself,Never Quit"                         
                               
*******************************/
                      
import java.util.Scanner;

public class Problem_A {

	public static void main(String[] args) {
		Scanner src = new Scanner(System.in);
		int n, tc;
		tc = src.nextInt();
		for (int i = 1; i <= tc; i++) {
			n = src.nextInt();
			int flag = 0;
			for (int j = 0; j <= 100; j++) {
				for (int k = 0; k <= 100; k++) {
					if ((k * 3 + j * 7) == n)
						flag = 1;
					if ((j * 3 + k * 7) == n)
						flag = 1;
				}
			}
			if (flag == 1) {
				System.out.println("YES");
			} else {
				System.out.println("NO");
			}
		}

	}

}
