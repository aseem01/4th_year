package Assignment_01;

import java.util.Scanner;

/*
 * Author :Aseem Chakrabarthy
 * Date: 18-12-2017
 * Algorithm:brute force
 */

public class problem_04 {

	public static void main(String[] args) 
	{
		Scanner src=new Scanner(System.in);
		int [] array=new int[100];
		System.out.println("How many numbers you want to check : ");
		int n=src.nextInt();
		System.out.println("Please enter your number number : ");
		for(int i=0;i<n;i++)
		{
			int value=src.nextInt();
			array[i]=value;
		}
		System.out.print("You enter this number : ");
		for(int i=0;i<n;i++)
		{
			System.out.print(array[i]+" ");
		}
		System.out.println();
		
		System.out.print("Reverse of your enter number : ");
		
		for(int i=n-1;i>=0;i--)
		{
			System.out.print(array[i]+" ");
		}
		src.close();
	}

}
