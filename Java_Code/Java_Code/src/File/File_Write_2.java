package File;

import java.io.FileNotFoundException;
import java.util.Formatter;
import java.util.Scanner;

public class File_Write_2 {

	public static void main(String[] args) 
	{
		try
		{
			Formatter formatter=new Formatter("D:/4th_year/Java_Code/Java_Code/person/Stduent.txt");
			Scanner src=new Scanner(System.in);
			int n;
			String id, name;
			System.out.print("How many student information you enter : ");
			n=src.nextInt();
			for(int i=1;i<=n;i++)
			{
				id=src.next();
				name=src.next();
				formatter.format("%s %s\r\n",id,name);
			}
			formatter.close();
			src.close();
			
		}
		catch(FileNotFoundException e)
		{
			System.out.println(e);
		}

	}

}
