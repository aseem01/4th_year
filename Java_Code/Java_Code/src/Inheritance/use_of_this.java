package Inheritance;



class super_class1
{
	int number=10000;
	
	public void display()
	{
		System.out.println("This is the super class");
	}
}

class sub_class1 extends super_class1
{
	int number=2000;
	public void display()
	{
		System.out.println("This is the sub class");
	}
	
	public void method()
	{
		sub_class1 sub=new sub_class1();
		sub.display();
		this.display();
		System.out.println("Number of the this keyword = "+this.number);
		System.out.println("Number of the object class = "+sub.number);
	}
}

public class use_of_this {

	public static void main(String[] args) 
	{
	 	
      sub_class1 obj=new sub_class1();
      obj.method();
		
	}

}
