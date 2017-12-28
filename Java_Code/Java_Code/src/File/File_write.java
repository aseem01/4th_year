package File;

import java.io.FileNotFoundException;
import java.util.Formatter;

public class File_write {

	public static void main(String[] args) 
	{
	
		try
		{
		Formatter formatter=new Formatter("D:/4th_year/Java_Code/Java_Code/person/student.txt");
		formatter.format("%s = %s\r\n","101","Aseem Chakrabarthy");
		formatter.format("%s = %s\r\n", "102","Anik Chakrabarthy");
		formatter.format("%s = %s\r\n","103","Ashit Chakrabarthy");
		formatter.close();
		}
		catch(FileNotFoundException e)
		{
			System.out.println(e);
		}

	}

}
