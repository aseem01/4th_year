package File;

import java.io.File;
import java.util.Scanner;

public class File_read {

	public static void main(String[] args) {
		try {
			File file = new File("D:/4th_year/Java_Code/Java_Code/person/Stduent.txt");
			Scanner src = new Scanner(file);
			// String id,name;
			while (src.hasNext()) {
				String id = src.next();
				String name = src.next();
				System.out.print("ID = "+id+" Name = "+name);
				System.out.print("\n");
			}
			src.close();
		} catch (Exception e) {
			System.out.print(e);
		}

	}

}
