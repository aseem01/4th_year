package networking_input_output;

import java.io.IOException;
import java.io.PrintStream;
import java.net.Socket;
import java.net.UnknownHostException;
import java.util.Scanner;

public class client {

	public static void main(String[] args){
		
		int number, temp;
		Scanner src = new Scanner(System.in);
		try
		{
		Socket s = new Socket("192.168.0.102", 52779);
		Scanner src1 = new Scanner(s.getInputStream());
		System.out.println("Enter any number");
		number = src.nextInt();
		PrintStream p = new PrintStream(s.getOutputStream());
		p.println(number);
		temp = src1.nextInt();
		System.out.println(temp);

		}
		catch(Exception e)
		{
			System.out.println(e);
		}
		
	}

}
