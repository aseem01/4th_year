package Assignment_02;

import java.util.Scanner;

/*
 * Author :Aseem Chakrabarthy
 * Date: 18-12-2017
 * Algorithm:brute force
 */

public class problem_02 {

	public static void main(String[] args) {
		Scanner src = new Scanner(System.in);
		System.out.print("Enter your row and coloum for Matrix A : ");
		int row_A = src.nextInt();
		int col_A = src.nextInt();
		int[][] matrix_A = new int[row_A][col_A];

		System.out.println("Enter value for Matrix A : ");
		for (int i = 0; i < row_A; i++) {
			for (int j = 0; j < col_A; j++) {
				int n = src.nextInt();
				matrix_A[i][j] = n;

			}
		}

		System.out.print("Enter your row and coloum for Matrix B : ");
		int row_B = src.nextInt();
		int col_B = src.nextInt();
		int[][] matrix_B = new int[row_B][col_B];
		System.out.println("Enter value for Matrix B : ");
		for (int i = 0; i < row_B; i++) {
			for (int j = 0; j < col_B; j++) {
				int n = src.nextInt();
				matrix_B[i][j] = n;

			}
		}

		System.out.println("Multiplication of Matrix A and Matrix B : ");

		for (int i = 0; i < row_A; i++) {
			for (int j = 0; j < row_B; j++) 
			{
				int keep=0;
				
				for(int k=0;k<row_B;k++)
				{
					keep+=matrix_A[i][k]*matrix_B[k][j];
				}
				System.out.print(keep+" ");
			}

			System.out.println();
		}
		src.close();
	}

}
