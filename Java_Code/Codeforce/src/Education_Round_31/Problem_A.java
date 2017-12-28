package Education_Round_31;

import java.util.Arrays;
import java.util.Scanner;

public class Problem_A {

	public static void main(String[] args) 
	{
		Scanner src =new Scanner(System.in);
		int [] array=new int[1010];
		int n,t,value,sum,cnt;
		n=src.nextInt();
		t=src.nextInt();
		for(int i=0;i<n;i++)
		{
			value=src.nextInt();
			array[i]=value;
		}
		//Arrays.sort(array);
		sum=0;
		cnt=0;
		for(int i=0;i<n;i++)
		{
			int baki=86400-array[i];
			sum=sum+baki;
			cnt++;
			if(sum>=t) break;
		}
		System.out.println(cnt);
		src.close();

	}

}
