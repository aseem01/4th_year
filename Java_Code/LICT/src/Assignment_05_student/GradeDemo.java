package Assignment_05_student;
/*
 * Author :Aseem Chakrabarthy
 * Date: 21-12-2017
 * Algorithm:brute force
 */

public class GradeDemo extends AvgDemo 
{

	public void GradeDispaly()
	  {
		  
		  super.AverageCalculation();
		  for(int i=0;i<5;i++)
		  {
		  if(average[i]>=80) 
		  {
			  grade[i]="A+";
		  }
		  else if(average[i]>=70 && average[i]<=79)
		  {
			  grade[i]="A";
		  }
		  else if(average[i]>=60 && average[i]<=69)
		  {
			  grade[i]="A-";
		  }
		  else if(average[i]>=50 && average[i]<=59)
		  {
			  grade[i]="B";
		  }
		  else
		  {
			  grade[i]="F";
		  }
		  }
		  
		  System.out.println("It's GradeDemo Class.Second student name is :  "+arName[1]);
	  }
	
	
}
