

import java.util.Scanner;
public class computer
{


  public void show()
	{
		System.out.println("I'm a computer class man");
	}


public void display()
	{
	
	System.out.println("Please enter a value for summation calculation : ");





	Scanner src=new Scanner(System.in);

  		int n=src.nextInt();
		
		long sum=0;

		for(int i=1;i<=n;i++)
		{
			sum+=i;

		}
		System.out.println("Factorila value is : "+sum);

	

	}

}