package Assignment_04_info;

/*
 * Author :Aseem Chakrabarthy
 * Date: 21-12-2017
 * Algorithm:brute force
 */

public class GradeDemo extends AvgDemo
{
	//ResultDemo result=new ResultDemo();
  public void GradeDispaly()
  {
	  
	  super.AverageCalculation();
	  if(Average>=80) 
	  {
		  grade="A+";
	  }
	  else if(Average>=70 && Average<=79)
	  {
		  grade="A";
	  }
	  else if(Average>=60 && Average<=69)
	  {
		  grade="A-";
	  }
	  else if(Average>=50 && Average<=59)
	  {
		  grade="B";
	  }
	  else
	  {
		  grade="F";
	  }
  }
}
