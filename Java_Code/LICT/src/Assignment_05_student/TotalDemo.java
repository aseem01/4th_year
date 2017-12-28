package Assignment_05_student;

/*
 * Author :Aseem Chakrabarthy
 * Date: 21-12-2017
 * Algorithm:brute force
 */

public class TotalDemo extends InputDemo
{
	public void display()
	   {
		   super.marks();
		   for(int i=0;i<5;i++)
		   {
			   sum=0;
			   for(int j=0;j<5;j++)
			   {
				  sum+= array[i][j];
			   }
			   sSum[i]=sum;
			   //System.out.println("result is summation : "+sSum[i]);
		   }
		   
		   System.out.println("It's TotalDemo Class.First student name is :  "+arName[0]);
		   
	   }
}
