package Sorting;

import java.util.Scanner;
class calculation
{
	public void sort(int [] ar)
	{
		System.out.println("Hello I'm here darling");
		int n=ar.length;
		
		for(int i=0;i<n-1;i++)
		{
			for(int j=0;j<n-i-1;j++)
			{
				if(ar[j]>ar[j+1])
				{
					int temp=ar[j];
					ar[j]=ar[j+1];
					ar[j+1]=temp;
				}
			}
		}
		
		System.out.println("After sorting = "+n);
		for(int k=0;k<ar.length;k++)
		{
			System.out.println(ar[k]);
		}
		
		
	}
}

public class bubble_sort {

	public static void main(String[] args) 
	{
		Scanner src=new Scanner(System.in);
		System.out.println("Take input how much number do you want sort");
		int n=src.nextInt();
		int ar[] = new int[n];
		System.out.println("Enter your value boss :: ");
		for(int i=0;i<n;i++)
		{
			int value=src.nextInt();
			ar[i]=value;
		}
		
		calculation sorting =new calculation();
		sorting.sort(ar);
		src.close();

	}

}
