package Inheritance;

class super_class_2
{
	int number=1000;
	public void display()
	{
		System.out.println("I'm a super class");
	}
}

class sub_class_2 extends super_class_2
{
	int number=2000;
	public void display()
	{
		System.out.println("I'm a sub class");
	}
	
	public void method()
	{
		super.display();
		this.display();
		System.out.println("Number is the this keyword = "+this.number);
		System.out.println("Number is the super keyword = "+super.number);
		
	}
}

public class this_super {

	public static void main(String[] args) 
	{
	
		sub_class_2 obj=new sub_class_2();
		obj.method();

		
	}

}
