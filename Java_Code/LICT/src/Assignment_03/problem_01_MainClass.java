package Assignment_03;

/*
 * Author :Aseem Chakrabarthy
 * Date: 21-12-2017
 * Algorithm:brute force
 */

public class problem_01_MainClass {

	public static void main(String[] args) 
	{
		problem_01_Employee Employee=new problem_01_Employee();
		Employee.setename(1,"Aseem Chakrabarthy",100000,"Software Engineer","Never quit");
		System.out.println("eid : "+Employee.getsid());
		System.out.println("ename : "+Employee.getsname());
		System.out.println("esal : "+Employee.getssal());
		System.out.println("edept : "+Employee.getsdept());
		System.out.println("eadd : "+Employee.getsadd());
		System.out.println();
		System.out.println();
		
		
		
		problem_01_manager Manager=new problem_01_manager();
		
		Manager.setename("Khusumbag", "Moulvibazar", "Bangladesh");
		System.out.println("Street : "+Manager.getsstreet());
		System.out.println("City : "+Manager.getscity());
		System.out.println("Country : "+Manager.getscountry());
		
		System.out.println();
		System.out.println();
		
		Manager.setename(1,"Ashim Chakraborty",200000,"Project Manager and Team Leader","Never quit");
		System.out.println("eid : "+Manager.getsid());
		System.out.println("ename : "+Manager.getsname());
		System.out.println("esal : "+Manager.getssal());
		System.out.println("edept : "+Manager.getsdept());
		System.out.println("eadd : "+Manager.getsadd());
		
		

	}

}
