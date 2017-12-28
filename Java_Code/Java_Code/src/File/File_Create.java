package File;

import java.io.File;

public class File_Create {

	public static void main(String[] args) 
	{
		File dir=new File("person");
		dir.mkdir();
	
		File file1=new File("D:/4th_year/Java_Code/Java_Code/person/Student.txt");
		File file2=new File("D:/4th_year/Java_Code/Java_Code/person/Teacher.txt");
		try
		{
			file1.createNewFile();
			file2.createNewFile();
			System.out.println("File created successfully");
		}
		catch(Exception e)
		{
			System.out.println(e);
		}
		
		if(file1.exists())
		{
			System.out.println("Your file is exixts");
		}

	}

}
