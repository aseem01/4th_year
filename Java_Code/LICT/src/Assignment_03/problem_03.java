package Assignment_03;

import java.util.Scanner;

/*
 * Author :Aseem Chakrabarthy
 * Date: 21-12-2017
 * Algorithm:brute force
 */


public class problem_03 {

	public static void main(String[] args) 
	{
		Scanner src=new Scanner(System.in);
		long sum=0;
		String input="";
		System.out.println("Please enter your input : ");
		while(src.hasNextInt())
		{
			int n=src.nextInt();
			sum+=n;
		}
		System.out.println("Summation of your input is : "+sum);
		src.close();
		

	}

}
