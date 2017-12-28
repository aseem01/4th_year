package Assignment_05_student;
/*
 * Author :Aseem Chakrabarthy
 * Date: 21-12-2017
 * Algorithm:brute force
 */

public class AvgDemo extends TotalDemo
{
	
	public void AverageCalculation()
	{
		super.display();
		for(int i=0;i<5;i++)
		{
		average[i]=sSum[i]/5;
		}
		System.out.println("It's Average Class.Third student name is :  "+arName[2]);
	}

}
