package Static_Keyword;

import java.util.Scanner;

class aseem {
	static int i=10;

	public static void show() {
		System.out.println("Hellow World");
		System.out.println(i);

	}
}

public class Static_variable {

	public static void main(String[] args) {
		Scanner src = new Scanner(System.in);
		aseem.show();
		aseem.i=0;
		src.close();

	}

}
