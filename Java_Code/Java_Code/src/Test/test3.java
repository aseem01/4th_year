package Test;

import java.util.Scanner;

public class test3 {

	public static void main(String[] args)
	{
		Scanner src=new Scanner(System.in);
		Scanner src1=new Scanner(System.in);
		String [] sName=new String[5];
		int [][] array=new int [5][9999];
		
		
		
		
		for(int i=0;i<5;i++)
		{
			
			System.out.println("Enter your input : ");
			sName[i]=src1.nextLine();
			System.out.println("Name : "+sName[i]);
			
			int k=i;
			for(int j=0;j<5;j++)
			{
				array[k][j]=src.nextInt();
				System.out.println("number : "+array[k][j]);
			}
			
			/*System.out.println("You Enter Name : "+sName[i]);
			System.out.print("You enter number : ");
			for(int j=0;j<5;j++)
			{
				System.out.println(array[i][j]);
			}*/
			
			
			
			
			
			
		}
		
		
		//System.out.println("Output :");
		
		
		
		
		
		
		
		
		
	}

}
