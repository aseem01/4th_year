package Test;

class add
{
	sub sub1=new sub();
	public void dis()
	{
	sub1.display();
	}
	
}
class sub extends add
{
	public void display()
	{
		System.out.println("Hellow world");
	}
}

public class test2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
   add add1=new add();
   add1.dis();
	}

}
