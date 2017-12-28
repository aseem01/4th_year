/*package product;

import java.lang*;
import java.util;
import java.time.LocalTime;
import java.sql.connection;
*/


/*
*Author : Aseem chakrabarthy;
*Class No:05;
*Date: 13-12-2017;
*/


public class productTest
{


	public static void main(String args[])
	{

	  product obj=new product("Mobile",101,12500,"Samsung-j2");
	  System.out.println(obj);


          test result=new test();
 	  result.display();
	  result.show();

	  computer cmo=new computer();
	  cmo.display();
          cmo.show();

	  mobile mb=new mobile();
	  mb.display();
	  mb.show();


	}


}