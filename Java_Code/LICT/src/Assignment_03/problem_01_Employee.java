package Assignment_03;
/*
 * Author :Aseem Chakrabarthy
 * Date: 21-12-2017
 * Algorithm:brute force
 */

public class problem_01_Employee extends problem_01_Address
{

	private int eid;
	private String ename;
	private int esal;
	private String edept;
	private String eadd;
	
	public void setename(int id,String name,int sal,String dept,String add)
	{
		this.eid=id;
		this.ename=name;
		this.esal=sal;
		this.edept=dept;
		this.eadd=add;
	}
	
	public int getsid()
	{
		return eid;
	}
	
	public String getsname()
	{
		return ename;
	}
	
	public int getssal()
	{
		return esal;
	}
	
	public String getsdept()
	{
		return edept;
	}
	
	public String getsadd()
	{
		return eadd;
	}
	
	
}
