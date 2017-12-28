package Round_444;

import java.util.Scanner;

public class Problem_A {

	public static void main(String[] args) {
		Scanner src=new Scanner(System.in);
		String s;
		s=src.nextLine();
		int zero=0;
		int one=0;
		int flag=0;
		for(int i=0;i<s.length();i++)
		{
			char ch=s.charAt(i);
			if(ch=='1') flag=1;
			if(flag==1)
			{
				if(ch=='1') one++;
				if(ch=='0') zero++;
			}
		}
		if(one>=1 && zero>=6)
		{
			System.out.println("yes");
		}
		else
		{
			System.out.println("no");
		}
		src.close();
	}

}
