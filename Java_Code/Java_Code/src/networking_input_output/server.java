package networking_input_output;

import java.io.PrintStream;
import java.net.ServerSocket;
import java.net.Socket;
import java.util.Scanner;

public class server {

	public static void main(String[] args) {

		int number, temp;
		try {
			ServerSocket s1 = new ServerSocket(52779);
			Socket ss = s1.accept();
			Scanner sc = new Scanner(ss.getInputStream());
			number = sc.nextInt();
			temp = number * 2;
			PrintStream p = new PrintStream(ss.getOutputStream());
			p.println(temp);
		} catch (Exception e) {
			System.out.println(e);
		}

	}

}
