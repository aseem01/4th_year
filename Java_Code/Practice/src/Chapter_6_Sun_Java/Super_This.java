package Chapter_6_Sun_Java;

class Supper
{
	public void getvalue()
	{
		System.out.println("I'm here boss");
	}
}
class Sub extends Supper
{
	public void getvalue()
	{
		super.getvalue();
		System.out.println("Hellow World");
		this.getanothervalue();
	}
	public void getanothervalue()
	{
		System.out.println("I'm Aseem Chakrabarthy");
	}
	
	
}

public class Super_This {

	public static void main(String[] args) 
	{
		Sub obj=new Sub();
		obj.getvalue();

	}

}
