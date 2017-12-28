package File;

import java.io.File;

public class Directory_Create {

	public static void main(String[] args)
	{
		//File dir=new File("person");
		File dir=new File("C:/Users/Aseem/Desktop/person");
		dir.mkdir();
		String dirctorylocation=dir.getAbsolutePath();
		System.out.println(dirctorylocation);
		System.out.println("directory name = "+dir.getName());
		//dir.delete();
		if(dir.delete())
		{
			System.out.println(dir.getName()+" folder is deleted");
		}

	}

}
