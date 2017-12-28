

import java.util.Scanner;
public class test
{


  public void show()
	{
		System.out.println("I'm a first class man");
	}


public void display()
	{
	
	System.out.println("Please enter a value for factorial calculation : ");





	Scanner src=new Scanner(System.in);

  		int n=src.nextInt();
		int fact=1;
		for(int i=1;i<=n;i++)
		{
		  fact=fact*i;
		}
		System.out.println("Factorila value is : "+fact);

	

	}

}