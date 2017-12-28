package Assignment_05_student;


/*
 * Author :Aseem Chakrabarthy
 * Date: 21-12-2017
 * Algorithm:brute force
 */

public class OutputDemo extends GradeDemo{
	 public void display()
	  {
		  super.GradeDispaly();
		  
		  for(int i=0;i<5;i++)
		  {
			  if(i==0) order="1st";
			  if(i==1) order="2nd";
			  if(i==2) order="3rd";
			  if(i==3) order="4th";
			  if(i==4) order="5th";
			  System.out.println(order+" student name : "+ arName[i]+" and his/her Grade : "+grade[i]);
		  }
	  }
}
