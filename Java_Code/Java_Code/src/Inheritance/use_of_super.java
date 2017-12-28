package Inheritance;
class super_class
{
	int number=30;
	public void display()
	{
		System.out.println("This is the super class");
	}
}
class sub_class extends super_class
{
	int number=100;
	
	public void display()
	{
		System.out.println("This is the sub class");
	}
	public void method()
	{
		sub_class sub=new sub_class();
		sub.display();
		super.display();
		System.out.println("number of sub class = "+sub.number);
		System.out.println("number of super class = "+super.number);
	}
}

public class use_of_super {

	public static void main(String[] args)
	{
		sub_class obj=new sub_class();
		obj.method();

	}

}
