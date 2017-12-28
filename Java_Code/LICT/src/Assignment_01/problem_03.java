package Assignment_01;

/*
 * Author :Aseem Chakrabarthy
 * Date: 18-12-2017
 * Algorithm:brute force
 */

public class problem_03 {

	public static void main(String[] args)
	{
		for(int i=1;i<=5;i++)
		{
			for(int j=1;j<=5-i+1;j++)
			{
				System.out.print(5-j+1+" ");
			}
			System.out.println();
		}

	}

}
