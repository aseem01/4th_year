
/******************************
"Belief yourself,Never Quit"                         
                               
*******************************/
package Round_452;

import java.util.Scanner;
import java.util.Vector;


public class Problem_C {

	public static void main(String[] args) 
	{
		Scanner src=new Scanner(System.in);
		int n=src.nextInt();
		Vector<Integer>v=new Vector<Integer>(n);
		long  first=0,second=0,flag=1;
		for(int i=n;i>1;i-=2)
		{
			if(flag==1)
			{
				first+=i;
				v.add(i);
				second+=(i-1);
				flag=0;
			}
			else
			{
				first+=(i-1);
				v.add(i-1);
				second+=i;
				flag=1;
			}
			
		}
		
		if(n%2==1)
		{
			if(first<second) first+=1;
			else second+=1;
		}
		
		System.out.println(Math.abs(first-second));
		System.out.print(v.size()+" ");
		for(int i=0;i<v.size();i++)
		{
			System.out.print(v.get(i)+" ");
		}
		
		src.close();
 
	}

}
