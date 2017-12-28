package Polymorphism;

class person
{
	void display()
	{
		System.out.println("I'm a person");
	}
}

class teacher extends person
{
	void display()
	{
		System.out.println("I'm a teacher");
	}
}

class student extends person
{
	void display()
	{
		System.out.println("I'm a student");
	}
}


public class Polymorphism_01 {

	public static void main(String[] args)
	{

		person p=new person();
		p.display();
		p=new teacher();
		p.display();
		p=new student();
		p.display();
		

	}

}
