package Assignment_02;

import java.util.Scanner;

/*
 * Author :Aseem Chakrabarthy
 * Date: 18-12-2017
 * Algorithm:brute force
 */

public class problem_03 {

	public static void main(String[] args) {

		Scanner src = new Scanner(System.in);
		System.out.println("How many number you want to addition : ");
		int n = src.nextInt();
		int[] array = new int[n];
		System.out.print("Enter your value : ");
		for (int i = 0; i < n; i++) {
			int value = src.nextInt();
			array[i] = value;
		}
		int sum = 0;
		for (int i = 0; i < n; i++) {
			sum += array[i];
		}
		System.out.println("summation using array is : "+sum);
		src.close();
	}

}
