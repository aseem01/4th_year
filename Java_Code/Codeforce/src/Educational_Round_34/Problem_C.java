package Educational_Round_34;





/******************************
"Belief yourself,Never Quit"                         
                               
*******************************/

import java.util.Arrays;
import java.util.Scanner;
public class Problem_C {

	public static void main(String[] args) 
	{
		Scanner src=new Scanner(System.in);
		
		int tc,n;
		tc=src.nextInt();
		int ar[]=new int [tc];
		int br[]=new int [tc];
		for(int i=0;i<tc;i++)
		{
			n=src.nextInt();
			ar[i]=n;
		}
		Arrays.sort(ar);
		
		//debugging
		/*for(int i=0;i<ar.length;i++)
		{
			System.out.print(" "+ar[i]);
		}*/
		
		for(int i=0;i<tc;i++)
		{
			br[i]=0;
		}
		
		for(int i=0,j=1;i<tc;)
		{
			if(j>tc-1) break;
			if(ar[i]<ar[j] && br[j]==0)
			{
				br[i]=1;
				//System.out.println("check = "+i);
				i++;
				j++;
			}
			else
			{
				j++;
			}
		}
		
		int cnt=0;
		for(int i=0;i<tc;i++)
		{
			if(br[i]==0) 
			{
				cnt++;
			}
		}
		
		
		System.out.println(cnt);

	}

}
