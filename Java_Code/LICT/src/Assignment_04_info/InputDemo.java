package Assignment_04_info;

/*
 * Author :Aseem Chakrabarthy
 * Date: 21-12-2017
 * Algorithm:brute force
 */

import java.util.Scanner;

public class InputDemo 
{
	
	
	int sum=0,n,Average;
	String grade;
	int [] array = new int[999999];
  public void marks()
  {
	  System.out.println("Enter your 10 course marks : ");
	  Scanner src=new Scanner(System.in);
	  //System.out.println("I'm here");
	  for(int i=0;i<10;i++)
	  {
		  n=src.nextInt();
		  array[i]=n;
		  
	  }
	  
	 
  }
}