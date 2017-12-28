

/*package product;

import java.lange*;
import java.time.LoacalTime;
import java.util;
import sql.connection;
*/
/*
* Author: Aseem Chakrabarthy
* Class No: 5
* Date: 13-12-2017
*/


public class product
{

    String pName;
    long pid;
    double pPrice;
    String pCategory;

	public product(String name,long id,double price,String Category)
	{
		pName=name;
		pid=id;
		pPrice=price;
		pCategory=Category;

	} 


	public String toString()
	{
	
		return " pName: "+pName+" pid : "+pid+" pPrice : "+pPrice+" pCategory : "+pCategory;	

	}


}